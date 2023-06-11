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
 * Inserts a new node at the beginning of the linked list.
 * @param new_data The data to be stored in the new node.
 */
void insert(int new_data)
{
    // Allocate memory for the new node.
    node *new_node = (node *)malloc(sizeof(node));

    // Store the data in the new node.
    new_node->data = new_data;

    // Set the new node's next pointer to the current head of the list.
    new_node->next = head;

    // Set the head of the list to point to the new node.
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
 * displayList(): prints the contents of the linked list
 * Return: void
 */
void displayList()
{
    Node *currNode = head;

    while (currNode != NULL)
    {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
}

int main()
{
    insert(0);
    insert(1);
    insert(3);

    cout << "Linked list: ";
    displayList();
    cout << endl;

    delete_node(1);
    cout << "after deletion: ";
    displayList();
    cout << endl;
    return 0;
}
