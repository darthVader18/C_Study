/* For printing * in a 2*2 matrix
for(i = 1; i <= 2; i++)
{
    for(j = 1; j <= 2; j++)
    {
        printf("*");
    }
}

3 rows -> 5 columns
4 rows -> 7 columns
5 rows -> 9 columns
6 rows -> 11 columns

If n is no. of rows then 2n-1 will be no. of columns

Algorithm-

for(i = 1; i <= n; i++)
{
    for(j = 1; j <= 2*n - 1; j++)
    {

    }
}
===================================
if(j >= n-(i-1) && j <= n+(i+1))
{
    printf("*");
}
else
{
    printf("");
}
===================================
*/


#include<stdio.h>
int main()
{
    int n, i, j;
    printf("How many rows you want in your pyramid?\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<= 2*n-1; j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1))
                {
                    printf("*");
                }
            else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}
