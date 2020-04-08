/*
String Literal(or String Constant) is a sequence of characters enclosed within double quotes.

Continuing string literal:
printf("%s", "You have to dream before your dreams can come true.\
       --A.P.J. Abdul Kalam");
\, in C is called splicing. This will continue the sentence.

First argument to printf and scanf function is always a string literal.
But, what we are actually passing to the printf/scanf ?
String literals are stored as an array of characters.
E   a   r   t   h   \o
Total six bytes of read only memory is allocated to the above string literal.
'\0' character must not be confused with '0' character. It is a null character and indicates the end of the string.
Both have different ASCII code. '\0' has the code 0 while '0' has the code 48.

So to the printf and scanf, we are passing a pointer to the first character of a string literal.
Both printf and scanf functions expects a character pointer (char *) as an argument.
Passing "Earth" is equivalent to passing the pointer to the letter 'E'.

Assigning string literals to a pointer:
char *ptr = "Hello World!"
ptr contains the address of the first character of the string literal.

String literal cannot be modified. zIt causes undefined behavior.
String literals are also known as string constants.
The have been allocated a read only memory. So we cannot alter them.
But character pointer itself has been allocated read-write memory. So the same pointer can point to some other
string literals.

String literal and character constant are not same.
"H"         ≠       'H'
 |                   |
Represented by a    Represented by an integer (ASCII code: 72)
pointer to a
character 'H'

Declaring a string variable:
A string variable is a one dimensional array of characters that is capable of holding a string at a time.
Always make the array one character longer than the string. If length the string is 5 characters long than don't
forget to make extra room for null character.
Failing to do the same may cause unpredictable results when program is executed as some C libraries assume the
strings are Null terminated.

Initialize a string literal:
Example:    char s[6] = "Hello";
When a string is assigned to a character array, then this character array is treated like other types of arrays.
We can modify its characters.

"%.ns" is used to print just a part of the string where n is the number of characters to be displayed on the screen.
"%m.ns" is used to print just a part of the string where n is the number of characters to be displayed and m
denotes the size of the field within which the string will be displayed.

Writing a string using puts:
puts() function is a function declared in <stdlib.h> library and is used to write strings to the output screen.
Also, puts() function automatically writes a newline character after writing the string to the output screen.
char *s = "Hello";
puts(s);

Using scanf(), we can read a string into a string variable(character array)
char a[10];
printf("Enter the string:\n");
scanf("%s", a);
printf("%s", a);

scanf() does not store the white space characters in the string variable. It only reads character other than
white spaces and store them in the specified character array until it encounters a white - space character.

Both, gets() and scanf() functions have no way to detect when the character array is full.
Both of them never checks the maximum limit of input characters. Hence, they may cause undefined behavior
and probably lead to buffer overflow error which eventually causes the program to clash.

But, unfortunately, gets() is still unsafe.
It will try to write the character beyond the memory allocated to the character array which is unsafe because it
will simply overwrite the memory beyond the memory allocated to the character array.

putchar accepts an integer argument(which represents a character it wants to display) and returns an integer
representing the character written on the screen.

char* strcpy(char* destination, const char* source);
strncpy(destination, source, sizeof(destination));
size_t strlen(const char* str);
char* strcat(char* str1, const char* str2);
int srtcmp(const char* s1, const char* s2);


*/
