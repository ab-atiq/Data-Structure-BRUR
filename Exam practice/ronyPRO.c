#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *ptr;
};

int main()
{
    struct node *head, *temp, *newNode;
    head = NULL;
    int choice = 1;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :");
        scanf("%d", &newNode->value);
        newNode->ptr = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->ptr = newNode;
            temp = newNode;
        }
        printf("Do you want to add more node press (1 or 0) =\n");
        scanf("%d", &choice);
    }
}