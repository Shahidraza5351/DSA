#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
struct node*nextptr;
}*stnode;
void creatNodeList(intn);
void displayList();
int main()
{
    int n;
    printf("\n\nLinked List : To creat and display singly linked list : \n");
    printf("-------------------------------------------------------------\n");
    printf("input the number of nodes");
    scanf("%d",&n);
    creatnodelist(n);
    printf("\n data entered in the list : \n ");
    displaylist();
    return 0;
}
void creatnodelist(int n)
{
    struct node*fnNode,*tmp;
    int num,i;
    stnode=(struct node*)malloc(sizeof(struct node));
    if(stnode==NULL)
    {
        printf("memory can not be allocated ");
    }
    else{
        printf("input data for node 1 : ");
        scanf("%d",&num);
        stnode->num=num;
        stnode->nextptr=NULL;
        tmp = stnode;
        for(i=2;i<=n;i++)
        {
            fnNode=(struct node*)malloc(sizeof(struct node));
            if(fnNode==NULL)
            {
                printf("memory can not be allocated");
                break;
            }
            else
            {
                printf("input data for node %d :",i);
                scanf("%d",&num);
                fnNode->num=num;
                fnNode->nextptr=NULL;
                tmp->nextptr=fnNode;
                tmp=tmp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node*tmp;
    if(stnode==NULL)
    {
        printf("list is empty");
    
    }
    else
    {
        tmp=stnode;
        while(tmp != NULL)
        {
            printf("data = %d\n",tmp -> num);
            tmp=tmp->nextptr;
        }
    }
    
}