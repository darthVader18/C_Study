/*
Function is basically a set of statements that takes inputs, perform some computation and produces output.
Syntax:
Return_Type function_name(set of inputs);

There are two important reasons of why we are using functions:
1) Re-usability
Once a function is defined, it can be reused over and over again.
2) Abstraction
If you are just using the function in your program then you don't have to worry about how it works inside!
Example: scanf function
*/
#include<stdio.h>

int areaOfRect(int lenght, int breadth)
{
    int area;
    area = lenght * breadth;
    return area;
}
int main()
{
    int l = 10, b = 5;
    int area = areaOfRect(l, b);
    printf("%d\n", area);

    int l = 50, b = 20;
    int area = areaOfRect(l, b);
    printf("%d\n", area);

}

/////////////////////////////////////////////////////

/*
Similarly, function declaration(also called function prototype) means declaring the properties of a function to the compiler.
For example: int fun(int, char)
Properties:
1) Name of function:    fun
2) Return type of function: int
3) number of parameters:    2
4) Type of parameter 1: int
5) Type of parameter 2: char

It is not necessary to put the name of the parameters in function prototype.
For example: int fun(int var1, char var2); Not necessary to mention these names
*/

char fun(); //function prototype
int main()
{
    char c = fun();
    printf("character is: %c", c);
}
char fun()
{
    return 'a';
}
// It is not necessary to declare function before using it but it is preferred to declare a function before using it.
/*
When we use the function before defining, it will produce a warning of implicit declaration of function. As the compiler
doesn't know about the return type of the function, it will assume the return type as int and will produce an error.
*/

////////////////////////////////////////////////////////////

/*
Function definition consist of a block of code which is capable of performing some specific task.
*/

int add(int, int); //Don't forget to mention the prototype of the function, there is no need to mention the names
                    // of the parameters.
int main()
{
    int m = 20, n = 30, sum;
    sum = add(m, n); // This is the way you call a function. While calling a function you should not mention the return type
    // of the function, also you should not mention the return types of the arguments.
    // m and n are arguments or actual parameters
    printf("sum is: %d", sum);
}

int add(int a, int b) //This is the way you define a function. It is important to mention both data type and
// name of the parameters
// a and b are parameters or formal parameters
{
    return (a + b);
}
/*
Parameter: is a variable in the declaration and definition of the function.
Argument: is the actual value of the parameter that gets passed to the function.
Parameter is also called as Formal Parameter(Formal parameters are the parameters received by a function) and
Argument is also called as Actual Parameter(Actual parameters are the parameters passed to a functions).
*/

//////////////////////////////////////////////////////

/*
Call by value:
Here value of actual parameters will be copied to formal parameters and these two different parameters store
values in different locations.
In call by value procedure you are simply passing the values to the variables not the variables itself. So whatever
the changes you made to these variables will not get reflected back to the variables where the are originally declared.

int x = 10, y = 20;
fun(x, y);
printf("x = %d, y = %d", x, y);
int fun(int x, int y)
{
    x = 20;
    y = 10;
}
Output: x = 10, y = 20


Call by reference:
Here both actual and formal parameters refers to same memory location. Therefore, any changes made to the formal
parameters will get reflected to actual parameters.
Here instead of passing values we pass addresses.

int x = 10, t = 20; //let's say here location of x is 1000 and of y is 2000
fun(&x, &y) //here we use ampersand (&) also called as address of operator.
// It means we are simply passing the address of these operators instead of passing the values. Therefore in declaration
of the function address of x and y is received instead of values.
printf("x = %d, y = %d", x, y);
int fun(int *ptr1, int *ptr2)
{
    *ptr1 = 20; // ptr1 will store the address of variable x which is 1000
    *ptr2 = 10; // ptr2 will store the address of variable y which is 2000
    // when we use * in front of the ptr1 it simply means to access the value of ptr1. And this particular operator
    // known as dereference operator, which is just opposite to the ampersand operator.
}
Output: x = 20, y = 10
*/
