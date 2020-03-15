/*
Prime number:
A number greater than 1 is called a prime number, if it has only two factors, namely 1 and the number itself.
Example: 2,3,5,7,11...

Composite number:
A composite number is a positive integer which is not prime i.e. which has factors other than 1 and itself.
Example: 4,6,8,9,10...

Question: Is 1 a prime number or not?
Solution: No. It is not a prime number because according to the definition of the prime numbers - A prime number is a
number which has exactly two divisor, 1 and itself. But 1 has only one divisor i.e. itself. Therefore it is not a
prime number.

Another reason - it violates the fundamental theorem of arithmetic.
According to this theorem - Every positive integer greater than one can be written uniquely as the product of primes.
Example: 9 = 3*3
But we can also write it as :
9 = 3*3*1
9 = 3*3*1*1
9 = 3*3*1*1*1
...


In order to find whether a number is prime or not, we need to calculate the square root of that number and then we
divide that number by numbers less than or equal to the square root of that number. If it is divisible by any of that numbers
then we can say that the number is not a prime number else it is a prime number.
Example: suppose we need to find whether 23 is a prime number or not.
Step 1: Take square root of 23. Which is nearly 4.7958 = 5
Step 2: divide 23 by numbers greater than 2 and less than or equals to 5. If it is divisible by any of those numbers
than is is not prime else it is prime.

Part 1: Finding a square root

#include<math.h>
int main()
{
    int x, val1;
    val1 = ceil(sqrt(x));
}
sqrt means square root.
available in math.h library
syntax- double sqrt(double x)

ceil function returns a smallest integer greater than or equals to x
available in math.h library
syntax- double ceil(double x)

example-
sqrt(2) = 1.414
ceil(1.414) = 2

Part 2- Check the divisibility

int val2 = x, count = 0
for(i = 2; i <= val1; i++)
    {
        if(val2%i == 0)
            count = 1;
    }

Part 3- Check whether the number is a prime number or not

if((count == 0 && val2 != 1) || val2 = 2 || val2 = 3)
    printf("%d is a prime number", val2);
else
    printf("%d is not a prime number", val2);
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    int i, val1, val2, count=0;
    printf("Please enter a number(only positive integers): ");
    scanf("%d", &x);

    val1 = ceil(sqrt(x));
    val2 =  x;

    for(i = 2; i <= val1; i++)
    {
        if(val2%i == 0)
            count = 1;
    }
    if((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
        printf("%d is a prime number", val2);
    else
        printf("%d is not a prime number", val2);

    return 0;
}
