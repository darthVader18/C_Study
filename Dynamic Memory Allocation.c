/*

Static Memory Allocation:
Memory allocated during compile time is called static memory.

Problems faced in static memory allocation:
The memory allocated is fixed and cannot be increased and decreased during run time.
If you are allocating memory for an array during compile time then you have to fix the size at the time of declaration.
Size is fixed and user cannot increase or decrease the size of the array at run time.
If the value stored by the user in the array at run time is less than the size specified then there will be wastage
of memory.
If the valued stored by the user in the array at run time is more than the size specified then the program may crash
or misbehave.

Dynamic Memory Allocation:
The process of allocation memory at the time of execution is called dynamic memory allocation.
Heap is the segment of memory where dynamic memory allocation takes place.
Unlike stack where memory is allocated or deallocated in a defined order, heap is an area of memory where memory is
allocated or deallocated without any order or randomly.
There are certain built-in functions that can help in allocating or deallocating some memory space at run time.
Pointers play an important role in dynamic memory allocation.
allocated memory can only be accessed through pointers.

malloc() :
malloc is a built in function declared in the header file <stdlib.h>
malloc is a short name of "memory allocation" and is used to dynamically allocate a single large block of contagious
memory according to the size specified.
Syntax: (void* )malloc(size_t size)
malloc function simply allocates a memory block according to the size specified in the heap and on success it returns
a pointer pointing to the first byte of the allocated memory else returns NULL.
size_t is defined in <stdlib.h> as unsigned int.
malloc doesn't have an idea of what it is pointing to.
It merely allocates memory requested by the user without knowing the type of data to be stored inside the memory.
The void pointer can be type casted to an appropriate type.
Memory allocated by malloc is initialized with some garbage value.

calloc() :
calloc stand for clear allocation
calloc() function is used to dynamically allocate multiple blocks of memory.
It is different from malloc in two ways:
syntax: void *calloc(size_t, size_t size); //(no. of blocks, size of each block)
Memory allocated by calloc is initialized to zero
Malloc and calloc both returns null when sufficient memory is nit available in th heap.

realloc() :
realloc() function is used to change the size of th memory block without losing the old data.
Syntax: void *realloc(void *ptr, size_t newSize) // (pointer to the previously allocated memory, New size)
On failure realloc returns null.

free() :
frre() function is used to release the dynamically allocated memory heap.
Syntax: void free(ptr)
The memory allocated in heap will not be released automatically after using the memory.The space remains there and
can't be used.
It is the programmer's responsibility to release the memory after use.


*/
