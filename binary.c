//program to write binary searching 
#include<stdio.h>

void main()
{
    int n, i, l,h,mid, x;
    int arr[10];
    //count=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be found: ");
    scanf("%d",&x);
    l=0;
    h=n-1;
    mid=(l+h)/2;
    while(l<=h)
    {
        if(arr[mid]<x)
        {
            l=mid+1;
        }
        else if(arr[mid]==x)
        {
                printf("Element is found at %d", mid+1);
                break;
        }
        else
        {
            h=mid-1;
            mid=(l+h)/2;
        }

    }
    if(l>h)
    {
        printf("element is not found in the array");
    }

}