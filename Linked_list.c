/*

//////////////////////////////////

Types of linked list
Single Linked List: Navigation is forward only.
Doubly Linked List: Forward and backward navigation is possible.
Circular Linked List: LAst element is linked to the first element.

Single Linked List:
A single linked list is made up of nodes that consists of two parts.
Data
Link
Nodes are scattered here and there in the memory but they are still connected to with each other.
Linked list is the linked representation of the list.

//////////////////////////////////

Node representation is C:
struct node {
    int data;
    struct node *link;
};

In general:
struct node {
    data_type member1;
    data_type member2;
            .
            .
            .
    struct node *list;
};

Creating a Node in C:
#include <stdio.h>
#include <stdlib.h> //this library is required to call the malloc function

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
}

Output: 45

//////////////////////////////////

Creating a Single Linked List:
#include <stdio.h>
#include <stdlib.h> //this library is required to call the malloc function

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    return 0;
}

How to add third node to the list:
Method 1:
#include <stdio.h>
#include <stdlib.h> //this library is required to call the malloc function

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
}

Output: 45

//////////////////////////////////

Creating a Single Linked List:
#include <stdio.h>
#include <stdlib.h> //this library is required to call the malloc function

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL;
    current->link = current2;

    return 0;
}
If we have to make 20 nodes we have to create 20 different pointer and that is a wastage of memory.

Method 2:
#include <stdio.h>
#include <stdlib.h> //this library is required to call the malloc function

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    return 0;
}
//////////////////////////////////

Traversing a Single Linked List (Counting the Nodes):

Traversing a single linked list means visiting each node of a single linked list until the end node is reached.
Program to count the no. of nodes:
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    // We have to create a single linked list
    // We already know the code to create it..... we can also take the list created above as a reference
    count_of_nodes(head); // imagine head is a pointer to the first node of the linked list
}

void count_of_nodes(struct node *head) {
    int count = 0;
    if(head == NULL)
        printf("Linked List is empty");
    struct node *ptr = NUll;
    ptr = head;
    while(ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
}

//////////////////////////////////

Traversing a Single Linked List (Printing the Data):

Program to print the data of the linked list:
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    // We have to create a single linked list
    // We already know the code to create it..... we can also take the list created above as a reference
    print_data(head); // imagine head is a pointer to the first node of the linked list
}

void print_data(struct node *head) {
    if(head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
}

//////////////////////////////////

Traversing the List (Linked List vs Arrays):

Linked List:
Time complexity of counting the elements - O(n)
Time complexity of printing the data - O(n)

Array:
Time complexity of counting the elements - O(1)
Time complexity of printing the data - O(n)

Array has an advantage over linked list when counting the elements.

//////////////////////////////////

Single Linked List (Inserting a Node at the End):

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    add_at_end(head, 67);
}

void add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL) {  //code for traversing the list
        ptr = ptr->link;
    }
    ptr->link = temp;
}

Time complexity: 0(n)

//////////////////////////////////

Insertion at the End(Linked List vs the Array):

Linked List:

Optimal code:
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);  //ptr contains the address of the last node of the list
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);

    ptr = head;

    while(ptr->link != NULL) {  //code for traversing the list
        ptr = ptr->link;
    }
    return 0;
}

struct node* add_at_end(struct node *ptr, int data) {
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

Output: 45 98 3 68

Time complexity: 0(1)

Array:
There will be two different cases:
Array is not full
Array is full

Case 1: When the array is not full

int add_at_end(int a[], int freePos, int data) {
    a[freaPos] = data;
    freePos++;
    return freePos;
}

int main() {
    int a[10];
    int i, n, freePos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d ", &a[i]);
    }
    freePos = n;    //Maintaining the index of the empty slot in freePos variable
    freePos = add_at_end(a, freePos, 65);

    for(i=0; i<freePos; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

Output: 1 2 3 65

Time complexity: 0(1)

Case 2: When the array is full

int add_at_end(int a[], int b[], int n, int freePos, int data) {
    int i;
    for(i=0; i<n; i++) {
        b[i] = a[i];
    }
    b[freaPos] = data;
    freePos++;
    return freePos;
}

int main() {
    int a[3];
    int i, n, freePos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d ", &a[i]);
    }

    int size = sizeof(a)/sizeof(a[0]);
    freePos = n;    //Maintaining the index of the empty slot in freePos variable
    if(n==size) {   //indicates array is full
        int b[size+2];
        freePos = add_at_end(a, freePos, 65);
        for(i=0; i<freePos; i++) {
            printf("%d ", b[i]);
        }
        return 0;
    }
}

Output: 1 2 3 65

Time complexity: 0(n)



Linked List:
With traversal: 0(n)
Without traversal: 0(1)

Array:
When array is full: 0(n)
When array is not full: 0(1)

Linked list has an advantage over array because we can't guarantee when the array is full and when array is not full,
we can always control the traversal procedure of linked list.
//////////////////////////////////

Single Linked List (Inserting a Node at the Beginning):

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node 8link;
};

struct node* add_beg(struct node* head, int d) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *head = malloc(sizeof(struct node));
    head->data = 98;
    head->link = NULL;

    head->link = ptr;

    int data = 3;

    head = add_beg(head, data);     //Here we are passing two parameters. Here this head and data are pass by value
    ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}

Output: 2 45 98

//////////////////////////////////

Inserting the Data at the Beginning of Single Linked Lists (Possible Mistake):

The parameters are passed by value. We can make a mistake thinking the head is passed by reference.
Why is this mistake possible?
Because this is the pointer as we are passing the address of something we may think of this that we are passing the
address head which is not true, we are passing the address of the first node of the list and not the address of the
head. Passing he head means we are passing the contents of head. Here we know that whenever we pass a variable we
know that we are passing the content of that variable, here you can see we are passing data which means we are passing
the value contained in that data.



//////////////////////////////////

Inserting the Data at the Beginning of Single Linked List (2nd Method):



//////////////////////////////////

Inserting the Data at the Beginning (Singly Linked List vs. Array):



//////////////////////////////////

Single Linked List (Inserting a Node at a Certain Position):



//////////////////////////////////

Insertion at a Certain Position (Singly Linked List vs. Arrays):



//////////////////////////////////

Single Linked List (Deleting the First Node):



//////////////////////////////////

Single Linked List (Deleting the Last Node):



//////////////////////////////////

Single Linked List (Deleting the Last Node using Single Pointer):



//////////////////////////////////

Deletion at the End (Singly Linked List vs. Array):



//////////////////////////////////

Deletion at the Beginning (Single Linked List vs. Array):



//////////////////////////////////

Single Linked List (Deleting the Node at a Particular Position):



//////////////////////////////////

Deleting the Entire Single Linked List:



//////////////////////////////////

Reverse a Single Linked List:


//////////////////////////////////
*/
