/*
    * File: main.c
    * Author: Joshua White
    * Title: IFStatement
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 * Demonstrates if statements
 */

int main(int argc, char** argv)
{
    char answer;

    // prompt for and get answer
    printf("Do you like pizza (y or n)?");
    scanf_s("%c", &answer);
    answer = tolower(answer);  // tolower converts to lowercase

    // print appropriate message based on user input
    if (answer == 'y')
    {
        printf("That's great! I like pizza too.\n");
    }
    else if (answer == 'n')
    {
        printf("That's okay, I'll eat enough for both of us!\n");
    }
    else
    {
        printf("I said y or n!!!\n");
        
    }

    return (EXIT_SUCCESS);
}