#include <stdio.h>

/*
- LIFO: Last in First out.
- stack implementation using arrays.
- important!: stackoverflow and stackunderflow.
*/
int stack[100], top = -1, size;

void push(int elem)
{
    // checking for stackoverflow condition
    if (size == top + 1)
    {
        printf("Ooops! STACKOVERFLOW.");
    }
    else
    {
        top++;
        stack[top] = elem;
        printf("Pushed: %d\n", elem);
    }
}

void pop()
{
    // checking for stackunderflow condition
    if (top == -1)
    {
        printf("Ooops! STACKUNDERFLOW.");
    }
    else
    {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

int main()
{
    int choice, op, elem;
    printf("Enter the size of the Stack: ");
    scanf("%d", &size);

    do
    {
        printf("Choose a Method: *1- Push, 2- Pop*\n");
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

        default:
            printf("Unsupported Method.");
            break;
        }

        printf("Do you wish to Continue? *1- Yes, 2- No*");
        scanf("%d", &op);

    } while (op == 1);

    return 0;
}
