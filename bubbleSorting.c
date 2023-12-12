#include<stdio.h>

int main(){

    int arr[10], i, j, n, temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements in an array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("After sorting the array is:\n");

    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    
    return 0;
}





// printf("Enter the n no of elements: ");
//     scanf("%d", &n);
//     printf("Enter the array elements: ");
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }

//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }

//     for(i=0;i<n;i++){
//         printf("%d\t", arr[i]);
//     }