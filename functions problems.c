// Do not compile this, it is only for practice, and it will show error because it contains many solved questions
// and multiple main functions

////////////////////////////////////////

int func(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num >>= 1;
    }
    return(count);
}
/* num = 435
 count = 1
 435 = 110110011 .... after right sifting by one position this becomes 011011001  Iter 1
 count = 2
 001101100    Iter 2
    .
    .
    .
000000000   Iter 9
count = 9
*/

// The value returned by func(435) is _____9______

// [GATE 2014]

////////////////////////////////////////////////

void f1(int a, int b)
{
    int c;
    c = a; a = b; b = c;
}
void f2(int *a, int *b)
{
    int c;
    c = *a; *a = *b; *b = c;
}

int main()
{
    int a = 4, b = 5, c = 6;
    f1(a, b);
    f2(&b, &c);
    printf("%d", c-a-b);
    return 0;
}
// GATE 2015 SET-1
/*
void f1(int a, int b)
{
    int c;
    c = a; a = b; b = c;
}
int main()
{
    int a = 4, b = 5, c = 6;
    f1(a, b);
}
a = 4
b = 5
c = 4
///////
a = 5
b = 4
c = 4

(The above code)But after completion of this function these values will get destroyed as they are local to the function and
whatever the changes we made will not get reflected back to a and b and hence a and b will be unchanged.

void f2(int *a, int *b)
{
    int c;
    c = *a; *a = *b; *b = c;
}
int main()
{
    int a = 4, b = 5, c = 6;
    f2(&b, &c);
}

b = 5 (let the location be 1000)
c = 6 (let the location be 2000)
//////////////////////
    (pointer)
    a = 1000 (which is address of b = 5)
    b  = 2000 (which is address of c = 6)
    c = 5
///////////////////////
b = 6
c = 5

///////////////////////////
After evaluating all the functions
a = 4
b = 6
c = 5

5-4-6 = -5
*/

//////////////////////////////////////////////////

int fun()
{
    static int num = 16;
    return num--;
}
int main()
{
    for(fun(); fun(); fun())
        printf("d ", fun());
    return 0;
}
/*
14 11 8 5 2
*/
