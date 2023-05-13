/*
- LIFO: Last in First out.
- stack implementation using arrays.
- important!: stackoverflow and stackunderflow.
*/

#include <stdio.h>

// globals
int stack[100], top = -1, size;

/**
 * push(): inserts an element into the stack
 * @elem: an integer value to be pushed as an element
 * return: Does not return a value
 */
void push(int elem)
{
    // checking for stackoverflow condition
    if (size == top + 1)
    {
        printf("Ooops! STACKOVERFLOW.\n");
    }
    else
    {
        top++;
        stack[top] = elem;
        printf("Pushed: %d\n", elem);
    }
}

/**
 * pop(): deletes the last element from the stack
 * return: Does not return a value
 */
void pop()
{
    // checking for stackunderflow condition
    if (top == -1)
    {
        printf("Ooops! STACKUNDERFLOW.\n");
    }
    else
    {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

/**
 * display(): prints the elements of the stack
 * return: Does not return a value
 */
void display()
{
    // checking for stackunderflow condition
    if (top == -1)
    {
        printf("Ooops! STACKUNDERFLOW, No elements.\n");
    }
    else
    {
        printf("The elements are: \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", i);
        }
    }
}

/**
 * main(): Main Function
 * return: 0 for Success
 */
int main()
{
    int choice, op, elem;
    printf("Enter the size of the Stack: ");
    scanf("%d", &size);

    do
    {
        printf("Choose a Method:\n 1- Push\n 2- Pop\n 3- Display\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an element to be pushed: ");
            scanf("%d", &elem);
            push(elem);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            printf("Unsupported Method.");
            break;
        }

        printf("Do you wish to Continue?\n 1- Yes\n 2- No\n");
        scanf("%d", &op);

    } while (op == 1);

    return 0;
}
