#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your entered array elements: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        int min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            int swap = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = swap;
        }
    }
    printf("Finally, sorted array elements: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
