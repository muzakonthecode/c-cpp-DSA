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
