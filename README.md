# 0x1B. C - Sorting algorithms & Big O
Project to be done in teams of 2 people (your team: Kevin Kipngeno, Mary Muthoni)

## Resources
* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O Notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting Algorithm Notation](https://www.toptal.com/developers/sorting-algorithms)
* [15 Sorting Algorithms in 6 Minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)
* [CS50 2021 in HDR - Lecture 3 - Algorithms](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
* [All About Sorting Algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

## General
In computer science, a sorting algorithm is an algorithm that puts elements of a list into a particular order. The commonly used are numerical order or lexicographical order. Either ascending or descending.

Efficient sorting is important in optimizing the efficiency of other apps such as search and merge.

The output of a sorting algorithm should satisfy two conditions:
* The output is monotonic, each element is smaller/bigger than the next element.
* The output is a permutation (a reordering of elements in the list).

**Big O Notation**
`O(n^2)` - Known as **Quadratic Complexity**
* 1 item: 1 operation
* 10 items: 100 operations
* 100  items: 10, 000  operations

`O(n)` - Known as **Linear complexity**
* 1 item: 1 operation
* 10 items: 10 operations
* 100 items: 100 operations

`O(1)` - Known as **Constant complexity**
* 1 item: 1 operation
* 10 items: 1 operation
* 100 items: 1 operation

`O(log n)` - Known as **Logarithmic complexity**
* 1 item: 1 operation
* 10  items: 2 operations
* 100 items: 3 operations
* 1000 items: 4 operations
* 10, 000 items: 5 operations

`O(2^n)` - Known as **Exponential complexity**
`O(n!)` - Known as **Factorial time**

* `O(1)` - Excellent/Best
* `O(log n)` - Good
* `O(n)` - Fair
* `O(n log n)` - Bad
* `O(n^2)`, `O(2^n)` and `O(n!)` - Horrible/Worst

## Data Structure and Functions
For this project you are given the following `print_array`, and `print_list` functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

Data structure for doubly linked list:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
