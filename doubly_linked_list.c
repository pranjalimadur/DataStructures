#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* add2List(struct Node* headptr)
{
    int n, data, i;
    printf("Enter number of nodes:");
    scanf("%d",&n);

    if(n==0)
    {
        return headptr;
    }
    printf("Data for node 1:");
    scanf("%d",&data);
    headptr = add2Empty(headptr,data);

    for(i=1;i<n;i++)
    {
        printf("Enter data for node %d:",i+1);
        scanf("%d",&data);
        headptr = addAtEnd(headptr,data);
    }

    return headptr;

}

struct Node* add2Empty(struct Node* headptr, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = NULL;
    headptr = ptr;
    return headptr;
}

struct Node* addAtEnd(struct Node* headptr,int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *q;
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = NULL;
    q = headptr;
    while(q->next != NULL)
    {
        q = q->next;
    }
    q->next = ptr;
    ptr->prev = q;
    return headptr;
}

struct Node* addatBeg(struct Node* headptr, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = headptr;
    headptr->prev = ptr;
    headptr = ptr;
    return headptr;
}
int main()
{
    struct Node *head = NULL;
    struct Node *ptr;
    head = add2List(head);

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    
    head = addatBeg(head,20);

    return 0;
}