#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your entered array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // using while loop
    //    int i=0;
    //    while(i<n-1){
    //        int j=0;
    //        while(j<n-1-i){
    //            if(arr[j]>arr[j+1]){
    //                int swap = arr[j];
    //                arr[j] = arr[j+1];
    //                arr[j+1] = swap;
    //            }
    //            j++;
    //        }
    //        i++;
    //    }

    // using for loop
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    printf("Finally, sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}