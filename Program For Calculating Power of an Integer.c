/*
a ^ b = a * a * a ... b times      where a and b are integers
example:
2 ^ 3 = 2 * 2 * 2 = 8
2 ^ -3 = 1/2 * 1/2 * 1/2

Implementation:

int base, exponent;
int power = 1, expo;
printf("Enter the base: ");
scanf("%d", &base);
printf("Enter the exponent: ");
scanf("%d", &exponent);

expo = exponent;
if(exponent > 0)
{
    while(exponent != 0)
    {
        power = power * base;
        exponent--;
    }
}
printf("%d to the power of %d is %d", base, expo, power);
}

Iteration1 1:
power = 1*2 = 2
exponent = 3-1 = 2

Iteration1 2:
power = 2*2 = 4
exponent = 2-1 = 1

Iteration1 3:
power = 4*2 = 8
exponent = 1-1 = 0

The above code will work fine for exponents greater than zero i.e. for positive exponents.

int base, exponent, expo;
double power1 = 1.0;
printf("Enter the base: ");
scanf("%d", &base);
printf("Enter the exponent: ");
scanf("%d", &exponent);

expo = exponent;
if(exponent < 0)
{
    while(exponent != 0)
    {
        power1 = power1 * (1.0 / base);
        exponent++;
    }
}
printf("%d to the power of %d is %.10f", base, expo, power1);
}

Iteration1 1:
power = 1*(1.0/2) = 0.5
exponent = -3+1 = -2

Iteration1 2:
power = 0.5*(1.0/2) = 0.25
exponent = -2+1 = -1

Iteration1 3:
power = 0.25*(1.0/2) = 0.125
exponent = -1+1 = 0
*/
#include<stdio.h>
int main()
{
    int base, exponent, power = 1, expo;
    double power1 = 1.0;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent;
    if(exponent > 0)
        {
            while(exponent != 0)
            {
                power = power * base;
                exponent--;
            }

        printf("%d to the power of %d is %d", base, expo, power);
        }
    else
        {
            while(exponent != 0)
                {
                    power1 = power1 * (1.0 / base);
                    exponent++;
                }

            printf("%d to the power of %d is %.10f", base, expo, power1);
        }

    return 0;
}
