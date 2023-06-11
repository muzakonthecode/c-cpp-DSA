#include <stdio.h>
#include <string.h>

// globals
int stack[100], top = -1, size = 100;
char input[40];
char output[40];

/**
 * push(): inserts an element into the stack
 * @elem: an character value to be pushed as an element
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
char pop()
{
    // checking for stackunderflow condition
    if (top == -1)
    {
        printf("Ooops! STACKUNDERFLOW.\n");
    }
    else
    {
        return stack[top--];
    }
}

/**
 * main(): Main Function
 * return: 0 for Success
 */
int main()
{
    printf("Enter a string: ");
    scanf("%s", input);

    // checking the string length
    for (int i = 0; i <= strlen(input); i++)
    {
        push(input[i]);
    }
    for (int i = 0; i <= strlen(input); i++)
    {
        output[i] = pop();
    }

    printf("The output string is: ");
    for (int i = 0; i <= strlen(input); i++)
    {
        printf("%c", output[i]);
    }

    return 0;
}
