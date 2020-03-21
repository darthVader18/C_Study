/*
In C, functions are global by default.
This means if we want access a function outside from the file where it is declared, we can access it easily.
Now if we want to restrict the assess, then we make our function static by putting a keyword static in front
of the function.
Static functions are restricted to the files where they are declared.
Reuse of the same function in another file is possible.
*/
static int fun(int a, int b)
{
    int c;
    c = a+b;
    return c;
}

