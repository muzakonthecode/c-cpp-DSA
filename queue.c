/*
- FIFO: first in first out
- basic operations: insertion, deletion
- keywords: enqueue(ins), dequeue(del), front, rear
- in frontend you have to dequeue, in rear-end you have to enqueue
- implementation will be with arrays
*/

#include <stdio.h>

// Constants
#define SIZE 30

// globals
int queue[SIZE];
int front = -1, rear = -1;

/**
 * enqueue(): inserts an element into the queue
 * @elem: an integer value to be pushed as an element
 * return: Does not return a value
 */
void enqueue(int elem)
{
    // checking for queueoverflow condition
    if (rear == SIZE - 1)
    {
        printf("Ooops! QUEUEOVERFLOW.\n");
    }
    else
    {
        rear++;
        queue[rear] = elem;

        printf("enqueued: %d\n", elem);

        // checking for if the queue is empty
        if (front == -1)
        {
            front = 0;
        }
    }
}

/**
 * dequeue(): pops an element from the queue
 * return: Does not return a value
 */
void dequeue()
{
    // checking for if the queue is empty
    if (front == -1)
    {
        printf("Ooops! QUEUEUNDERFLOW.\n");
    }
    else
    {
        printf("dequeued: %d\n", queue[front]);
        front++;
    }
}

/**
 * display(): prints the queue's elements
 * return: Does not return a value
 */
void display()
{
    printf("The queue elements are:\n");
    while (front != rear)
    {
        printf("%d\n", queue[front]);
        front++;
    }
    printf("%d\n", queue[front]);
}

/**
 * main(): Main Function
 * return: 0 for Success
 */
int main()
{
    int c = 1;
    int choice, temp;

    do
    {
        printf("choose a method:\n1.enqueue\n2.dequeue\n3.display\n: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an element to be enqueued: ");
            scanf("%d", &temp);
            enqueue(temp);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        default:
            printf("Invalid Method.\n");
            break;
        }
        printf("Do you want to continue?\n1.Yes\n2.No\n: ");
        scanf("%d", &c);

    } while (c == 1);

    return 0;
}
