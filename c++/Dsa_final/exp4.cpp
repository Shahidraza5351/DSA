#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * stnode;
struct node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void createlinklist(int n);

int main()
{
    int choice = 0, n;
    createlinklist(5);
    while (choice != 9)
    {
        cout << "\n\n*********main menu*********\n";
        cout << "\nchoose one option from the following list..\n";
        cout << "\n============================================\n";
        cout << "\n1.insert in beginning\n2.insert at last\n3.insert at any random location\n4.delete from beginning\n5.delete from last\n6.delete node after specified location\n7.search for an element\n8.display\n9.exit\n";
        cout << "\nenter your choice?\n";
        cin >> choice;
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
            cout << "please enter a valid choice ";
        }
    }

    return 0;
}

void createlinklist(int n)
{
    struct node *fnnode, *temp;
    int num, i;
    stnode = new struct node;
    if (stnode == NULL)
    {
        cout << "Memory can not be allocated";
    }
    else
    {
        cout << "Enter the data of node 1: ";
        cin >> num;
        stnode->data = num;
        stnode->next = NULL;
        temp = stnode;

        for (i = 2; i <= n; i++)
        {
            fnnode = new struct node;
            cout << "Enter the data of node " << i << ": ";
            cin >> num;
            fnnode->data = num;
            fnnode->next = NULL;
            temp->next = fnnode;
            temp = temp->next;
        }
    }
}

void beginsert()
{
    display();
    struct node *ptr;
    int item;
    ptr = new struct node;
    if (ptr == NULL)
    {
        cout << "\nOVER FLOE\n";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        display();
        cout << "\nNode inserted";
    }
}

void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = new struct node;
    if (ptr == NULL)
    {
        cout << "\nOVER FLOW\n";
    }
    else
    {
        cout << "\nEnter the value: ";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout << "\nNode inserted";
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            cout << "\nNode inserted";
        }
    }
}

void randominsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = new struct node;
    if (ptr == NULL)
    {
        cout << "\nOVER FLOW";
    }
    else
    {
        cout << "\nEnter element value: ";
        cin >> item;
        ptr->data = item;
        cout << "\nEnter the location after which you want to insert: ";
        cin >> loc;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "\nCan not insert";
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout << "\nNode inserted";
    }
}

void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "\nList is empty\n";
    }
    else
    {
        ptr = head;
        head = ptr->next;
        delete ptr;
        cout << "\nNode deleted from the beginning...\n";
    }
}

void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        cout << "\nList is empty\n";
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        cout << "\nOnly node of the list deleted..\n";
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        delete ptr;
        cout << "\nNode deleted from the last...\n";
    }
}

void random_delete()
{
    struct node *ptr, *ptr1;
    int i, loc;
    cout << "\nEnter the location of the node after which you want to perform deletion: ";
    cin >> loc;
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            cout << "\nCan not delete\n";
            return;
        }
    }
    ptr1->next = ptr->next;
    delete ptr;
    cout << "\nDeleted node " << loc + 1;
}

void search()
{
    struct node *ptr;
    int item, i = 0, flag = 0;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "\nEmpty list\n";
    }
    else
    {
        cout << "\nEnter item which you want to search: ";
        cin >> item;
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                cout << "Item found at location " << i + 1 << endl;
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 0)
        {
            cout << "Item not found\n";
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Nothing to print\n";
    }
    else
    {
        cout << "\nPrinting values....\n";
    }
}
