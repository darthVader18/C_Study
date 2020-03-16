/*
Floyd's Triangle(named after a computer scientist- Robert W. Floyd) is a right angled triangular array of natural
numbers. It is filled by natural numbers consecutively starting with 1 in the top left corner.

Example: Floyd Triangle with 5 rows
1
2   3
4   5   6
7   8   9   10
11  12  13  14  15

printf("Enter the number of rows: ");
scanf("%d", &rows);

n = 1;

for(i=1; i<=rows; i++)
{
    for(j=1; j<=i; j++)
    {
        printf("%d ", n);
        n++;
    }
    printf("\n");
}
*/
#include<stdio.h>
int main()
{
    int i, j, rows, n = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
        {
            for(j = 1; j <= i; j++)
                {
                    printf("%d ", n);
                    n++;
                }
                printf("\n");
        }
        return 0;
}
