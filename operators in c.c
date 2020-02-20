#include<stdio.h>
int main()
//output questions
{
    int i = 5; //assume size of integer is 4 bytes
    int var = sizeof(i++); //therefore, i++ inside sizeof is not evaluated
    printf("%d", i, var); //output will be 5 4
/*
According to C99 Standard:
The sizeof operator yields the size of operator (in bytes) of its operand, which may be an expression or a parenthesized name
of a type. THE SIZE IS DETERMINED FROM THE TYPE OF THE OPERAND. If the type of the operand is a VARIABLE LENGTH ARRAY TYPE, then
THE OPEAND IS EVALUATED; otherwise, THE OPERAND IS NOT EVALUATED and the result is an integer constant.
*/
/////////////////////////////////////////////

    int a = 1;
    int b = 1;
    int c = ++a || b++; /*after pre incrementing the value of a will become 2 and that is TRUE VALUE. But in this case short circuit in case of or operator
    simply means that whenever you encounter true rest of the statement will not get evaluated. b++ because of short circuit
    will never get implemented because we know that -> true || anything(either true or false) = true.
    So the value of b will remain 1.
    */
    int d = b-- && --a; /*here value of c will be 1 and that is true and pre decrementing the value of a then it will become 1 and that is also true.
    Hence the value of d will be 1 because -> true && true = true. And then the value of b will post decrement and will become 0 */

    printf("%d %d %d %d", d, c, b, a); // So the output will be 1 1 0 1

////////////////////////////////////////////////////

    return 0;
}
