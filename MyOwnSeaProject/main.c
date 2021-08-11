#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() 
{
    //Ask how many students there are
    printf("Number of students: ");
    scanf("%d", &numOfStudents);

    //Initialise student names
    char students[numOfStudents][20];
    size_t n_students = NELEMS(students);
    
    for (int i = 0; i < n_students; i++)
    {
        char name[20];
        printf("Enter the name of student #%d: ", i + 1);
        scanf("%s", name);
        strcpy(students[i], name);
    }

    printf("Students:\n");
    for (int i = 0; i < n_students; i++)
    {
        printf("%s\n", students[i]);
    }
}