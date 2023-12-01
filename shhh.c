#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} * stnode;

struct node* head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void createlinklist(int n) {
    struct node* fnnode, * temp;
    int num, i;
    stnode = (struct node*)malloc(sizeof(struct node));
    if (stnode == NULL) {
        printf("Memory cannot be allocated");
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
        head = stnode;  // Assign stnode to head
    }
}

int main(void) {
    int choice = 0, n;
    printf("enter the no of linklist");
    scanf("%d",&n);
    createlinklist(n);
    while (choice != 9) {
        printf("\n\n*********Main Menu*********\n");
        printf("Choose one option from the following list..\n");
        printf("============================================\n");
        printf("1. Insert in beginning\n2. Insert at last\n3. Insert at any random location\n4. Delete from beginning\n5. Delete from last\n6. Delete node after specified location\n7. Search for an element\n8. Display\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
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
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}

void beginsert() {
    display();
    struct node* ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
    }
    else {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted.\n");
    }
}

void lastinsert() {
    struct node* ptr, * temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
    }
    else {
        printf("\nEnter the value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted.\n");
        }
        else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted.\n");
        }
    }
}

void randominsert() {
    int i, loc, item;
    struct node* ptr, * temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
    }
    else {
        printf("\nEnter element value: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert: ");
        scanf("%d", &loc);
        temp = head;
        for (i = 0; i < loc - 1; i++) {
            temp = temp->next;
            if (temp == NULL) {
                printf("\nCannot insert.\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted.\n");
    }
}

void begin_delete() {
    struct node* ptr;
    if (head == NULL) {
        printf("\nList is empty.\n");
    }
    else {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the beginning.\n");
    }
}

void last_delete() {
    struct node* ptr, * ptr1;
    if (head == NULL) {
        printf("\nList is empty.\n");
    }
    else if (head->next == NULL) {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted.\n");
    }
    else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nNode deleted from the last.\n");
    }
}

void random_delete() {
    struct node* ptr, * ptr1;
    int loc, i;
    printf("\nEnter the location of the node after which you want to perform deletion: ");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc - 1; i++) {
        ptr1 = ptr;
        ptr = ptr->next;
        if (ptr == NULL) {
            printf("\nCannot delete.\n");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\nDeleted node %d.\n", loc);
}

void search() {
    struct node* ptr;
    int item, i = 0, flag = 0;
    ptr = head;
    if (ptr == NULL) {
        printf("\nEmpty list.\n");
    }
    else {
        printf("\nEnter item to search: ");
        scanf("%d", &item);
        while (ptr != NULL) {
            if (ptr->data == item) {
                printf("Item found at location %d.\n", i + 1);
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 0) {
            printf("Item not found.\n");
        }
    }
}

void display() {
    struct node* ptr;
    ptr = head;
    if (ptr == NULL) {
        printf("\nNothing to print.\n");
    }
    else {
        printf("\nPrinting values...\n");
        while (ptr != NULL) {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}
