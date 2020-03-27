/*
Consider the following recursive C function:

void get(int n) {
    if(n < 1) return;
    get(n - 1);
    get(n - 3);
    printf("%d", n);
}

If get(6) function is being called in main() then how many times will the get() function be invoked before returning
to the main()?
A) 15   B) 24
C) 35   D) 45

[GATE 2015 - 2 marks]

    get(6)
      |    \
            get(3)  +6 calls
    get(5)
      |    \
            get(2)  +4 calls
    get(4)
      |    \
            get(1)  +2 calls
    get(3)
      |    \
            get(0)
    get(2)
      |    \
            get(-1)
    get(1)
      |    \
            get(-2)
    get(0)

Answer = 25
*/

/////////////////////////////////

/*
Determine, how many number of times the star will be printed on the screen:

void fun1(int n)
{
int i = 0;
if (n > 1)
    fun(n - 1);
for (i = 0; i < n; i++)
    printf(" * ");
}

A) n    B) n(n+1)/2
C) n*n  D) None of the above

For n = 2
Star will be printed 1 + 2 = 3 times
For n = 3
Star will be printed 1 + 2 + 3 = 6 times
For n = 4
Star will be printed 1 + 2 + 3+ 4 = 10 times
For n = k
Star will be printed 1 + 2 + ... + k = k(k+1)/2 times

Answer = n(n+1)/2
*/

//////////////////////////////////

/*
Consider the following C program:

int f(int j)
{
    static int i = 50;
    int k;
    if(i == j)
    {
        printf("something");
        k = f(i);
        return 0;
    }
    else return 0;
}

Which one of the following is true:
a) The functions return 0 for all values of j.
b) The function prints the string "something" for all values of j.
c) The functions returns 0 when j = 50.
d) The function will exhaust the runtime stack or run into an infinite loop when j = 50.

[GATE 2014 (Set 2)]

Answer - d
*/

//////////////////////////////////

/*
Consider the following C section:

int fun(int n)
{
    int x = 1, k;
    if(n == 1) return x;
    for(k=1; k<n; ++k)
        x = x + fun(k) * fun(n-k);
    return x;
}

The return value of fun(5) is
a) 0
b) 26
c) 51
d) 71

fun(5) = 1 + fun(1) * fun(4) + fun(2) * fun(3) + fun(3) * fun(2) + fun(4) * fun(1)
       = 1 + 2 * [fun(1) * fun(4) + fun(2) * fun(3)]
       = 1 + 2 * [fun(4) + fun(2) + fun(3)]

fun(2) = 1 + fun(1) * fun(1) = 1 + 1 = 2

fun(3) = 1 + fun(1) * fun(2) * fun(2) * fun(1) = 1 + 2 + 2 = 5

fun(4) = 1 + fun(1) * fun(3) * fun(2) * fun(2) * fun(3) * fun(1) = 1 + 5 + 4 + 5 = 15

fun(5) = 1 + 2 * [5 + 2 + 15]
       = 51

Answer = 51
*/

///////////////////////////////

/*
What will be the output of the following C program:

void count(int n)
{
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if(n > 1) count(n-1);
    printf("%d", d);
}
int main()
{
    count(3);
}

a) 3 1 2 2 1 3 4 4 4
b) 3 1 2 1 1 1 2 2 2
c) 3 1 2 2 1 3 4
d) 3 1 2 1 1 1 2

[GATE 2016 (Set 1)]

Answer - a
*/
