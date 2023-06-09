# Data Structures and Algorithms

<img align="center" src="https://github.com/muzakonthecode/My-DSA/blob/master/banner.png" />

## Resources:

- [Udemy: Data Structuers and algorithms in C for beginners](https://www.udemy.com/course/data-structures-and-algorithms-in-c/?kw=Data+Structures+and+Algorithms+C&src=sac)
- [Youtube: Data Structures and Algorithms](https://youtube.com/playlist?list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU)
- [Book: Data Structures and Algorithms - Annotated Reference with Examples By Granville Barne & Luca Del Tongo](https://www.mta.ca/~rrosebru/oldcourse/263114/Dsa.pdf)

## Exercises:

1.  [**Array Insertion**](./array_insert.c):

        The steps to solve the problem:

          1 - First get the element to be inserted, say x
          2 - Then get the position at which this element is to be inserted, say pos
          3 - Then shift the array elements from this position to one position forward(towards right), and do this for all the other elements next to pos.
          4 - Insert the element x now at the position pos, as this is now empty.

2.  [**String Reversing**](./strrev.c):

        The steps to solve the problem:

          1 - create an empty stack
          2 - one by one push all characters of string to stack
          3 - one by one pop all characters from stack and put them back to string.

3.  [**Balanced Parentheses**](./balanced_parentheses.c):

        The steps to solve the problem:

          1 - Declare a structure for character stack
          2 - Now traverse the expression string exp
              1. If the current character is a opening parentheses (‘(‘) then push it to stack.
              2. If the current character is a closing parentheses (‘)’) then pop from stack and if the popped character is the matching opening parentheses then fine else parentheses are not balanced.
          3 - After complete traversal, if there is some opening parentheses left in stack then “Unbalanced.”

4.  [**Infix to Postfix**](./infix_to_postfix.c):

        The steps to solve the problem:
          1 - Traversing the given expression from left to right should begin.
          2 - Just output the scanned character if it is an operand.
          3 - Else:
              1. If the operand's precedence is greater than the operator's precedence in the stack (or the stack is empty or has'('), then push the operator into the stack.
              2. Else, Any operator with more or equal precedence than the traversed operator are popped. Push this scanned operator after you pop them. (Stop and push the scanned operator on the stack if we encounter a parenthesis during popping.)
          4 - Push the scanned character to the stack if it is a '('.
          5 - If the scanned character is a ')', pop the stack and output it until another '(' appears, then eliminate both the parentheses.
          6 - Steps 2 through 6 should now be repeated until the entire infix, i.e. entire characters, is scanned.
          7 - Printing results.
          8 - Pop and print until the stack is not empty.

5.  [**Linked lists: Insertion at the beginning**](./insertion_at_the_beg.c):

        The steps to solve the problem:
          1 - Allocate a new node (say temp).
          2 - Put the required data into temp.
          3 - The ‘next’ pointer of the node should be pointed to the current head.
          4 - Now make the head pointer point to temp.

6.  [**Linked lists: Insertion at the end**](./insertion_at_the_end.c):

        The steps to solve the problem:
          1 - Allocate memory for a new node (say temp) and create a pointer (say last) which points the head of the linked list.
          2 - Set the data to be entered in temp.
          3 - temp will be the last node. Hence the next pointer of temp will point to null.
          4 - If linked list is empty make temp as the head.
          5 - Traverse using the last pointer till we reach the end node of the linked list.
          6 - Now, point the next node of last to temp.

7.  [**Linked lists: Insertion after a specific node**](./insertion_after_spceific.c):

        The steps to solve the problem:
          1 - Firstly, check if the given previous node is NULL or not.
          2 - Then, allocate a new node (say temp) and
          3 - Assign the data to temp.
          4 - And then make the next of temp as the next of the previous node.
          5 - Finally, move the next of the previous node to point to temp.

8.  [**Linked lists: Deletion at the beginning**](./deletion_at_the_beg.c):

        The steps to solve the problem:
          1 - Move the current start from 1st node to the next node
          2 - Delete the first node using the free method
          3 - If the Linked List is empty that it is not possible to delete

9.  [**Linked lists: Deletion at the end**](./deletion_at_the_end.c):

        The steps to solve the problem:
          1 - If the Linked list has only one node then make start node null
          2 - Else traverse to the end of the linked list
          3 - While traversing store the previous node i.e. 2nd last node
          4 - Change the next of 2nd last node to null
          5 - Free/delete memory of the the last node
          6 - Now, 2nd last node becomes the last node.

10. [**Linked lists: Deleting a specific node**](./deleting_a_specific.c):

        The steps to solve the problem:
          1 - Find the previous node of the node to be deleted.
          2 - Change the next of the previous node.
          3 - Free memory for the node to be deleted.
