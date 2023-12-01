#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* ptr;
};

struct node* stnode;

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
        stnode->ptr = NULL;
        temp = stnode;

        for (i = 2; i <= n; i++) {
            fnnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter the data of node %d: ", i);
            scanf("%d", &num);
            fnnode->data = num;
            fnnode->ptr = NULL;
            temp->ptr = fnnode;
            temp = temp->ptr;
        }
    }
}

void display() {
   struct node* tmp;
    tmp = stnode;
    while (tmp != NULL) {
        printf(" %d\n", tmp->data);
        tmp = tmp->ptr;
    }
}

int main() {
    int n;
    struct node* head;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    createlinklist(n);
    
    printf("\nData entered in the node:\n");
   display();
    
    head = reverse(stnode);
    
    printf("\nReversed linked list:\n");
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
       
        temp = temp->ptr;
    }
    
    
    
    
    return 0;
}


