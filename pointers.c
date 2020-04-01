/*
Introduction to Pointers:
Pointer is a special variable that is capable of storing some address.
It points to a memory location where the first byte is stored.
*/

////////////////////////////////////

/*
Declaring & Initializing Pointers:
General syntax for declaring pointer variable:
data_type *pointer_name
Here the data type refers to the type of the value that the pointer will point to.

Simply declaring a pointer is not enough.
It is important to initialize pinter before use.
One way to initialize pointer is to assign address of some variable.
int x = 5, *ptr =  &x;
*/

////////////////////////////////////

/*
Value of Operator in Pointers:
Value of operator /indirection operator /dereference operator is an operator that is used to access the value
stored at a location pointed by the pointer.
We can also change the value of the object pointed by the pointer.
For example:
int x = 10;
int *ptr = &x;
*ptr = 4;
printf("%d", *ptr);

Output: 4

Never apply the indirection operator to the uninitialized pointer.
Assigning value to an uninitialized pointer is dangerous. It will produce a segmentation Fault(SIGSEGV).
Usually, segmentation fault is caused by program trying to read or write an illegal memory location.
*/

////////////////////////////////////

/*
Pointer Assignment:
For example
int i = 10;
int *p, *q;
p = &i;
q = p;
printf("%d %d", *p, *q);

Output: 10 10

Here if we write *q = *p then the process will be different.
*/

////////////////////////////////////

/*
Pointer Application (Finding the Largest & Smallest Elements in an Array):
*/
/*
#include<stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i=1; i<len; i++)
    {
        if (arr[i]> *max)
            *max = arr[i];
        if (arr[i]< *min)
            *min = arr[i];
    }
}

int main()
{
    int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("Minimum value in the array is: %d and the Maximum value is: %d", min, max);
    return 0;
}
*/

////////////////////////////////////

/*
Returning Pointers:


#include<stdio.h>

int *findMid(int a[], int n)
{
    return &a[n/2];
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a, n);
    printf("%d", *mid);
    return 0;
}

Never ever try to return the address of an automatic variable.
For example:

int *fun()
{
    int i = 10; // here i is local variable(automatic variable)
    return &i; // after returning the address of this variable this variable this function will get destroyed.
            // and the variable which are local to this function will get destroyed therefore we are trying to
            // return the address of the variable that is already destroyed.
}

int main()
{
    int *p = fun();
    printf("%d", *p);
}
//warning message will get generated:
// Warning: functions returns address of local variable.
*/
////////////////////////////////////

/*
Pointer Arithmetic (Addition):

*/

////////////////////////////////////

/*
Pointer Arithmetic (Subtraction):

*/

////////////////////////////////////

/*
Pointer Arithmetic (Increment & Decrement):

*/

////////////////////////////////////

/*
Pointer Arithmetic (Comparing the Pointers):
Use relational operators(<, >, <=, >=) and equality operators (==, !=) to compare pointers.
Only possible when both pointers point to the same array.
output depends upon the relative positions of both the pointers.

*/

////////////////////////////////////

/*
Using Array Name as a Pointer:
Name of an array can be used as a pointer to the first element of the array.
For example:

int main()
{
    int a[5];
    *a = 10;
    printf("%d", a[0]);
    return 0;
}
Output = 10

int main()
{
    int a[5];
    *(a+1) = 20;
    printf("%d", a[1]);
    return 0;
}
Output = 20

From the above code is clear that
*(a+1) = a[i]

Example:
int main()
{
    int a[] = {11, 22, 36, 5, 2}
    int sum = 0, *p;

    for(p = &a; p<=a+4; p++)
        sum + = *p;

    printf("The sum is %d", sum);
}
Output = 76

Be careful
It is true we can use array names as pointers, but assigning a new address to them is not possible.
*/

////////////////////////////////////

/*
Passing Array as an Argument to a Function:
Example:

int add(int b[], int len)
{
    int sum = 0, i;
    for(i=0; i<len; i++)
        sum += b[i];
    return sum;
}

int main()
{
    int a[] = {1, 2 ,3 ,4}
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d", add(a, len));
    return 0;
}
*/

////////////////////////////////////

/*
Using Pointers to Print 2D Arrays:
Difference between row major and column major

Row major order: Elements are stored row by row
Column major order: Elements are stored column by column

C stores multidimensional arrays in row major order.

Using pointers:
for(p = &a[0][0]; p <= &a[row-1][column-1]; p++)
    printf("%d", *p);
*/

////////////////////////////////////

/*
Processing the Multidimensional Array Elements (or) Address Arithmetic of Multidimensional Arrays:
For 2D array:
*a => return pointer to the first element = a[0] = &a[0][0]
*(a+1) => pointer to the first element of the second 1D array

**a => *(*a) => *(*(a+0))
=> *(&a[0][0]) =>  a[0][0] => 1

*(a+1) => *(pointer to the 2nd 1D array)
=> pointer to the first element of 2nd 1D array

**(a+1) = **(pointer to the 2nd 1D array)
=> *(pointer to the 1st element of 2nd 1D array) => 3

*(a+1)+1 => pointer to the first element of the second 1D array + 1 => pointer to the 2nd element of 2nd 1D array
*(*(a+1)+1) => *pointer to the 2nd element of 2nd 1D array => 4  => a[1][1]

For 3D array:
int a[2][2][2]
Here a is the pointer to the first 2D array
two 2D arrays
Each of which contains two 1D array
Each of which contains two elements

a = pointer to 1st 2D array
a+1 = pointer to the 2nd 2D array
*(a+1) = pointer to 1st 1D array of 2nd 2D array
*(*(a+1)) = pointer to first element of 1st 1D array of 2nd 2D array
*(**a+1) = 2md element of 1st 1D array of 1st 2D array
*/

////////////////////////////////////

/*
Pointer Pointing to an Entire Array:
#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, ,4, 5}
    int *p = a;
    printf("%d", *p);
    return 0;
}
Output = 1

int (*p)[5] = &a;
printf("%d", **p);
pointer to the whole array of 5 elements
output = 1
*/

////////////////////////////////////
