/*
Pointers (Important Questions):

Question 1: Consider the following two statements
int *p = &i;
p = &i;
First statement is the declaration and second is simple assignment statement.
Why isn't in second statement, p is preceded by * symbol?

Solution: In C, * symbol has different meanings depending on the context in which it's used.
At the time of declaration, * symbol is not acting as an indirect operator.
* symbol in the first statement tells the compiler that p is a pointer to an integer.
But, if we write *p = &i then it is wrong, because here * symbol indicates the indirection operator and we cannot
assign the address to some integer variable.
Therefore, in the second statement, there is no need of * symbol in front of p. It simply means we are assigning
the address to a pointer.

//////////////////////////////////////////////////////////////

Question 2: What is the output of the following program:
void fun(const int *p)
{
    *p = 0;
}
int main()
{
    const int i = 10;
    fun(&i);
    return 0;
}

Output:
Error: Assignment of read-only location *p

/////////////////////////////////////////////////////////

Question 3: How to print the address of a variable?
Solution: use %p as a format specifier in print function. (%p returns the address of the variable hexadecimal format)
int main()
{
    int i = 10;
    int *p = &i;
    printf("The address of variable i is %p", p);
    return 0;
}
Output: The address of variable i is 0060FF08

/////////////////////////////////////////////////////////

Question 4: If i is a variable and p points to i, which of the following expression are aliases of i?
a) *p   b) *&p  c) &p   d) *i   e) *&i

Solution: Options (a) and (e) are the aliases of variable of i.
Example:
int i = 10;
int *p =  &i;
*/

//////////////////////////////////////

/*
Pointers (Program 1) _ Sum of Array Elements using Pointers:
int main()
{
    int a[] = {11, 22, 36, 5, 2}
    int sum = 0, *p;

    for(p = &a[0]; p<=&a[4]; p++)
        sum + = *p;

    printf("The sum is %d", sum);
}

output = 76
*/

//////////////////////////////////////

/*
Pointers (Program 2) _ Reverse a Series of Numbers using Pointers:


#include<stdio.h>
#define N 5

int main()
{
    int a[N], *p;
    printf("Enter %d elements in the array: ", N);
    for(p=a; p <= a+N-1; p++)
        scanf("%d", p);

    printf("Elements in reverse order:\n");
    for(p = a+N-1; p >= a; p--)
        printf("%d ", *p);

    return 0;
}
*/

//////////////////////////////////////

/*
Pointers (Program 3):
Consider the following declaration of two dimensional array in C
char a[100][100]
Assuming that the main memory is byte addressable and that the array is stored starting from the memory address 0,
the address of a[40][50] is:
a) 4040
b) 4050
c) 5040
d) 5050

[GATE 2002: 2 marks]

Formula: &a[i][j] = BA + [(i - lb1) * NC + (j - lb2)] * c
Where BA = base address of whole 2D array
NC = Number of columns
c = size of data type of elements stored in array (in bytes)
a[lb1...ub1][lb2...ub2]

BA = 0
NC = 100
c = 1 byte
a[0...99][0...99]

&a[40][50] = 0 + [(40-0) * 100 + (50-0)] * 1
           = 4050
Answer = 4050
*/

//////////////////////////////////////

/*
Pointers (Program 4):
What is the output of the following C code? Assume that the address of x is 2000(in decimal) and an integer requires
four bytes of memory.
#include<stdio.h>
int main()
{
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    printf("%u %u %u", x+3, *(x+3), *(x+2)+3);
}

a) 2036, 2036, 2036
b) 2012, 4, 2204
c) 2036, 10, 10
d) 2912, 4, 6

[GATE 2015 (SET 1)]

x = pointer to the first 1D array
x+3 = pointer to the 4th 1D array
*(x+3) = pointer to the 1st element of 4th 1D array
*(x+2) = pointer to the 1st element of 3rd 1D array

Answer = a
*/

//////////////////////////////////////

/*
Pointer Pointing to an Entire Array (Solved Problem):
What is the output of the following program:
#include<stdio.h>
int main()
{
    int a[][3] = {1, 2, 3, 4, 5, 6};
    int(*ptr)[3] = a;
    printf("%d %d ", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);
    return 0;
}

a) 2 3 5 6
b) 2 3 4 5
c) 4 5 0 0
d) None of the above

Answer = a
*/

//////////////////////////////////////

/*
Pointers (Program 5):
What is the output of the following C program:
void f(int *p, int *q)
{
    p = q;
    *p = 2;
}
int i = 0, j = 1;
int main()
{
    f(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}

a) 2 2
b) 2 1
c) 0 1
d) 0 2

[GATE 2010 = 1 Marks]

Answer = d
*/

//////////////////////////////////////

/*
Pointers (Program 6):
What is the value printed by the following C program:
#include<stdio.h>
int f(int *a. int n)
{
    if(n <= 0) return 0;
    else if(*a % 2 == 0) return *a + f(a+1, n-1);
    else return *a - f(a+1, n-1);
}
int main()
{
    int a[] = {12, 7, 13, 4, 11, 6};
    printf("%d", f(a, 6));
    getchar();
    return 0;
}

a) -9
b) 5
c) 15
d) 19

[GATE 2010: 2 marks]

Answer = 15
*/

//////////////////////////////////////

/*
Pointers (Program 7):
What is printed by the following C program:
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x+y+z;
}
void main()
{
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    printf("%d", f(c,b,a));
}

a) 18
b) 19
c) 21
d) 22

[GATE 2019: 2 marks]

Answer = 19
*/

//////////////////////////////////////

/*
Pointers (Program 8):
Which one of the choices given below would be printed when the following program is executed?
void swap(int *x, int *y)
{
    static int *temp;
    temp = x;
    x = y;
    y = temp;
}
void printab()
{
    static int i, a = -3, b = -6;
    i = 0;
    while(i <= 4)
    {
        if ((i++)%2 == 1) continue;
        a = a + i;
        b = b+ i;
    }
    swap(&a, &b)
    printf("a = %d, b = %d\n", a, n)
}
main()
{
    printab();
    printab();
}

a) a = 0, b = 3
   a = 0, b = 3
b) a = 3, b = 0
   a = 12, b = 9
c) a = 3, b = 6
   a = 3, b = 6
d) a = 6, b = 3
   a = 15, b = 12

[GATE 2006, 2 marks]

Output = a = 15, b = 12
*/

//////////////////////////////////////

/*
Pointers (Program 9):
A C program  is given below:
#include<stdio.h>
int main()
{
    int i, j;
    char a[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    char b[3][2];
    char *p = *b;
    for (i = 0; i<2; i++)
    {
        for(j = 0; j<3; j++)
        {
            *(p + 2*j + i) = a[i][j];
        }
    }
}
What should be the contents of the array b at the end of the program?

a) a b
   c d
   e f
b) a d
   b e
   c f
c) a c
   e b
   d f
d) a e
   d c
   b f

Answer = b
*/

//////////////////////////////////////
