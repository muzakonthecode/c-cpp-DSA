# Data Structures and Algorithms With C!

<img align="center" src="https://user-images.githubusercontent.com/38081852/67428127-f16e4e80-f5b3-11e9-87db-a420da8e799f.png" />

## Resources:

        1- https://www.udemy.com/course/data-structures-and-algorithms-in-c/?kw=Data+Structures+and+Algorithms+C&src=sac
        2- https://www.udemy.com/course/data-structures-and-algorithms-in-c-2/?kw=advanced+data+stru&src=sac

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
