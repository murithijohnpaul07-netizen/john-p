/*
Name:john Paul murithi 
Reg No:CT101/G/26544/25
Description: Guessing_game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 20 (inclusive)
    secretNumber = rand() % 20 + 1;

    printf("   NUMBER GUESSING GAME \n");
    printf("\nI'm thinking of a number between 1 and 20.\n");

    // Start guessing loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

         if (guess > secretNumber) 
           {printf("Too high! Try again.\n");}else 
         if (guess < secretNumber) 
            {printf("Too low! Try again.\n");}else 
        {printf("Congratulations! You guessed the number!\n");
         printf("\nTotal attempts: %d\n", attempts);}

       }while (guess != secretNumber);

    return 0;
}