#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
     struct node*next;
}
*temp=NULL,*first=NULL,*second=NULL,*third=NULL,*last=NULL;
struct node* creat(int A[],int n)
{
    int i;
    struct node*t,*last;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=A[0];
    temp->next=NULL;
    last=temp;
    for ( i = 1; i < n; i++)
    {
        t=(struct node*)malloc(sizeof(struct node*));
        t->data=A[i];
        t->next=NULL;
        last->next=t;    //we put address of t in last->next
        last=t;
    }
    return temp;
}
void display(struct node*p)
{
    while (p != NULL)
    {
        printf("%d", p->data);
        p=p->next;
    }
}
void merge(struct node*first,struct node*second)
{
if(first->data<second->data)
{
    third=last=first;
    first=first->next;
    last->next=NULL;
}
else
{
    third=last=second;
    second=second->next;
    last->next=NULL;
}
while(first !=NULL && second !=NULL)
{
    if(first->data< second->data)
{
    last->next=first;
    last=first;
    first=first->next;
    last->next=NULL;
}
else
{
last->next=second;
last=second;
second=second->next;
last->next=NULL;
}
}
if(first!=NULL)
last->next=first;
else
last->next=second;
}
int main()
{
   int A[]={3,4,7,9};
   int B[]={2,5,6,8};
   first=creat(A,4);
   second=creat(B,4);

   printf("1st link list\n");
   display(first);

   printf("\n2nd link list\n");
   display(second);

merge(first,second);

printf("\n\n merged link list :\n");
display(third);
    return 0;
}
