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
