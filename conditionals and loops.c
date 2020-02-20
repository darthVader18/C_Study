#include<stdio.h>
int main()
//output questions
{
    int i = 1024;
    for(/*Here we write initialization step*/;/*After the semi-colon we write condition step*/ i; /*And after this semi-colon we have to write increment or decrement step*/i>>= 1)
        /* >> is a right shift operator */
        //It is not necessary to mention all the three step in for loop, you can skip it but have to write the semi-colon so that the compiler can understand.
        // Condition checking will always produce the answer as true or false. So in this case as we have only mention i and the value of i is 1024 then it is true.
        // we can write the last step as i = i >> 1. So this will shift all the bits towards right by one position.
        /*
        Right now the value of i is 1024, we can write this value in binary as 10000000000, there are total 11 bits in this particular representation.
        when the operator shifts all the bits towards right then the output will be 01000000000, and the equivalent decimal representation of this
        binary representation is 512, so the output produce by that step will be 512. And the loop will continue until the value is false (zero)
        1024 = 10000000000
        512 = 01000000000
        256 = 00100000000
            .
            .
            .
        1 = 00000000001
        0 = 00000000000
        */
        printf("Hello, World") //We have printed this 11 times.

////////////////////////////////////////////////////////////

    int a;
    for(a=0; a<20; a++)
    {
        switch(a)
        {
            case 0: a += 5;  //There is no break after cases. If there is break after each statement then the output will be 5 10 15 20
            case 1: a += 2; //All the cases will be evaluated because there is no break statement
            case 5: a += 5; //After the loop is completes for the first time the value of i will be 16 and then it will be post incremented then the value will be 17.
            default: a += 4; //As 17 is not matched with any of the cases then the default statement will be evaluated then i becomes 21
        }
        printf("%d", a); //the output is 16 21
    }

////////////////////////////////////////////////////////////////////

    int b = -5;
    while (b <= 5)
    {
        if(i >= 0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("Chaitanya"); // Chaitanya will not be printed in the screen because we have never came out of the loop
    }

//////////////////////////////////////////////////////////////////////////////

    int c = 0;
    for(printf("one\n"); c < 3 && printf(""; c++));
    {
        printf("Hi!\n");
    }

///////////////////////////////////////////////////////////////////

    unsigned int d = 500; //range of unsigned int (4 bytes) is 0 to 4294967295
    while(d++ != 0);
    printf("%d", d); //it will not get evaluated as this function is not a part of while loop
    // When d reaches 4294967295, then because of i++, it come back again to 0.
    // As 0 not equals to 0 is false therefore we come outside of the while loop.
    // After we come out of the loop, d will contain 1 because of post increment operator. Therefore, 1 will be printed on the screen.

////////////////////////////////////////////////////////////////////////

    int x = 3;
    if( x==2 ); x=0;
    if( x==3 ) x++;
    else x += 2;

    printf("x = %d", x); // output is x=2

/////////////////////////////////////////////////////////////////////

    return 0;
}
