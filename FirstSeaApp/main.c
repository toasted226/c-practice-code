#include <stdio.h>
#include <stdlib.h>


//Declare methods before they are called
double Add(double num1, double num2);
double Subtract(double num1, double num2);
double Multiply(double num1, double num2);
double Divide(double num1, double num2);

int main()
{
    //This is a basic calculator in C.

    double num1; //Declare initial variables
    double num2;
    char op; //operator character
    double answer;

    printf("Enter the first number: "); //print to the screen
    scanf("%lf", &num1);

    /*
    In C, you have to declare the format of the variable when printing it out
    or doing a scanf (to get user input)
    %d = int
    %f = double/float
    %c = char
    %s = string (char array)

    Printing 'Hello, Keagan!' to the screen would look as follows:

    char name[] = "Keagan";
    printf("Hello, %s!", name);

    The %s takes the place of the variable, in this case 'name'.
    The actual value to be put in %s is given after a comma, in order.

    Example:
    int age = 19;
    char name[] = "Keagan";

    printf("My name is %s and I am %d years old.", name, age);
    */

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &op); // Get the operator the user chooses

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    //Check which operator the user chose
    if (op == '+') 
    {
        answer = Add(num1, num2); //Adds two numbers
    } 
    else if (op == '-') 
    {
        answer = Subtract(num1, num2);
    }
    else if (op == '*') 
    {
        answer = Multiply(num1, num2);
    }
    else if (op == '/')
    {
        answer = Divide(num1, num2);
    }
    else
    {
        printf("%c is not a valid operator.\n", op);
    }
    
    printf("Answer: %f\n", answer);

    return 0;
}


//Because this function is written below where it is called, it needs to be declared beforehand
//Look at the top to see the following 4 methods declared
double Add(double num1, double num2) 
{
    return num1 + num2;
}

double Subtract(double num1, double num2) 
{
    return num1 - num2;
}

double Multiply(double num1, double num2) 
{
    return num1 * num2;
}

double Divide(double num1, double num2) 
{
    return num1 / num2;
}
