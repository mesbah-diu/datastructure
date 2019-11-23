#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

int main()
{
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    print(head);

    return 0;
}

void print(struct node* n)
{
    int count=0;
    while (n != NULL)
    {
        printf("[%d] [%d]   ",n,n->data);
        count++;
        n = n->next;
    }
    printf("\n");
    printf("No. of nodes in the list = %d",count);
}
