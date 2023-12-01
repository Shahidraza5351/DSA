#include<stdio.h>
#include <stdlib.h>

struct node
{ 
    int data;
     struct node*link;
     };
     int main() 
     {
        struct node*head=(struct node*)malloc(sizeof(struct node));
head->data=25;
head->link=NULL;
struct node *node1=(struct node*)malloc(sizeof(struct node));
node1->data=35;
node1->link=NULL;
head->link=node1;
struct node *node2=(struct node*)malloc(sizeof(struct node));
node2->data=45;
//node1->link=NULL;
node1->link=node2;
//node2->data=55;
printf("%d\n ",node1->data);
printf("%d\n ",node2->data);
return 0;
}