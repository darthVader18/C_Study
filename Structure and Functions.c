/*

A structure is a user defined data type that can be used to group elements of different types into a single type.

//////////////////////////////////////////////////

Passing structure members as an argument:
Just like variables we can pass structure variables as an arguments to a function.
example-

struct student {
    char name[50];
    int age;
    int roll_no;
    float marks;
};

void print(char name[], int age, int roll_no, float marks) {
    printf("%s %d %d %.2f", name, age, roll_no, marks);
}

int main() {
    struct student s1 = {"Nick", 16, 50, 72.5}
    print(s1.name, s1.age, s1,roll_no, s1.marks)l;
}

Output: Nick 16 50 72.50

Call by reference:
Instead of passing the copies of the structure members, we can pass their addresses (or references).
example-
struct charset {
    char s;
    int i;
};

void keyValue(char* s, int* i) {
    scanf("%c %d", s, i);
}

int main() {
    int j;
    struct charset cs;
    keyValue(&cs.s, &cs.i);     //Here cs.s will get evaluated first and then ampersand will get evaluated
                                //because dot operator has greater precedence than ampersand operator
    printf("%c %d", cs.s, cs.i);
    return 0;
}

//////////////////////////////////////////////////

Passing structure variable as an argument:
Instead of passing structure members individually, it is a good practice to pass a structure variable as an argument.
Unlike arrays, name of a structure variable are not pointers.
Its a pass by value.
example:

#include <stdio.h>

struct point {
    int x;
    int y;
};

void print(struct point p) {
    printf("%d %d\n", p.x, p.y);
}

int main() {
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};
    print(p1);
    print(p2);
    return 0;
}

Output:
23 45
56 90

/////////////////////////////////////////////////

Passing pointers to structure as an argument:
If the size of the structure is very large then passing the copy of the whole structure is not efficient.
Better choice: Pass the address of the structure
Use the arrow operator(->) to access the structure members inside the called function.
example:
#include <stdio.h>

struct point {
    int x;
    int y;
};

void print(struct point *ptr) {
    printf("%d %d\n", ptr->x, ptr->y);
}

int main() {
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};
    print(&p1);
    print(&p2);
    return 0;
}

Output:
23 45
56 90

/////////////////////////////////////////////////

Returning a structure variable from the function:
Returning a structure variable from a function is similar to returning a variable from a function.
example:

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point edit(struct point p) {
    (p.x)++;
    p.y = p.y + 5;
    return p;
}

void print(struct point p) {
    printf("%d %d\n", p.x, p.y);
}

int main() {
    struct point p1 = {23, 45};
    struct point p12 = {56, 90};
    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);
    return 0;
}

Output:
24 50
57 95

/////////////////////////////////////////////////

Returning a pointer to a structure from the function:
example:

#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct point* fun(int a, int b) {
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    //Here malloc will return a void pointer that is why this typecasting is required (struct point *) as the data we
    //want to store in that memory is of type struct point that is why the pointer must be typecasted to struct point
    //type. This us very important because that pointer will point to a struct point type of data which has been
    //allocated at heap that is why that pointer must be of type struct point.
    //We are using malloc here because heap memory is fixed, we have to explicitly deallocate it.
    ptr->x = a;
    ptr->y = b + 5;
    return ptr;
}

void print(struct point *ptr) {
    printf("%d %d\n", ptr->x, ptr->y);
}

int main() {
    struct point *ptr1, *ptr2;
    ptr1 = fun(2, 3);
    ptr = fun(6, 9);
    print(ptr1); print(ptr2);
    free(ptr1);
    free(ptr2);
    return 0;
}

Output:
2 8
6 14

/////////////////////////////////////////////////

Passing array of structure as an argument:
Compiler will allocate contagious block of memory for the data members of the structure.
example:

#include <stdio.h>

struct point {
    int x;
    int y;
};

void print(struct point arr[]) {
    int i;
    for(i=0; i<2; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
}

int main() {
    struct point arr[2] = {{1, 2}, {3, 4}};
    point(arr);
    retrurn 0;
}

Output:
1 2
3 4

/////////////////////////////////////////////////

Self referential structures:
Self referential structures are those structures in which one or more pointers points to the structure of the same type.
example:
struct code {
    int i;
    char c;
    struct code *ptr;
};

int main() {
    struct code var1;
    struct code var2;

    var1.i = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.i = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2.ptr;
    printf("%d %c", var1.ptr->i, var1.ptr->c);
}

Output:
66 B

We will see the usefullness of self referential structure in linked list.

/////////////////////////////////////////////////

*/
