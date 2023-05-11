/*
- inserting elements into an array.
*/

#include <stdio.h>

// globals
int arr[100], n, elem, pos;

/**
 * insert(): deletes the last element from the stack
 * return: Does not return a value
 */
void insert()
{
    pos = pos - 1;

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
}

/**
 * main(): Main Function
 * Return: 0 for Success
 */
int main()
{
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array's elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter an element to be inserted: ");
    scanf("%d", &elem);

    printf("Enter the position: ");
    scanf("%d", &pos);

    printf("Before: %d\n", arr[0]);
    insert();
    printf("After: %d\n", arr[0]);

    return 0;
}
