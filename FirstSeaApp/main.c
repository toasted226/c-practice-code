#include <stdio.h>
#include <stdlib.h>

double Add(double num1, double num2);
double Subtract(double num1, double num2);
double Multiply(double num1, double num2);
double Divide(double num1, double num2);

int main()
{
    double num1;
    double num2;
    char op;
    double answer;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if (op == '+') 
    {
        answer = Add(num1, num2);
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
