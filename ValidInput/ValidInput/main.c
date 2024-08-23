/*
    * File: main.c
    * Author: Joshua White
    * Title: ValidInput
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int getValidInteger(char promptString[], char errorString[], int lowerBound, int upperBound);

/*
 * Demonstrates getting valid user input
 */

int main(int argc, char** argv)
{
    // get number of scores to enter
    int n = getValidInteger("How many scores do you want to enter? ",
        "Number of scores must be between 1 and 10!", 1, 10);
    printf("N is %d", n);                   // debug line

    return (EXIT_SUCCESS);
}

/*
 * Gets valid integer input from user
*/
int getValidInteger(char promptString[], char errorString[], int lowerBound, int upperBound)
{
    int input;

    //prompt for and get input
    printf(promptString);
    scanf_s("%d", &input);

    //validate the input
    while (input < lowerBound || input > upperBound)
    {
        // print error message and get new input
        printf("\n");
        printf(errorString);
        printf("\n");
        printf(promptString);
        scanf_s("%d", &input);

    }
    return input;
}