#include<stdio.h>
#include<stdlib.h>


typedef struct stack_node{
    int arr[10];
    int top;
}node;

void push(int item, node *s)
{
    if(s->top==9)
    {
        printf("The element cant be pushed------Overflow error can happen");
    }
    else
    {
        s->top++;
        s->arr[s->top] = item;
        printf("Element is pushed onto stack");
    }
}
void pop(node *s)
{
    int item;
    if(s->top < 0)
    {
        printf("The element cant be popped------underflow error chances");
    }
    else
    {
        item = s->arr[s->top];
        s->top--;
        printf("Element %d has been popped",item);
    }
}

int main(){

    char ch;
    int val;
    node stack;
    stack.top = -1; //stack is empty in the beginning

    while(1)
    {
    printf("Array representation of Stacks:\n");
    printf("Select an operation: \n");
    printf("1. Push an element onto the stack:\n");
    printf("2. Pop an element from the stack:\n");
    printf("3. Exit!\n");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
        case '1':
            printf("enter the number you want to insert:");
            scanf("%d",&val);
            push(val, &stack);
            break;
        case '2':
            // printf("Enter the number to be popped:");
            // scanf("%d",&val);
            pop(&stack);
            break;
        case '3':
            exit(0);
    }    
    }
    return 0;
}