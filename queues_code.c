#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct queue_node{
    int arr[MAX];
    int front;
    int rear;
}node;

void insert(int item, node *q)
{
    if((q->front == q->rear+1)||(q->front ==0 && q->rear==MAX-1))
    {
        printf("The queue is full------Overflow error");
        return;
    }
    else
    {
        if(q->front==-1)
            q->front = q->rear = 0;
        else if(q->rear == MAX-1)
            q->rear = 0;
        else{
            q->rear++;
            q->arr[q->rear]=item;
        }
        printf("Element is inserted in the queue");
    }
}
void delete(node *q)
{
    int item;
    if(q->front == -1)
    {
        printf("The element cant be deleted, queue is empty------underflow error chances");
        return;
    }
    item = q->arr[q->front];   
    printf("Element %d has been deleted",item);
    if(q->front == q->rear)
        q->front = q->rear = -1;
    else if(q->front == MAX-1)
        q->front = 0;
    else
        q->front++;
    
}

int main(){

    char ch;
    int val;
    node queue;
    queue.front = -1;
    queue.rear = -1;

    while(1)
    {
    printf("Array representation of Queue:\n");
    printf("Select an operation: \n");
    printf("1. Insert an element into the queue:\n");
    printf("2. Delete an element from the queue:\n");
    printf("3. Exit!\n");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
        case '1':
            printf("enter the number you want to insert:");
            scanf("%d",&val);
            insert(val, &queue);
            break;
        case '2':
            // printf("Enter the number to be popped:");
            // scanf("%d",&val);
            delete(&queue);
            break;
        case '3':
            exit(0);
    }    
    }
    return 0;
}