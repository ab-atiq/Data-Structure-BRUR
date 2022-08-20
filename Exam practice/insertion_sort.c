#include<stdio.h>
int main(){
    int a[]={3,44,38,5,47,15,36,26, 27,2},temp;
    int len = sizeof(a)/sizeof(a[0]);
    // insertion sort use
    for (int i=1; i<len; i++){
        temp = a[i];
        int j = i-1;
        while(j>=0 && temp<a[j]){
            a[j+1]=a[j];
            j -= 1;
        }
        a[j+1] = temp;
    }
    printf("Array sort using Insertion sort: ");
    for(int i=0; i<len; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
