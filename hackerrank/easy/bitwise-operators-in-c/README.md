# Bitwise Operators

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In this challenge, you will use logical bitwise operators.  All data is stored in its binary representation.  The logical operators, and C language, use $1$ to represent true and $0$ to represent false. The logical operators compare bits in two numbers and return true or false, $0$ or $1$, for each bit compared.  

- `Bitwise AND operator &`  The output of bitwise AND is *1* if the corresponding bits of two operands is *1*. If either bit of an operand is *0*, the result of corresponding bit is evaluated to *0*. It is denoted by &.

- `Bitwise OR operator |`  The output of bitwise OR is *1* if at least one corresponding bit of two operands is *1*. It is denoted by |.

- `Bitwise XOR (exclusive OR) operator ^`  The result of bitwise XOR operator is *1* if the corresponding bits of two operands are opposite. It is denoted by $\oplus$.

For example, for integers 3 and 5,
```c
3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6

```

You will be given an integer $n$, and a threshold, $k.  For each number $i$ from $1$ through $n$, find the maximum value of the logical and, or and xor when compared against all integers through $n$ that are greater than $i$.  Consider a value only if the comparison returns a result less than $k$.  Print the results of the and, or and exclusive or comparisons on separate lines, in that order.  

**Example**  
$n = 3$  
$k = 3$  

The results of the comparisons are below:

```
a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
```

For the `and` comparison, the maximum is $2$.  For the `or` comparison, none of the values is less than $k$, so the maximum is $0$.  For the `xor` comparison, the maximum value less than $k$ is $2$.  The function should print:  

```
2
0
2
```

**Function Description**  

Complete the *calculate_the_maximum* function in the editor below.  

*calculate_the_maximum* has the following parameters:  

- *int n:* the highest number to consider  
- *int k:* the result of a comparison must be lower than this number to be considered  

**Prints**  

Print the maximum values for the `and`, `or` and `xor` comparisons, each on a separate line.  

**Input Format**

The only line contains $2$ space-separated integers, $n$ and $k$.

**Constraints**

* $2 \le n \le 10^3$
* $2 \le k \le n$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T21:29:19.978Z  

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    // Iterate through all possible pairs of a and b where a < b
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int current_and = a & b;
            int current_or = a | b;
            int current_xor = a ^ b;
            
            // Check if the current operations are less than k and greater than the current maximums
            if (current_and < k && current_and > max_and) {
                max_and = current_and;
            }
            if (current_or < k && current_or > max_or) {
                max_or = current_or;
            }
            if (current_xor < k && current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }
    
    // Print the results on separate lines in the specified order
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
    // The only input line contains 2 space-separated integers, n and k
    scanf("%d %d", &n, &k);
    
    calculate_the_maximum(n, k);
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem)