#include<stdio.h>

void merge(int a[], int l, int m, int r){
    int size_left,size_right;

    size_left = m - l + 1;
    size_right = r - m;

    int L[size_left], R[size_right];

    for(int i=0; i<size_left; i++){
        L[i] = a[l + i];
    }
    for(int i=0; i<size_right; i++){
        R[i] = a[m + i + 1];
    }

}

void merge_sort(int arr[],int left, int right){
    if(left>=right){
        return ;
    }
    int mid = left + (right-left)/2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid+1, right);

    merge(arr, left, mid, right);
}

int main(){
    int arr[]={5,8,9,4,6,3,7,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int init_index=0;

    merge_sort(arr,init_index,len-1);

    printf("After sorting use merge sort: ");
    for(int i=0; i<len; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
