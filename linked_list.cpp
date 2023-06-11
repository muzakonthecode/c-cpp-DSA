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
 * Deletes a node with the given data from a linked list.
 *
 * @param data data of node to be deleted
 *
 * @return void
 *
 * @throws None
 */
void delete_node(int data)
{
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        if (curr->data == data)
        {
            if (prev == NULL)
            {
                head = curr->next;
            }
            else
            {
                prev->next = curr->next;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
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
    delete_node(1);
    display();

    return 0;
}
