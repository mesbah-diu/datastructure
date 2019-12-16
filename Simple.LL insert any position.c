#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
int count=0;

void link()
{
    head=0;
    int p;
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
        count++;
    }
}

void insertanyp()
{
    int i,position;
    printf("Enter the position you want to add data:\n");
    scanf("%d",&position);
    if(position>count)
    {
        printf("Invalid Position\n");
    }
    else
    {
        temp=head;
        while(temp<position)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void display()
{
    temp=head;
    printf("Your linkedlist data:\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp =temp->next;
    }
}
int main()
{
    link();
    insertanyp();
    display();
}



