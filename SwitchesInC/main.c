#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    char grade;

    printf("Enter grade: ");
    scanf(" %c", &grade);
    grade = tolower(grade);

    switch (grade)
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
