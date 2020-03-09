/*
Armstrong number:
An Armstrong number of order n is a number in which each digit when multiplied by itself n number of times and
finally added together, results the same number.

For example:
371 is 3 digit number. Therefore, its order is 3

Now here, each digit is multiplied by itself 3 times and finally added together and results in our
original number i.e.

3*3*3 + 7*7*7 + 1*1*1 = 371

Step 1:
First find out how many digit are there in your number

count = 0;
while(q!=0)
    {
        q = q/10;
        count++;
    }

1. 371/10 = 37
    Count = 1
2. 37/10 = 3
    Count = 2
3. 3/10 = 0
    Count = 3

Step 2:
Multiply each digit n times(in our example n = 3) and then add them
cnt = count, result = 0;
while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
            {
                mul = mul*rem;
                cnt--;
            }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }

1. 371%10 = 1
    mul = 1
    result = 1
2. 37%10 = 7
    mul = 7*7*7 = 343
    result = 1+343 = 344
3. 3%10 = 3
    mul = 3*3*3 = 27
    result = 344 + 27 = 371

Step 3:
Check whether the calculated result is equal to the actual number or not.
if(result == number)
    printf("%d is an Armstrong number", number);
else
    printf("%d is not an Armstrong number", number);
*/

#include<stdio.h>
int main()
{
    int number, count = 0, result = 0, mul = 1, rem, cnt;
    printf("Please enter a number: ");
    scanf("%d", &number);

    int q = number;
    while(q!=0)
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
            {
                mul = mul*rem;
                cnt--;
            }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    if(result == number)
        printf("%d is an Armstrong number", number);
    else
        printf("%d is not an Armstrong number", number);
    return 0;

}
