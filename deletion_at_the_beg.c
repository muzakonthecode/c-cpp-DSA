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

    printf("Before deletion:\n");
    temp1 = start;
    while (temp1->next != NULL)
    {
        printf("%d->", temp1->data);
        temp1 = temp1->next;
    }

    printf("%d->NULL\n", temp1->data);

    // deletion
    temp1 = start;
    start = start->next;
    free(temp1);

    printf("After deletion:\n");
    temp1 = start;
    while (temp1->next != NULL)
    {
        printf("%d->", temp1->data);
        temp1 = temp1->next;
    }

    printf("%d->NULL\n", temp1->data);

    return 0;
}
