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

/////////////////////////////////////

/*
Count Array Elements by using sizeof Operator:

sizeof(name_of_arr)/sizeof(name of arr[0])

size of 1 array element * number of elements = size of whole array
number of elements = size of whole array / number of elements

*/

////////////////////////////////////

/*
Introduction to Multidimensional Arrays:
Multidimensional array can be defined as an array of arrays.
General form of declaring N-dimensional array as follows:
data_type name_of_array [size1][size2]...[sizeN];

Size of multidimensional array can be calculated by multiplying the size of all the dimensions.
For example:
size of a[10][20] = 10 * 20 = 200
                  = 200 * 4 = 800
We can store upto 200 elements in this array

size of a [4][10][20] = 4 *10 * 20 = 800
                      = 800 * 4 = 3200 bytes
We can store upto 800 elements in this array.
*/

////////////////////////////////////

/*
Introduction to Two-Dimensional (2D) Arrays:
The basic form of declaring an two dimensional array is:
data_type name_of_array [x][y]; //here x is rows and y is columns
where x and y are representing the size of the array.

How to initialize two dimensional array?
int a[2][3] = {{1,2,3}, {4,5,6}};

Using row index and column index we can access 2D array elements
For example:
If we have to access the above array, we can write:
a[0][1] that is 2

Printing 2D array:

for(i = 0; i<2; i++)    //this example is for the above array
{
    for(j = 0; j<3; j++)
    {
        printf("%d ", a[i][j]);
    }
}

1 = 0   j = 0   a[0][0]
1 = 0   j = 1   a[0][1]
1 = 0   j = 2   a[0][2]
1 = 1   j = 0   a[1][0]
1 = 1   j = 1   a[1][1]
1 = 1   j = 2   a[1][2]
Output = 1 2 3 4 5 6
*/

////////////////////////////////////

/*
Introduction to Three-Dimensional (3D) Arrays:
Initializing:
int a[2][2][3] = {
                    {{1,2,3}}, {4,5,6},
                    {7,8,9}, {10,11,12}}
                 };
There will be two matrices of 2*3

Printing:
for(i = 0; i<2; i++)    //this example is for the above array
{
    for(j = 0; j<2; j++)
    {
        for(k = 0; k<3; k++)
        {
            printf("%d ", a[i][j][k]);
        }
    }
}

*/

////////////////////////////////////

/*
C Program for Matrix Multiplication:

In order to multiply two matrices, #columns of 1st matrix = #rows of 2nd matrix
Also, size of the resultant matrix depends on #rows of 1st matrix and #column of 2nd matrix
*/
/*
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    // Part 1
    printf("Enter the rows and columns of the matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a:\n");
    for(i=0; i<arows; i++)
    {
        for(j=0; j<acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if(brows != acolumns)
    {
        printf("Sorry! We cannot multiply the matrices a and b");
    }
    else
    {
        printf("Enter the elements of matrix b:\n");

        for(i=0; i<brows; i++)
        {
            for(j=0; j<bcolumns; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");

    for(i = 0; i<arows; i++)
    {
        for(j = 0; j<bcolumns; j++)
        {
            for(k = 0; k<brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    // Printing the array elements
    printf("Resultant matrix\n");
    for(i = 0; i<arows; i++)
    {
        for(j = 0; j<bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

////////////////////////////////////

/*
Constant Arrays:
Either one dimensional or multi-dimensional arrays can be made constant by starting the declaration with the
keyword const.
We cannot change the elements of the array anywhere in the program.
Advantage:
It assures that the program will not modify the array which may contain some valuable information.
It may also helps the compiler to catch errors by informing that there is no intention  to modify this array.
*/

////////////////////////////////////

/*
Variable Length Arrays:
Reverse a series of number(New program)
*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements you want to reverse: \n");
    scanf("%d", &n);

    int a[n];
    int i;
    printf("Enter all the %d elements: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }

    printf("Elements in reverse order: \n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
/*
Advantages:
At the time of execution, we can decide the length of the array.
No need to choose the fix length while writing the code.
Even arbitrary expressions are possible.

Variable length arrays cannot have static storage duration.
Variable length array does not have the initializer.

*/
