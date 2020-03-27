/*
Definition of Array:
An array is a data type structure containing a number of data values (all of which are of same type)

Data structure is a format for organizing and storing data.
Also, each data structure is designed to organize data to suit a specific purpose.
For example: Array is a data structure which you can visualize as follows:
Imagine an array as an large chunk of memory divided into smaller block of memory and each block is capable of
storing a data value of some type.

One dimensional array:
The simplest form of array one can imagine is one dimensional array.

Declaration and definition of 1D array:
Syntax: data_type name of the array[no. of elements];
For example: an array of integer can be declared as follows:
int arr[5];
compiler will allocate a contiguous block of memory of size = 5 * sizeof(int)
The length of an array can be specified by any integer constant expression.

Best practice:
Specifying the length of an array using macro is considered to be an excellent practice
#define N 10
int arr[N];

Accessing elements from 1D array:
To access an array element, just write:
array_name[index]
*/

/*
//without macro

#include<stdio.h>

int main() {
    int a[10], i;
    for(i = 0; i<10; i++) {
            printf("Enter the input for index %d: ", i);
            scanf("%d", &a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0; i<10; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
*/

/*
// with macro

#include<stdio.h>
#define N 10
int main() {
    int a[N], i;
    for(i = 0; i<N; i++) {
            printf("Enter the input for index %d: ", i);
            scanf("%d", &a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0; i<N; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
*/

/*
What happens if I accidently add less number of elements than the length specified?
Then the remaining locations of the array are filled by value 0.

A small tip:

int arr[10]
for(i = 0; i<10; i++)
{
    arr[i] = 0;
}

        OR

int arr[i] = {0};

The second way is preferred method

        BUT

Why not int arr[10] = {}; ?
Because, this is illegal.
You must have to specify at least 1 element. It cannot be completely empty.
and it is also illegal to add more elements than the length of array.
*/

/*
Designated Initialization of arrays:
For example: int arr[i] = {1, 0, 0, 0, 0, 2, 3, 0, 0, 0};

We want:
- 1 in position 0
- 2 in position 5
- 3 in position 6

int arr[10] = {[0] = 1, [5] = 2, [6] = 3}
This way of initializing is called designated initialization.
And each number in the square brackets is said to be a designator.

Advantages:
1) There is no need to bother about the entries containing zeros.

Be careful! :
If the length of an array is 'n', then each designator must be between o and n-1.

What if I don't mention the length?
Designator could be any non-negative integer.
Compiler will deduce the length of the array from the largest designator in the list.
*/
