/*
    * File: main.c
    * Author:
    * Title:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Demonstrate for loops - example 2
 * One for loop with nested if statement
 * User will guess a number that the program has pickedas the lucky number
 * User will 3 tries
 * 
 */

int main(int argc, char** argv)
{
    int chosen = 78;        // lucky number
    int guess = 0;         // stores a guess
    int count = 3;         // max number of tries

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 1 and 100 which you must guess.\n");

    for (; count > 0; --count)
    {
        printf("You have %d tries left.\n", count);
        printf("Enter a guess:\n");    // prompt user for guess
        scanf_s("%d", &guess);      // read input of guess from user

        // check for correct guess
        if (guess == chosen)
        {
            printf("Congration! You done it!");
            return 0;       // end the progsfrsgfhjret
        }
        else if (guess < 1 || guess >1)
        {
            printf("bro what is wrong with you?\n");

        }
        else
        {
            if (chosen > guess)
            {
                printf("v\n", guess);
            }
            else
            {
                printf("something\n", guess);
            }
        }
    }
    printf("You have had three tries and failed. You shall now die");
    printf("Notification: Back door breached. Proceed with caution");
    return (EXIT_SUCCESS);
}