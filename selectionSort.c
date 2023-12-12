#include<stdio.h>

int main(){

    int n, arr[10], i,j, temp;

    printf("Enter the n no of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}