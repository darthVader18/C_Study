/*
Write a program to print the following number in reverse order:
34 56 54 32 67 89 90 32 21
Assume that all these numbers are stored in an array


#include<stdio.h>

int main()
{
    int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i;

    //original order
    for(i = 0; i<9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // reverse order
    for(i = 8; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
*/

/////////////////////////////

/*
Write a program to check whether any of the digits in a number appears more than once:
Example:
Input: 67827
Output: Yes
*/

/*
#include<stdio.h>

int main()
{
    int seen[10] = {0}; // Part 1
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    int rem;
    while (N>0)
    { // Part 2
        rem = N % 10;
        if(seen[rem] == 1)
            break;
        seen[rem] = 1;
        N = N/10;
    }

    if(N>0) // Part 3
        printf("Yes");
    else
        printf("No");
    return 0;
}
*/

/*
Multidimensional array:
Write a program that reads a 5*5 array of integers and then prints the row sum and the column sum:
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row Total: 30 27 40 36 28
Column total: 34 37 37 32 21
*/
#include<stdio.h>
int main()
{
    int a[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
        };

    int i, j;
    int sum = 0;

    //Row sum
    printf("Row Total: ");

    for(i = 0; i<5; i++)
    {
        for(j = 0; j<5; j++)
        {
            sum += a[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }

    //Column sum
    printf("\nColumn Total: ");

    for(j = 0; j<5; j++)
    {
        for(i = 0; i<5; i++)
        {
            sum += a[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }
    return 0;

}


