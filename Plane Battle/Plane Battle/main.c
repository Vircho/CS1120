/*
    * File: main.c
    * Author: Joshua White
    * Title: Battle Plane
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Create a simple shooting game
 */

int main(int argc, char** argv)
{
    // introduce players
    char StartGame;
    int 
    printf("-Battle Plane-");
    printf("\n");
    printf("'-': Plane");
    printf("\n");
    printf("'*': Star");
    printf("\n");
    printf("How to play:");
    printf("\n");
    printf("The screen is set in a grid formation. (A1, J10, etc.)\n");
    printf("Plane(s) will appear randomly, you must type where they are in the grid to shoot them down.\n");
    printf("The grid letters and numbers will not be shown, you must be able to guess what they would be based off of the position\nof the plane(s) and stars.\n");
    printf("To start, press any button, and then enter. The program will break if more than one is pressed.");
    printf("\n");
    scanf("%c", &StartGame);

    // choose inital positions




    return (EXIT_SUCCESS);
}