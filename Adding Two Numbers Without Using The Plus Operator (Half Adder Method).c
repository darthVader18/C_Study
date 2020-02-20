// Idea is to use half adder logic
/*
Half adder is a combination circuit which takes two bits at a time and produces two bits output at a time.
One bit is consider as a sum bit and the other bit is consider as a carry bit.

A ---------- |          | ---------- S
             |          |
             |   HA     |
             |          |
B ---------- |          | ---------- C


Truth table-
A   B   S   C
0   0   0   0
0   1   1   0
1   0   1   0
1   1   0   1

S = A XOR B
C = A AND B

5 -> 0101 (these are binary representation)
10 -> 1010
-------------
15 -> 1111

Sum will be 1111
Carry will be 0000
---------------------------------

7 -> 0111
2 -> 0010
------------
9 <- 1001

Iteration 1:
Sum will be 0101
Carry will be 0010 -> 0100 (After performing left shift operator)

Iteration 2:
Sum will be 0001
Carry will be 0100 -> 1000 (After performing left shift operator)

Iteration 3:
Sum will be 1001
Carry will be 0000 -> 0000 (After performing left shift operator)   STOP
*/
#include<stdio.h>
int main()
{
    int a, b, sum, carry;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        sum = a^b; // a bitwise XOR b
        carry = (a&b)<<1; // a bitwise AND b and we are also performing left shift by one
        a = sum;
        b = carry;
    }
    printf("Sum of the two numbers is %d:", sum);
    return 0;
}
