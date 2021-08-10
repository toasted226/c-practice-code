#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//There are no classes in C, so these are the best way to store groups of values
struct Student //Structs, very similar to C#
{
    char name[50];
    int age;
    char major[50];
    double gpa;
};

int main() 
{
    struct Student student1; //Create an instance of the Student struct
    student1.age = 22; //Give it values
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim"); //Can't directly assign vales to arrays (char array = string)
    strcpy(student1.major, "Business"); //To assign a value to a char array, use strcopy
    //     var name          value

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");

    printf("%f\n", student1.gpa);
    printf("%s\n", student2.name);
    //Print values from the structs

    return 0;
}
