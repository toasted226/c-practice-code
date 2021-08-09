#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int age = 30;
    int * pAge = &age; // Stores the memory address of the age variable as a pointer

    printf("%p\n", pAge); // Prints out the memory address of age (stored in pAge)
    printf("%d\n", *pAge); // Dereferences the pAge pointer and returns the value in age
    printf("%d\n", *&age); // Dereferences (*) the memory address of age (&)
    
    // * by a pointer tells Uncle C to drive over to age's house and kidnap him
    // * by a pointer tells the computer to go to age's memory address and fetch the stored value
    // & by a normal variable returns the pointer (memory address) of said variable

    // Knowing this, you could dereference and 'pointerify' a variable repeatedly, for fun
    printf("%d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&*&age); //Still prints 30

    return 0;
}
