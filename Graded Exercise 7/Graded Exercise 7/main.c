/*
    * File: main.c
    * Author: Joshua White
    * Title: Graded Exercise 7: Switch Statements
*/

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Practice using the switch statement
 */

int main(int argc, char** argv)
{
    char selection;
    printf("**************\n");
    printf("N  New Game\n");
    printf("L  Load Game\n");
    printf("O  Options\n");
    printf("Q  Quit\n");
    printf("**************\n");
    scanf_s("%c", &selection);
    selection = tolower(selection);
    switch (selection)
    {
        case 'n':
            printf("Starting...");
            break;
        case 'l':
            printf("Loading...");
            break;
        case 'o':
            printf("Options:");
            break;
        case 'q':
            printf("Quitting...");
            break;
        default:
            printf("Invalid!");
            break;

            
    }
    



    return (EXIT_SUCCESS);
}