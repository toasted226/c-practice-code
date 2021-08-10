#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This code doesn't actually do anything but print random stuff, just a test
// to practice loops in C
// Though they're pretty much exactly the same as C#

int main() 
{
    //This first checks the condition, then runs the code if the condition is met
    /*
    while(index <= 5) 
    {
        printf("%d\n", index);
        index++;
    }
    */

    //This runs the code immediately, then checks the condition to know if it should loop
    /*
    do 
    {
        printf("%d\n", index);
        index++;
    }while (index < 0);
    */

    int luckyNumbers[] = {1, 2, 5, 7, 9, 13, 42};

    for(int i = 0; i < 7; i++) //For loop, exactly the same as C#
    {
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}