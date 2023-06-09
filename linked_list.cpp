#include <iostream>

using namespace std;

// node type
typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *head = NULL;

/**
 * insert(): inserts a new node into the linked list
 * return: Does not return a value
 */
void insert(int new_data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

/**
 * display(): prints out the linked list's content
 * return: Does not return a value
 */
void display()
{
    node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

/**
 * main(): Main Function
 * return: 0 for Success
 */
int main()
{
    insert(0);
    insert(1);
    insert(3);

    cout << "The linked list is: ";
    display();
    cout << endl;

    return 0;
}
