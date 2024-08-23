/*
    * File: main.c
    * Author:
    * Title:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

/*
 *
 */

int main(int argc, char** argv)
{
    char StartResponse;
    printf("Do you wish to start the program?");
    scanf_s("%c", &StartResponse);
    if (tolower(StartResponse) == 'y')
    {
        printf("Starting... Please give a few seconds.\n");
        Sleep(5000);
        printf("Success! Starting now.");
    }
    else
    {
        printf("Not needed for the program");
    }



    return (EXIT_SUCCESS);
}