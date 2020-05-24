/*
What is Data?

Dictionary Definition:
The quantities, characters or symbols on which operations are performed by a computer, which may be stored and
transmitted in the form of electrical signals and recorded on magnetic, optical or mechanical recording media.

When data become information?
If data is arranged in a systematic way then it gets a structure and become meaningful.
Meaningful or processed data is called information.

Its not difficult to understand that the data needs to be managed in such a way so that it can produce some
meaningful information.
To provide an opportunity way to structure the data, we need to know about Data Structures.

What is Data Structure?
A data structure is a systematic way to organize data so that it can be used efficiently.
Example: Arrays
Instead of creating multiple variables of same types. Why not create an array to store all the values.
Storing String is equivalent of storing a sequence of characters. This requires an array.

Stack data structure is used in implementing redo and undo feature.
Bitmap images are stored as a series of tiny dots called pixels. Arrays are used to store an image as a bitmap.
Here, each pixels is actually a small square that is assigned a color and then arranged in a pattern to form an image.

What is Data Type?
Two important things about data types:
1. Defines a certain domain of values.
2. Defines Operations allowed in those values.

User defined data types:
In contrast to primitive data types, there is a concept of user defined data types.
The operations and values of user defined data types are not specified in the language itself but is specified
by the user.
Example: Structure, unions and enumerations.

Abstract data types:
ADTs are like user defined data types which defines operations and values using functions without specifying what is
there inside the function and how the operations are performed.
Example: Stack ADT
A stack consist of elements of same type arranged in a sequential order.

The program which uses data structure is called a client program.
It has access to the ADT i.e. interface.
The program which implements the data structure is known as the implementation.
Advantage:
Let say, if someone wants to use the stack in the program, then he can simply use push and pop operation without
knowing its implementation.
Also, if in future, the implementation of stacks is changed from array to link list, then client program will work
in the same way without being affected.

A data structure is a organization of the data in a way so that it can be used efficiently.
In other words, it is used to implement an ADT.
For example, in order to implement stack ADT, we can use an array data structure or linked list data structure.
ADT tells us what is to be done and data structure tells us how to do it.
In reality, different implementations of ADT are compared for time and space efficiency. The one best suited
according to the current requirement of the user will be selected.
Advantages:
Efficiency- proper choice of data structure make program efficient in terms of space and time.
Re-usability- one implementation can be used by multiple client programs.
Abstraction- Data structure is specified by an ADT which provides a level of abstraction. The client program
doesn't have to worry about the implementation details.

Linear Data Structures:
A data structure is linear when all the elements are arranged in a linear(sequential) order.

Non Linear Data Structure:
A data structure is non linear when all the elements are not arranged in a linear (sequential) order. There is no
linear arrangements of the elements.

Static Data Structures:
In these types of data structures, the memory is allocated at compile time. Therefore, maximum size is fixed.
Advantage: Fast access
Disadvantage: Slower insertion and deletion

Dynamic Data Structure:
In these types of data structures, the memory is allocated at run time. Therefore, maximum size is flexible.
Advantage: Faster insertion and deletion
Disadvantage: Slower access

///////////////////////////////////////////////////////

Asymptotic Analysis:

Efficiency of data structure is always measured in terms of TIME and SPACE.
An ideal data structure could be the one that takes the least possible time for all its operations and consumes
the least memory space.
If the size of the input is n, then f(n) is a function of n denotes the time complexity.

Big O notation is used to measure the performance of any algorithm by providing the order of growth of the function.
It gives the upper bound on a function by which we can make sure that the function will never grow faster than
this upper bound.

/////////////////////////////////////////////////////////

Void Pointers:

Void pointer is a pointer which has no associated data type with it.
It can point to any data of any data type and can be typecasted to any type.
malloc and calloc functions return void pointer. Due to this reason, they can allocate memory for any type of data.

////////////////////////////////////////////////////////////

Null Pointers:

A NULL pointer is a pointer that does not point to any memory location. It represents an invalid memory location.
When a NULL value is assigned to a pointer, then the pointer is considered as NULL pointer.

/////////////////////////////////////////////////////////////

Dangling Pointers:

A dangling pointer is a pointer which points to some non-existing memory location.

/////////////////////////////////////////////////////////////

Wild Pointers:

Wild pointers are also known as uninitialized pointers.
These pointers usually point to some arbitrary memory location and may cause a program to crash or misbehave.

*/
