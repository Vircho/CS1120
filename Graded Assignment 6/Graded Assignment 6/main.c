/*
    * File: main.c
    * Author: Joshua White
    * Title: Graded Assignment 6: If Statements
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Practice using various forms of the if statement
 */

int main(int argc, char** argv)
{
    // set up variables
    int integer;
    char userchoice;


    // prompt user for integer
    printf("Please input a number:");
    scanf_s("%d", &integer);
    
    if (integer >= 0)
    {
        printf("Positive\n");
        printf("\n");
    }
    else if (integer < 0)
    {
        printf("Negative\n");
        printf("\n");
    }
    // attempted to make an else statment for if user didn't input a number, but it just skips to invalid choice
    // in the menu section. Still works as intended, but would love to learn how to set up what I was trying to do.
 
    // present menu choices
    printf("**************\n");
    printf("Menu:\n");
    printf("N New Game\n");
    printf("L Load Game\n");
    printf("O Options\n");
    printf("Q Quit\n");
    printf("**************\n");
    scanf_s(" %c", &userchoice);
    userchoice = tolower(userchoice);
    if (userchoice == 'n')
    {
        printf("Starting...");
        printf("\n");
    }
    else if (userchoice == 'l')
    {
        printf("Loading...");
        printf("\n");
    }
    else if (userchoice == 'o')
    {
        printf("Options:");
        printf("\n");
    }
    else if (userchoice == 'q')
    {
        printf("Quitting...");
        printf("\n");
    }
    else
    {
        printf("Invalid Choice!");
        printf("\n");
    }
    return (EXIT_SUCCESS);
}