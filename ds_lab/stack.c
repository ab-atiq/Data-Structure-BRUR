#include <stdio.h>

int stack[50];
int maxstk = 50;
int top = 0;

void push(int item) {
    if (top == maxstk) {
        printf("OVERFLOW\n");
        return -1;
    }
    top = top + 1;
    stack[top] = item;
}

int pop() {
    if (top == 0) {
        printf("UNDERFLOW\n");
        return -1;
    }
    top = top - 1;
    return stack[top + 1];
}

int main() {
    push(10);
    push(4);
    push(3);
    printf("Top element is %d\n", pop());
    printf("Top element is %d\n", pop());
    return 0;
}