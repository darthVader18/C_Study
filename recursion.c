/*
Recursion is a process in which a function calls itself directly of indirectly.
For example-

int fun()
{
    fun();
}
*/

/*
#include<stdio.h>
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return 1 + fun(n-1);
}
int main()
{
    int n = 3;
    printf("%d", fun(n));
    return 0;
}
// output = 3
*/

/////////////////////////////////////

/*
Recursive Functions-
Idea:
1) Divide the problems into smaller sub problems.
2) Specify the base condition to stop the recursion.
Base condition is the one which doesn't require to call the same function again and it helps in stopping the recursion.

Problem: Calculate the factorial:
*/

/*
#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of the number %d is %d", n, fact(n));
}
*/

/////////////////////////////

/*
Types of Recursion-
1) Direct Recursion
2) Indirect Recursion
3) Tail Recursion
4) Non-Tail Recursion

Direct Recursion-
A function is called direct recursive if it calls the same function again.
Structure of direct recursion:
fun()
{
    //some code

    fun();

    //some code
}

Indirect Recursion-
A function (let say fun) is called indirect recursive if it calls another function (let say fun2) and then fun2
call fun directly or indirectly.
Structure of indirect recursion:
fun()
{
    //some code

    fun2();

    //some code
}fun2()
{
    //some code

    fun();

    //some code
}

Program to understand indirect recursion
WAP to print numbers from 1 to 10 in such a way that when number is odd, add 1 and when number is even, subtract 1.
Output: 2 1 4 3 6 5 8 7 10 9
*/

/*
#include<stdio.h>
void odd();
void even();
int n = 1;

void odd()
{
    if(n<=10) {
        printf("%d ", n+1);
        n++;
        even();
    }
    return;
}

void even()
{
    if(n<=10) {
        printf("%d ", n-1);
        n++;
        odd();
    }
    return;
}
int main()
{
    odd();
}
*/

/////////////////////////////////

/*
Tail recursion-
A recursive function is said to be tail recursive if the recursive call is the last thing done by the function.
There is no need to keep the record of the previous state.
Example-

void fun(int n){
    if(n==0)
        return;
    else
        printf("%d", n);
    return fun(n-1);
}
int main() {
    fun(3);
    return 0;
}
output = 3 2 1

Non-Tail recursion-
A recursive function is said to be non-tail recursive if the recursive call is not the last thing done by the function.
After returning back, there is some something left to evaluate.
Example-

void fun(int n){
    if(n==0)
        return;
    fun(n-1);
    printf("%d", n);

}
int main() {
    fun(3);
    return 0;
}
Output = 1 2 3

One more example-

int fun(int n) {
    if(n==1)
        return 0;
    else
        return 1 + fun(n/2);
}
int main(){
    printf("%d", fun(8));
    return 0;
}
Output = 3
*/

///////////////////////////////////////

/*
Every recursive program can be written as iterative program.

Advantage of a recursive program over iterative program
1) Every recursive program can modeled into an iterative program but recursive programs are more elegant and requires
relatively less line of code.
For example- Program to calculate factorial of a number can be written in both iterative and recursive way as follows:

Iterative-
int fact(int n){
    int res = 1;
    while(n!=0) {
        res = res*n;
        n--;
    }
    return res;
}
int main()
{
    printf("%d", fact(5));
    return 0;
}

Recursive-
int fact(int n) {
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main() {
    printf("%d", fact(5));
    return 0;
}


Dis-Advantage of a recursive program over iterative program
1) Recursive programs require more space than iterative programs.
Iterative program in above case will only require two activation records will get stored inside the stack. On the
other hand the recursive version of the program require six activation records inside stack.
*/

// Whenever you are short in memory prefer iterative programs over recursive programs.
