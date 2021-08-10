#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    /*
    Pointers are a sort of data type which simply stores the location on RAM in which
    a variable is stored (memory address).

    You can return the memory address of a variable by putting & in front of variables:

    int age = 30;
    printf("%p", &age); 
    
    %p tells C to use the pointer format (hexadecimal memory address)
    &age returns the pointer to the age variable, therefore the memory address

    Run the below code to see what I mean
    */

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
