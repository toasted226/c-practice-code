#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int secretNumber = 5;
    int guessLimit = 3;
    int timesGuessed = 0;
    int guess;

    printf("-- Guess the number! --\n");

    while (guess != secretNumber && timesGuessed < guessLimit) 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess != secretNumber) 
        {
            timesGuessed++;

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

    if(timesGuessed == guessLimit) 
    {
        printf("You lose! The secret number was %d.\n", secretNumber);
    }
    else
    {
        printf("You win!");
    }

    return 0;
}
