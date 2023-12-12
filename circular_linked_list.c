#include<stdio.h>
#include<stdlib.h>

struct Node{
    int a;
    struct Node *next;
};


void Add2List(int data, struct Node *headptr)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    if(headptr == NULL)
    {
        headptr = new_node;
        new_node->a = data;
        new_node->next  = NULL;
    }
    else
    {
        struct Node *prev_node = headptr;
        while(prev_node->next!=headptr)//circular linked list
        {
            prev_node = prev_node->next;
        }
        prev_node->next = new_node;
        new_node->a = data;
        new_node->next  = headptr; //new node -next will point to head again due to circular linked list

    }
}

void print(struct Node *headptr)
{
    struct Node *curr_node = headptr;
    do
    {
        printf("%d\t", curr_node->a);
        curr_node = curr_node->next;
    }while(curr_node != headptr);
}

struct Node* insertfirst(int data, struct Node *headptr)
{
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    struct Node *q = headptr->next;
    p->a = data;
    while(q->next!=headptr)
    {
        q = q->next;
    }
    //at this point q points to the last node of the circular linked list
    q->next = p;
    p->next = headptr;
    return headptr;
}

int main()
{
    struct Node *head = NULL;
    Add2List(6,head); //creating a linked list
    Add2List(8,head); //creating a linked list
    Add2List(10,head); //creating a linked list
    Add2List(12,head); //creating a linked list
    Add2List(15,head); //creating a linked list
    print(head); //printing a linked list

    head = insertfirst(20, head); //inserting at the beginning of the circular linked list
    return 0;
}