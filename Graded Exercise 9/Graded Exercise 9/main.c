/*
    * File: main.c
    * Author: Joshua White
    * Title: Graded Exercise 9
    * Help from: James, Math Center
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Practice using while loops
 */

int main(int argc, char** argv)
{
    int UserNumber1;

    printf("Put in a number, I will tell you the biggest one. To end list, enter -1.\n");
    scanf_s("%d", &UserNumber1);
    int MaxNumber = UserNumber1;
    // Get Number from User
   
    
    
    if (UserNumber1 == (-1))
    {
        printf("No list found");
    }                                           // If the user inputs -1 as their first integer
    else
    {
        while (UserNumber1 >= 0 || UserNumber1 <= -2)
        {
            printf("Enter another number: ");
            scanf_s("%d", &UserNumber1);
            if (UserNumber1 > MaxNumber)
            {
                MaxNumber = UserNumber1;
            }
        }                                           // Replaces MaxNumber anytime a new bigger number gets inputted
        printf("----------------------------------------------------------------------------------------------------------\n");
        printf("The biggest number you put in is: %d", MaxNumber);
        printf("\n");
    }                               // Provides user with the largest number in their list
    return (EXIT_SUCCESS);
}