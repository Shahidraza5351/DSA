#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* ptr;
};
struct node* stnode;
struct node* reverse(struct node* head);
void creatlinklist(int n)
{
    struct node* fnnode,*temp;
    int num, i;
    stnode=(struct node*)malloc(sizeof(struct node));
    if(stnode==NULL)
    {
        printf("memory can not be allocated");
    }
    else{
        printf("enter the data of node 1 :");
        scanf("%d",&num);
        stnode->data=num;
        stnode->ptr=NULL;
        temp=stnode;
        for(i=2;i<=n;i++)
        {
            fnnode=(struct node*)malloc(sizeof(struct node));
            printf("enter the data of node %d :",i);
            scanf("%d",&num);
            fnnode->data=num;
            fnnode->ptr=NULL;
            temp->ptr=fnnode;
            temp=temp->ptr;
        }
    }
}
void display()
{
    struct node* tmp;
     tmp=stnode;
    while (tmp!=NULL)
    {
        printf("DATA %d\n", tmp->data);
        tmp=tmp->ptr;
    }
    
}
int main()
{
    int n;
    struct node* head;
    printf("enter the number of nodes");
    scanf("%d",&n);
    creatlinklist(n);
    printf("\n DATA entered in the node\n");
    display();
    head = reverse (stnode);
    printf("\n reversed link list :\n");
   struct node* temp=head;
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        temp=temp->ptr;
    }
    while (head != NULL) {
        struct node* next = head->ptr;
        free(head);
        head = next;
    }
}
struct node* reverse(struct node* head) {
    struct node* prev = NULL;
    struct node* next = NULL;
    while (head != NULL) {
        next = head->ptr;
        head->ptr = prev;
        prev = head;
        head = next;
    }
    return prev;
}