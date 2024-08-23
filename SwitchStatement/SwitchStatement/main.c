/*
    * File: main.c
    * Author: Joshua White
    * Title: SwitchStatement
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 * Demonstrates switch statements
 */

int main(int argc, char** argv)
{
    char answer;

    // prompt for and get answer
    printf("Do you like pizza (y or n)?");
    scanf("%c", &answer);
    answer = tolower(answer);  // tolower - converts input to lowercase

    // print appropriate message based on user input
    // if (answer == 'y' || answer = 'Y')
    printf("\n");
    switch (answer)
    {
        case 'y':
       //   case 'Y':
        case 'p':
            printf("That's great! I like pizza too.\n");
            break;
        case 'n':
            printf("That's okay, I'll eat enough for both of us!\n");
            break;
        default:
            printf("I said y or n!!!\n");
            break;
    }
   

    return (EXIT_SUCCESS);
}