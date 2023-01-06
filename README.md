
![Logo](https://i.ibb.co/Px1cyXB/Push-To-Stack.png)


# Push To Stack

Push To Stack is a sorting algorithm that uses a stack data structure to sort a list of integers. The algorithm is restricted to using a limited set of operations on the stack, and it must sort the list in as few moves as possible.

This project is an implementation of the Push To Stack algorithm in C.


# Algorithm

The Push To Stack algorithm uses two stacks to sort a list of integers. The first stack, called stack A, contains the unsorted list of integers. The second stack, called stack B, is initially empty.

The algorithm performs the following steps to sort the list:

Pick the smallest element from stack A and push it onto stack B.
Repeat this process until stack A is empty.
The algorithm is restricted to using the following operations on the stacks:

- `sa`: swap the top two elements of stack A
- `sb`: swap the top two elements of stack B
- `ss`: perform `sa` and `sb`
- `pa`: push the top element of stack B onto stack A
- `pb`: push the top element of stack A onto stack B
- `ra`: rotate stack A upwards (move the top element to the bottom of the stack)
- `rb`: rotate stack B upwards (move the top element to the bottom of the stack)
- `rr`: perform `ra` and `rb`
- `rra`: rotate stack A downwards (move the bottom element to the top of the stack)
- `rrb`: rotate stack B downwards (move the bottom element to the top of the stack)
- `rrr`: perform rra and `rrb`

# How to Run


- Clone or download the repository to your local machine.
- Navigate to the src directory.
- Build the project with make.
- Run the program with `./push_swap <list of integers>`, where `<list of integers>` is a space-separated list of the integers you want to sort.

# Usage/Examples

```bash
git clone https://github.com/sFinOe/Push-To-Stack.git
cd Push-To-Stack
make && ./push_swap <list of integers>

For example, to sort the list 5 3 2 1 4, you would run:

./push_swap 5 3 2 1 4
The program will output the series of operations needed to sort the list.

```

# Example
Given the list 5 3 2 1 4, the push_swap algorithm will output the following series of operations:
```
pb
pb
pb
pb
sa
ra
ra
sa
ra
ra
sa

This will result in the following final state of the stacks:

Stack A: 1 2 3 4 5
Stack B: (empty)

```


# Requirements

- Linux, Macos, Windows
- Clang, GCC (C compailer)
# References

- [What is a stack? ](https://www.techopedia.com/definition/9523/stack)
- [What Is Radix Sort Algorithm: Pseudocode, Time Complexity, C Program & More ](https://www.simplilearn.com/tutorials/data-structure-tutorial/radix-sort#:~:text=The%20Radix%20sort%20algorithm%20works,counting%20sort%20as%20a%20subroutine.)
- [Sort a stack using a temporary stack](https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/)

## Support

For support, email zakkikasmi@gmail.com or zakaria@disposkill.com.


## 🔗 Links
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://disposkill.com/about_me)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/sFinoe)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/zakie_kasmi)

