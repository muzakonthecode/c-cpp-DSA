#include <stdio.h>
#include <stdlib.h>

// node type
typedef struct Node
{
    int data;
    struct Node *next;
} node;

/**
 * main(): Main Function
 * return: 0 for Success
 */
int main()
{
    int n, temp;

    node *start;
    node *new_node;
    start = (node *)malloc(sizeof(node));
    printf("Enter the number of Nodes: ");
    scanf("%d", &n);
    printf("Enter the Values:\n");
    scanf("%d", &temp);

    node *temp1;
    temp1 = start;
    temp1->data = temp;

    for (int i = 2; i <= n; i++)
    {
        node *new_node;
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &temp);
        new_node->data = temp;
        temp1->next = new_node;
        temp1 = temp1->next;
    }

    // insertion
    printf("Enter the Value to be inserted: ");
    scanf("%d", &temp);

    new_node = (node *)malloc(sizeof(node));
    new_node->data = temp;
    temp1 = start;

    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }

    temp1->next = new_node;
    temp1 = start;

    printf("The Values are:\n");

    while (temp1->next != NULL)
    {
        printf("%d->", temp1->data);
        temp1 = temp1->next;
    }

    printf("%d->NULL\n", temp1->data);

    return 0;
}
