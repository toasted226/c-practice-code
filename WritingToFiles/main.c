#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char line[255]; // A string, maximum 255 characters
    FILE * fpointer = fopen("employees.txt", "r"); // Stores memory address of text file

    fgets(line, 255, fpointer); //Gets the first line
    fgets(line, 255, fpointer); //Running for the second time, it gets the second line
    printf("%s", line);

    fclose(fpointer);

    return 0;
}