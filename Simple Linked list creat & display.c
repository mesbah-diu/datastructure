#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp;

void link()
{
    struct node *newnode;
    head=0;
    int count=0,p;
    while(p!=0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter your data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Press '0' for exit or any key to continue\n");
        scanf("%d",&p);
    }
}

void display()
{
    temp=head;
    printf("Your printf data:\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp =temp->next;
    }
}
int main()
{
    link();
    display();
}
