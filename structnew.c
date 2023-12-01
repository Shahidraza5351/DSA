#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

}*stnode;
struct node*head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void display();
void search();
void createlinklist(int n) {
    struct node* fnnode, * temp;
    int num, i;
    stnode = (struct node*)malloc(sizeof(struct node));
    if (stnode == NULL) {
        printf("Memory can not be allocated");
    }
    else {
        printf("Enter the data of node 1: ");
        scanf("%d", &num);
        stnode->data = num;
        stnode->next = NULL;
        temp = stnode;

        for (i = 2; i <= n; i++) {
            fnnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter the data of node %d: ", i);
            scanf("%d", &num);
            fnnode->data = num;
            fnnode->next = NULL;
            temp->next = fnnode;
            temp = temp->next;
        }
    }
}
void main()
{
    int choice =0,n;
    createlinklist(5);
    while (choice !=9)
    {
       printf("\n\n*********main menu*********\n");
       printf("\nchoose one option from the following list..\n");
       printf("\n============================================\n");
       printf("\n1.insert in beginning\n2.insert at last\n3.insert at any random location\n4.delete from beginning\n5.delete from last\n6.delete node after specified location\n7.search for an element\n8.exit\n");
       printf("\nenter your choice?\n");
       scanf("\n%d",&choice);
       switch (choice)
       {
       case 1:
        beginsert();
        display();
        break;
       case 2:
        lastinsert();
        display();
        break;
        case 3:
        randominsert();
        display();
        break;
        case 4:
        begin_delete();
        display();
        break;
        case 5:
        last_delete();
        display();
        break;
        case 6:
        random_delete();
        display();

        break;
        case 7:
        search();
        display();
        break;
        case 8:
        display();
        break;
        case 9:
        exit(0);
        break;
       default:
        printf("please enter a valid choice ");

       }
    }
    
}
void beginsert()
{
    display();
    struct node*ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nOVER FLOE\n");
    }
    else
    {
        printf("\nenter value");
        scanf("%d",item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        display();
        
        printf("\nnode inserted");
    
    }
}
void lastinsert()
{
    struct node*ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nOVER FLOW\n");
    }
    else
    {
       printf("\nenter the value?\n");
       scanf("%d",&item);
       ptr->data=item;
       if(head==NULL)
       {
        ptr->next=NULL;
        head=ptr;
        printf("\node inserted");
       }
       else
       {
        temp=head;
        while (temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
         ptr->next=NULL;
         printf("\nnode inserted");
       }
    }
}
void randominsert()
{
int i,loc,item;
struct node*ptr,*temp;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
    printf("\nOVER FLOW");
}
else
{
    printf("\n enter element value");
    scanf("%d",&item);
    ptr->data=item;
    printf("\enter the location after which you want to insert");
    scanf("%d",&loc);
    temp=head;
    for(i=0;i<loc;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            printf("\ncan not insert");
        }
    }
    ptr->next=temp->next;
    temp->next=ptr;
    printf("\nnode inserted");
  }
}
void begin_delete()
{
    struct node*ptr;
    if (head==NULL)
    {
     printf("\nlist is empty\n");   
    }
    else
    {
       ptr=head;
       head=ptr->next;
       free(ptr);
       printf("\n node deleted from the beginning...\n"); 
    }
}
void last_delete()
{
    struct node*ptr,*ptr1;
    if(head==NULL)
    {
        printf("\n list id empty");
    }
    else if(head->next==NULL)
    {
       head=NULL;
       free(head);
       printf("\n omly node of the list deleted..\n"); 
    }

else{
    ptr=head;
    while(ptr->next !=NULL)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
    free(ptr);
    printf("\n node deleted from the last...\n");

}
 }
void random_delete()
{
    struct node*ptr,*ptr1;
    int i,loc;
    printf("\n enter the location of the node after which you want to perform deletion\n");
    scanf("%d",&loc);
    ptr=head;
    for ( i = 0; i < loc; i++)
    {
        ptr1=ptr;
        ptr=ptr->next;
        
        if(ptr==NULL)
        {
            printf("\n can not delete");
            return;
        }
    }
    ptr1->next=ptr->next;
    free(ptr);
    printf("\n deleted node %d",loc+1);
    } 
    void search()
    {
     struct node*ptr;
     int item,i=0,flag;
     ptr=head;
     if(ptr==NULL)
     {
        printf("\n empty list");
     }   
     else{
        printf("\n enter item which you want to search?\n");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr->data==item)
            {
                printf("item found at location %d",i+1);
                flag=0;
            }
            else
            {
               flag=1;
            }
            i++;
            ptr=ptr->next;
        }
        if (flag==1)
        {
            printf("item not found\n");
        }
     }
    }
    void display()
    {
        struct node*ptr;
        ptr=head;
        if(ptr==NULL)
        {
            printf(" nothing to print");
        
        }
        else
        {
            printf("\n printing values....\n");
            while(ptr!=NULL)
            {
                printf("\n%d",ptr->data);
                ptr=ptr->next;
            }
        }
    }
