#include<stdio.h>

int main(){

    int n, arr[10], smallest, smallestSec; 

    printf("Enter array elements");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    smallest=arr[0];

    for(int i=0;i<10;i++){
        if(smallest > arr[i]){
            smallest= arr[i];
        }
    }
    printf("%d is smallest", smallest);
    
    if(smallest == arr[0])
        smallestSec = arr[1];
    else
        smallestSec = arr[0];
    for(int i=1;i<10;i++){
        if((smallestSec > smallest) && (smallestSec >arr[i])){
            smallestSec = arr[i];
        }
    }
    printf("%d is second smallest ", smallestSec);
    return 0;
}