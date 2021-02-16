
//program to write linear searching
#include<stdio.h>

void main()
{
    int n, i, count,x;
    int arr[10];
    count=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be found: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            count++;
            break;
        }
    }
    if(count!=0)
    {
        printf("Element is present at %d",i+1);
    }
    else{
        printf("Element not present");
    }
}