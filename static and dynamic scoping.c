/*
Stack is a container(or memory segment) which holds same data.
Data is retrieved in Last In First Out (LIFO) fashion.
Two operations: push and pop
Whenever we call a function it is stored inside a stack. Actually it is not the function that is stored inside call stack,
it is activation record of the function which is maintained inside call stack.
Activation record - is a portion of a stack which is generally composed of:
1) Locals of the callee
2) Return address of the caller
3) Parameters of the callee
*/
// Example-
#include<stdio.h>
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}

int fun1(int a)
{
    int b = 5;
    b = b+a;
    return b;
}
// output - 15

/*
Scoping is necessary if you want to reuse variable names
Example-
int fun1()
{
    int a = 10;
}
int fun2()
{
    int a = 40;
}

In Static scoping(or lexical scoping), definition of a variable is resolved by searching its component block or
function . If that fails, then searching the outer containing block and so on.

int a = 10, b = 20;
int fun()
{
    int a = 5;
    {
        int c;
        c = b/a;  // the compiler will prefer the variable which is nearer to this block.
        printf("%d", c);
    ]
}
output = 4

Static scoping example-

int fun1();
int fun2();
int a = 5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}
int fun1()
{
    b = b + 10;
    b = fun2(b);
    return b;
}
int fun2()
{
    int c;
    c = a + b;
    return c;
}
output = 25
*/

/*
In dynamic scoping, definition of a variable is resolved by searching its containing block and if not found, then
searching its calling function and if still not found then the function which called that calling function will be
searched and so on.
example-

int fun1();
int fun2();
int a = 5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}
int fun1()
{
    b = b + 10;
    b = fun2(b);
    return b;
}
int fun2()
{
    int c;
    c = a + b; // the variable a takes the global value i.t. 5 not the local value
    return c;
}
output = 30
*/

/*
In most of the programming languages, static scoping is followed instead of dynamic scoping.
Languages, including Algol, Pascal, C, Haskell, Scheme etc. are statically scoped.
Some languages, including SNOBOL, APL, Lisp etc. are dynamically scoped.
As C follows static scoping therefore it is not possible to see programmatically, how dynamic scoping works in C.
But in reality C never follows dynamic scoping, it always follows static scoping.
Perl is a programming language which supports both static as well as dynamic scoping.
example(in Perl language)-

$x = 50; // This is a way to declare a variable in Perl

sub fun2{ // This is a way you define function in Perl
    return $x;
}

sub fun1{
    local $x = 10; // local keyword(allows dynamic scoping) makes your variable visible up the call stack too.
    my $y = fun2(); // my keyword(allows static scoping) makes your variable visible only where it's declared.
    return $y;
}

print fun1();

// According to dynamic scoping function always looks down the stack first and then sees the global variable.
Output = 10
*/
