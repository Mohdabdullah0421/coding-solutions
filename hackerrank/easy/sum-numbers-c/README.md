# Sum and Difference of Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

**Objective**

The fundamental data types in c are int, float and char. Today, we're discussing int and float data types. 	

The `printf()` function prints the given statement to the console. The syntax is `printf("format string",argument_list);`. In the function, if we are using an integer, character, string or float as argument, then in the format string we have to write ``%d`` (integer), ``%c`` (character), ``%s`` (string), ``%f`` (float) respectively.

The `scanf()` function reads the input data from the console. The syntax is `scanf("format string",argument_list);`. For ex: The ``scanf("%d",&number)`` statement reads integer number from the console and stores the given value in variable $number$.

To input two integers separated by a space on a single line, the command is `scanf("%d %d", &n, &m)`, where $n$ and $m$ are the two integers.

**Task** 	

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare $4$ variables: two of type int and two of type float. 
2. Read $2$ lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your $4$ variables. 
3. Use the $+$ and $-$ operator to perform the following operations:		
    - Print the sum and difference of two int variable on a new line.
    - Print the sum and difference of two float variable rounded to one decimal place on a new line.    



**Input Format**

The first line contains two integers.  		
The second line contains two floating point numbers.		


**Constraints**

- $1 \le $ integer variables $\le 10^4$
- $1 \le $ float variables $\le 10^4$

**Output Format**

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to $1$ decimal place) separated by a space on the second line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T21:18:44.153Z  

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y,sum,diff;
    float a,b,add,sub;
    
    scanf ("%d %d",&x,&y);
    scanf ("%f %f",&a,&b);
    
    sum = x+y;
    diff = x-y;
    
    add = a+b;
    sub = a-b;
    
    printf ("%d %d\n", sum,diff);
    printf ("%.1f %.1f\n",add,sub);
    
    return 0;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sum-numbers-c/problem)