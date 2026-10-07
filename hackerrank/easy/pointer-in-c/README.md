# Functions in C

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

**Objective**

In this challenge, you will learn to implement the basic functionalities of pointers in C. A [pointer](http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29) in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable that it does not own.  
<br>
In order to access the memory address of a variable, $val$, prepend it with $\&$ sign. For example, `&val` returns the memory address of $val$.  
<br>
This memory address is assigned to a pointer and can be shared among various functions. For example, $int^* p = \&val$ will assign the memory address of $val$ to pointer $p$. To access the content of the memory to which the pointer points, prepend it with a `*`. For example, `*p` will return the value reflected by $val$ and any modification to it will be reflected at the source ($val$).
```c
	void increment(int *v) {
        (*v)++; 
    }
      	int main() {
        int a;
        scanf("%d", &a);
        increment(&a);
        printf("%d", a);
    	return 0;      
    }     
```

**Task** 

Complete the function `void update(int *a,int *b)`.  It receives two integer pointers, int* a and int* b.  Set the value of $a$ to their sum, and $b$ to their absolute difference.  There is no return value, and no return statement is needed.  

- $a' = a+b$
- $b' = |a-b|$

**Input Format**

The input will contain two integers, $a$ and $b$, separated by a newline.

**Constraints**

 

**Output Format**

Modify the two values in place and the code stub main() will print their values.    

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T21:20:58.934Z  

```c
#include <stdio.h>

/* Add `int max_of_four(int a, int b, int c, int d)` here. */

int max_of_four(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    if (d > max)
        max = d;

    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/pointer-in-c/problem)