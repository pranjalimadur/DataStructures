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
        while(prev_node->next!=NULL)
        {
            prev_node = prev_node->next;
        }
        prev_node->next = new_node;
        new_node->a = data;
        new_node->next  = NULL;

    }
}


void print(struct Node *headptr)
{
    struct Node *curr_node = headptr;
    while(curr_node->next != NULL)
    {
        printf("%d\t", curr_node->a);
        curr_node = curr_node->next;
    }
}

struct Node* insertfirst(int data, struct Node *headptr)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->a  = data;
    ptr->next = headptr;
    headptr = ptr;
    printf("Element is inserted in the beginning");
    return ptr;

}

struct Node* insertsecond(int data, struct Node *headptr, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = headptr;
    int i=0;

    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->a = data;
    ptr->next = p->next;
    p->next = ptr;
    return headptr;
}

struct Node* insertthird(int data, struct Node *headptr)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p  = headptr;

    while(p->next!=NULL)
    {
        p = p->next;
    }
    ptr->a =  data;
    p->next = ptr;
    ptr->next = NULL;
    return headptr;
    
}

void insertafter(int data, struct Node* headptr, int index)
{
    struct Node *ptr =  (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = headptr;
    int i=0;
    while(i!=index)
    {
        if(p->next == NULL)
        {
            printf("Element cannot be inserted");
        }
        else
        {
        p = p->next;
        i++;
        }    
    }
    ptr->a = data;
    ptr->next = p->next;
    p->next = ptr;
}

struct Node* deletefirst(struct Node *headptr)
{
    struct Node *ptr = headptr;
    headptr = headptr->next;
    free(ptr);
    return headptr;
}

struct Node*  deletesecond(struct Node *headptr, int index)
{
    struct Node* p = headptr;
    struct Node* q = headptr->next;
    for(int i=0;i<index-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return headptr;
}

// struct Node*  deletethird(struct Node *headptr, int val)
// {
//     struct Node* p = headptr;
//     struct Node* q = headptr->next;
//     while(q->data != val && q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     if(q->data == val)
//     {
//         p->next = q->next;
//         free(q);
//     }
    
//     return headptr;
// }
struct Node* deletelast(struct Node *headptr)
{
    struct Node *p = headptr;
    struct Node *q = headptr->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return headptr;
}

void search(int value, struct Node *headptr)
{
    struct Node *temp;
    while(temp->next != NULL)
    {
        if(value == temp->a)
        {
            printf("Value has been found! at %u", temp);
            
        }
        else{
            printf("address is NULL");
        }
    }
}


int main()
{
    int val, index, delindex;
    struct Node *head = NULL;

    //creation and traversing through the linked list
    Add2List(6,head); //creating a linked list
    Add2List(8,head); //creating a linked list
    Add2List(10,head); //creating a linked list
    Add2List(12,head); //creating a linked list
    Add2List(15,head); //creating a linked list
    print(head); //printing a linked list

    //inserting a node
    head = insertfirst(20, head); //inserting a node in the beginning
    head = insertsecond(30, head, 2); //inserting a node in between the linked list//2 is the index here where we want to insert
    head = insertthird(40, head); //inserting a node at the end
    printf("Enter an index after which you want to insert a node:");
    scanf("%d", &index);
    insertafter(50, head, index); //inserting after a node in the linked list

    //deleting a node
    head = deletefirst(head); //delete a node at the beginning/first element in the linked list
    printf("Enter an index after which you want to insert a node:");
    scanf("%d", &delindex);
    head = deletesecond(head, delindex); //delete a node in between with given index
    head = deletelast(head); //delete the last node in the linked list
    // printf("Enter a value of the node which you want to delete:");
    // scanf("%d", &val);
    // head = deletethird(head, val);

    printf("Enter the value to be searched: ");
    scanf("%d",&val);
    search(val,head);

    


    return 0;
}