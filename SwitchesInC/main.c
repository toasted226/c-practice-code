#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    char grade;

    printf("Enter grade: "); //Prompt user to enter a grade, like A, B, C, D, F
    scanf(" %c", &grade); //Get input from user, specifying a char (%c), &grade to specify the
    //memory address of it
    grade = tolower(grade); //Get the lowercase char, just in case the user changed cases

    switch (grade) //switch-case statement to check the different possible grades
    {
        case 'a':
            printf("You did amazing!\n");
            break;
        case 'b':
            printf("You did good\n");
            break;
        case 'c':
            printf("You can do better\n");
            break;
        case 'd':
            printf("You just passed\n");
            break;
        case 'f':
            printf("You failed\n");
            break;
        default:
            printf("%c is not a valid grade\n", grade);
            break;
    }

    return 0;
}
