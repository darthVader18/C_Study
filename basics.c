#include<stdio.h>
#define STRING "%s\n" //macros........ the job of preprocessor is to replace macros with their corresponding value
#define ME "I am learning C!!" //macros

    static int a;
    static int a = 27;
    static int a;

//These all are output questions
int main()
{
    printf("%d", printf("%s", "Hello World!"));
    printf("%s\n", "Hello");
    printf("%10s\n", "Hello");
///////////////////////////////////////////////

    char c = 255;
    c = c + 10;
    printf("%d\n", c); // here value of n(character size is 8 bit) is 2^8 = 256, so 265%256 = 9

//////////////////////////////////////////////

    unsigned i = 1;
    int j = -4;
    printf("%u\n", i+j); //integer value depends from machine to machine

///////////////////////////////////////////////////////

    int var = 052; //when we place a zero in front of any value then that value is treated as octal value. We will convert it into decimal value
    printf("%d\n", var); // if here instead of %d we write %o then it will print octal value and the output will be 52

//////////////////////////////////////////////////

    printf(STRING, ME);

/////////////////////////////////////////////////////////

    int x = 0x43FF; //when we place 0x in front of any value then it will be treated as hexadecimal value
    printf("%x", x); // %x is format specifier for hexadecimal values. Output will be 43ff
    //if we change the format specifier to %X then the output will be 43FF
    //if we change the format specifier to %d then we need to convert hexadecimal to decimal and the output will be 17407

///////////////////////////////////////////////////////////

    static int a; //this variable will get more preference than the above variable that are declared above main function. If we remove this line then the output will be 27.
    printf("%d", a); //the output will  be 0.

///////////////////////////////////////////////////////////////


    return 0;
}
