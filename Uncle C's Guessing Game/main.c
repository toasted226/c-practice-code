#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Allows you to use the strcopy function

int main() 
{
    //Initialise variables
    int secretNumber = 5;
    int guessLimit = 3;
    int timesGuessed = 0;
    int guess;

    printf("-- Guess the number! --\n");

    //Repeatedly ask the user to enter a guess, as long as the user got it wrong
    //or guessed more thatn 3 times (specified by guessLimit)
    while (guess != secretNumber && timesGuessed < guessLimit) 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);//%d specifies to get an int from the user for a guess

        if(guess != secretNumber) 
        {
            timesGuessed++;//Increment number of times the user guessed, if incorrect

            //Print a message showing how many guesses the user has left
            if(timesGuessed != (guessLimit - 1)) 
            {
                printf("Incorrect, %d guesses remaining.\n", guessLimit - timesGuessed);
            }
            else
            {
                printf("Incorrect, %d guess remaining.\n", guessLimit - timesGuessed);
            }
        }
    }

    //If the user has run out of guesses, they lose
    if(timesGuessed == guessLimit) 
    {
        printf("You lose! The secret number was %d.\n", secretNumber);
    }
    else
    {
        printf("You win!");//Hell yeah
    }

    return 0;
}
