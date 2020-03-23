// Do not run the file!!
/*
Consider the program below in a hypothetical programming language which allows global variable and a choice
of static and dynamic scoping.

Let x be the value printed under static scoping and y be the value printed under dynamic scoping. Then x and y are:
[GATE IT 2007]
*/
int i; // Global variable
program main()
{
    i = 10; // it changes the value of the global variable to 10. Now, i=10
    call f();
}

procedure f()
{
    int i = 20;
    call g();
}
procedure g()
{
    print i; /*For static scoping the compiler will first look inside this function for the value of i and then
                will look for the global variable i.e i = 10.
                For dynamic scoping the compiler will first look inside this function for the value of i and then
                will look in the f() function i.e i = 20.
                */
// x = 10   y = 20
}

//////////////////////////

/*
What will be the output for the following pseudo code when parameters are passed by reference and dynamic scoping
is assumed.
[GATE 2016]
*/

a = 3;
void n(x){
    x = x * a; // here x is 2 and the a is also 2 because it will access the variable which is available inside the
                //collar of the function, 2 * 2 = 4
    print(x); // x = 4
}
void m(y){
    a = 1;
    a = y - a; // the local variable bill not contain the value 3-1 = 2.
    n(a/* &a */); // here also we are passing the address of a which is local to the function.
    print(a); // the value of a will be 4
}
void main(){
    m(a/* &a */); // here we are passing address of a and not the value of a
}
// outpir is 4 4
