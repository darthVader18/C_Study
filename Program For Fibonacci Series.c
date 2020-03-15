/*
In fibonacci series, next term is obtained by taking sum of previous two terms

n       1   2   3   4   5   6
fib(n)  0   1   1   2   3   5

Mathematically,
fib(n) = fib(n-1) + fib(n-2)

a = 0;
b = 1;

for(i = 1; i <= n; i++)
{
printf("%d", a);
result = a + b;
a = b;
b = result;
}

example-
n=6
Iteration 1:
0
result = 1
a=1
b=1
Iteration 2:
1
result = 2
a=1
b=2
Iteration 3:
1
result = 3
a=2
b=3
Iteration 4:
2
result = 5
a=3
b=5
Iteration 5:
3
result = 8
a=5
b=8
Iteration 6:
5
result = 13
a=8
b=13

*/

#include<stdio.h>
int main()
{
    int a, b, result, n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    for(i = 1; i <= n; i++)
        {
            printf("%d", a);
            result = a + b;
            a = b;
            b = result;
        }
    return 0;
}
