/*
- balanced parentheses using stack.
*/

#include <stdio.h>
#include <string.h>

// globals
char stack[100], string[120];
int top = -1, size = 50;

/**
 * push(): inserts an element into the stack
 * @elem: a char value to be pushed as an element
 * return: Does not return a value
 */
void push(char elem)
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
        top--;
    }
}

void check()
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '(')
        {
            push(string[i]);
        }
        else if (string[i] == ')')
        {
            pop();
        }
    }

    if (top == -1)
    {
        printf("Balanced.\n");
    }
    else
    {
        printf("Unbalanced.\n");
    }
}

/**
 * main(): Main Function
 * Return: 0 for Success
 */
int main()
{
    printf("Enter the expression: ");
    scanf("%s", string);
    check();

    return 0;
}
