/*
- infix to postfix using stack.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

// globals
char stack[SIZE];
int top = -1;

/**
 * push(): inserts an element into the stack
 * @item: a char value to be pushed as an element
 * return: Does not return a value
 */
void push(char item)
{
    if (top == SIZE - 1)
        printf("Ooops! STACKOVERFLOW.\n");
    else
    {
        stack[++top] = item;
    }
}

/**
 * pop(): deletes the last element from the stack
 * return: returns a char value
 */
char pop()
{
    char ele;
    if (top == -1)
    {
        printf("Ooops! STACKUNDERFLOW.\n");
        return 'o';
    }
    else
    {
        ele = stack[top--];
        return ele;
    }
}

/**
 * precedence(): checks for the precedence of the operators
 * return: returns an int value
 */
int precedence(char character)
{
    switch (character)
    {
    case '^':
        return 3;
        break;
    case '*':
    case '/':
        return 2;
        break;
    case '+':
    case '-':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}

/**
 * main(): Main Function
 * return: 0 for Success
 */
int main()
{
    char input[123], output[123];
    int j = -1, i;
    int temp2;
    int choice = 1;
    do
    {
        printf("Enter the infix expression: ");
        scanf("%s", input);
        push('(');
        strcat(input, ")");
        for (i = 0; i < strlen(input); i++)
        {
            if (isalpha(input[i]))
            {
                output[++j] = input[i];
            }
            else if (input[i] == '(')
            {
                push(input[i]);
            }
            else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^')
            {
                char temp2 = pop();
                if (temp2 == '(')
                {
                    push(temp2);
                }
                else if (precedence(temp2) >= precedence(input[i]))
                {
                    output[++j] = temp2;
                }
                push(input[i]);
            }
            else if (input[i] == ')')
            {
                temp2 = pop();
                while (temp2 != '(')
                {
                    output[++j] = temp2;
                    temp2 = pop();
                }
            }
        }
        printf("The postfix expression is: %s\n", output);
        printf("Do you wish to Continue?\n 1- Yes\n 2- No\n");
        scanf("%d", &choice);
    } while (choice == 1);

    return 0;
}
