#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodelist(int n);
void displayList();

int main()
{
    int n;
    cout << "\n\n Linked List : To create and Display singly Linked List :\n";
    cout << "------------------------------------------------------------ \n";
    cout << "Input the Number of nodes : ";
    cin >> n;
    createNodelist(n);
    cout << "\n Data entered in the list : \n";
    displayList();
    return 0;
}

void createNodelist(int n)
{
    struct node *fnNode, *temp;
    int num, i; // Fixed the typo here, added a comma between num and i
    stnode = (struct node *)malloc(sizeof(struct node));
    if (stnode == NULL)
    {
        cout << "Memory can not be allocated.";
    }
    else
    {
        cout << " Input Data for node 1 : ";
        cin >> num;
        stnode->num = num;
        stnode->nextptr = NULL;
        temp = stnode;
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                cout << "Memory can not be allocated.";
                break;
            }
            else
            {
                cout << "input data for node " << i << " :";
                cin >> num;
                fnNode->num = num;
                fnNode->nextptr = NULL;
                temp->nextptr = fnNode;
                temp = temp->nextptr;
            }
        }
    }
}

void displayList()
{
    struct node *temp;
    if (stnode == NULL)
    {
        cout << "List is empty.";
    }
    else
    {
        temp = stnode;
        while (temp != NULL)
        {
            cout << "Data = " << temp->num << "\n";
            temp = temp->nextptr;
        }
    }
}
