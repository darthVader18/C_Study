// Idea is to use increment decrement operator
/*
x = 3, y = 4
Algorithm:
Step 1: x++; y--;
Step 2: repeat step 1 until y becomes 0
In this we can input negative integers also
*/
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    if (y > 0)
    {
        while(y != 0)
        {
        x++;
        y--;
        }
    }
    else if (y < 0)
    {
        while(y != 0)
        {
        x--;
        y++;
        }
    }

    printf("Sum of the two values is %d:", x);
    return 0;
}
