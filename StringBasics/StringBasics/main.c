/*
    * File: main.c
    * Author:
    * Title: StringBasics
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

/*
 * Demonstrates string input
 */

int main(int argc, char** argv)
{
    char data[100];

    // read in data from user
    printf("Enter x and y (no spaces, comma-seperated): ");
    fgets(data, sizeof(data), stdin);

        // print out data
    printf("Data input: %s\n", data);


    return (EXIT_SUCCESS);
}