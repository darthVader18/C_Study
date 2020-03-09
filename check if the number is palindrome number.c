/*
What is a palindrome?
A number or a word or a phrase if read backwards gives the same number or a word or a phrase
as it is being read forward.
example- 1221, racecar, 24542 etc.

Idea-
Make last number the first number, 2nd last number the second number and so on...
That means you need to reverse the number and if the reversed number is equal to the actual number
then we can say that the given number is a palindrome  number.
*/

#include<stdio.h>
int main()
{
    int n, result=0, q, rem;
    printf("Please enter the number: ");
    scanf("%d", &n);

    q = n;

    while(q!=0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }

    if(result == n)
        printf("Its a  palindrome");
    else
        printf("No! Its not a palindrome");
    return 0;
}
