#include<stdio.h>
#include<stdlib.h>


int n;
struct node
{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL,*temp;



void create(int n)
{
    struct node *p;
    for(int i=0;i<n;i++)
    {
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&p->data);
        p->next = NULL;
        if(head == NULL)
        {
            tail = head = p;
        }
        else
        {
            tail->next = p;
            tail = p;
        }
    }
}

void create2(int n)
{
    struct node *p;
    for(int i=0;i<n;i++)
    {
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&p->data);
        p->next = NULL;
        if(head == NULL)
        {
            tail = head = p;
        }
        else
        {
            tail->next = p;
            tail = p;
        }
    }
    tail->next = head;
}

void check()
{
    int k=0;
    struct node *t;temp = head;
    while(temp->next != NULL)
    {  
        temp = temp->next;
        if(k>=n)
      break;
       k++;
    }
    if(temp->next==NULL)
    {
    printf("Null Terminated.");
    }
    else
    {
    printf("Cyclic Linked List.");
    }
}

int main()
{
    int s;
    printf("Enter the number of nodes.");
    scanf("%d",&n);
    printf("Enter 1:Singly\n2:Cyclic");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
      create(n);
    check();
    break;
    case 2:
      create2(n);
    check();
    break;
    default:
    printf("Wrong input");break;
    }
    return 0;
}

