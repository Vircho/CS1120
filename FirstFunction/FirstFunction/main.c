/*
    * File: main.c
    * Author: Joshua White
    * Title: FirstFunction
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void printMessage();

/*
 * Demonstrates a simple function
 */

int main(int argc, char** argv)
{
    // print welcome message
    printMessage();

    return (EXIT_SUCCESS);
}

/*
 * Print a message
 */

void printMessage()
{
    printf("Welcome to the amazing first function program!\n");
    printf("\n");
    printf("The welcome message you are reading was output by a function!");

}
