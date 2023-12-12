#include<stdio.h>

int main()
{
    int myArray[] = {2,3,15,[6]=9,7,8};
    int myArray1[10] = {5,7};

    int* ptr, addr, addr1, val;
    ptr = &myArray;
    ptr++;
    addr = &myArray+1;
    addr1 = &myArray+2;
    ptr = *(&myArray+1);
    val = ptr - myArray;

    printf("size of array = %d\r\n",(*(&myArray+1)-myArray));

    for(int i=0;i<9;i++)
    {
        printf("%d\n",myArray[i]);
    }

    return 0;
}