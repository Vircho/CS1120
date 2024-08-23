/*
    * File: main.c
    * Author: Joshua White
    * Title: Tic-Tac-Toe
*/

//defines and includes
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <windows.h>

/*
 * Code a working version of Tic-Tac-Toe
 */

// functions
bool rulesMenu();



int main(int argc, char** argv)
{
    char userMenuResponse;
    bool inMainMenu = true;


    while (inMainMenu == true)
    {
        printf("TIC-TAC-TOE");
        printf("\n");
        printf("Play Against The Computer:[P]");
        printf("\n");
        printf("Play Against Another Player:[M]");
        printf("\n");
        printf("Rules:[R]");
        printf("\n");
        scanf_s("%c", &userMenuResponse);
        if (tolower(userMenuResponse) == 'p')
        {
            printf("Will make later");
        }
        else if (tolower(userMenuResponse) == 'm')
        {
            printf("Will Make Later");
        }
        else if (tolower(userMenuResponse) == 'r')
        {
            inMainMenu = rulesMenu;
        }
        else if (tolower(userMenuResponse) != 'p', 'm', 'r')
        {
            printf("Invalid Response!");
            Sleep(1000);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
    }
 return (EXIT_SUCCESS);
}

bool rulesMenu()
{
    bool doneReading = false;
    char exit;

    while (doneReading == false)
    {
        printf("HOW TO PLAY");
        printf("\n");
        printf("The board is split into 9 squares, which will be shown on your screen.");
        printf("\n");
        printf("Before the game starts, you will choose either O or X to use");
        printf("\n");
        printf("When the game starts, you will type in numbers that correspond to each square.");
        printf("\n");
        printf("Which square is which number will be shown, but depending on your keyboard, the number pad",
            "on the right is a good way to remember.");
        printf("\n");
        printf("If you play with another player, you will take turns, while the computer will choose a random valid",
            "square when it has it's turn.");
        printf("\n");
        printf("To win, you must take 3 squares in a row, horizontally, vertically, or diagonally.");
        printf("\n");
        printf("Once you're done reading the rules, press 'E' to exit back to the main manu");
        printf("\n");

        scanf_s("%c", &exit);
        if (tolower(exit) == 'e')
        {
            doneReading = true;
        }
        else
        {
            printf("\n");
        }
    }
    

    return doneReading;
}


