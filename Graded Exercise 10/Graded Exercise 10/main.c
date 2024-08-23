/*
    * File: main.c
    * Author: Joshua White
    * Title: Graded Exercise 10: Min and Max
    * Help From: Faris--class; James--math center
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Practice processing arrays
 */

int main(int argc, char** argv)
{
    // Get amount of arrays
    int n = 0;
    printf("Put in numbers, and I'll tell you what the largest and smallest numbers are.\n");
    printf("How many numbers will you use? (must be greater than 0).\n");
    do
    {
        scanf_s("%d", &n);
    } 
    while (n <= 0);
    int* Score = malloc(n * sizeof(int));
    //Get scores from user
    printf("Now put in your numbers. (must be 0-100).\n");
    for (int i = 0; i < n; i++)
    {
        int UserScoreNotArray = 0;
        do
        {
            scanf_s("%d", &UserScoreNotArray);
            Score[i] = UserScoreNotArray;
        } while (UserScoreNotArray < 0 || UserScoreNotArray > 100);
     
    }
    //Initiallize necessary variables
    int MaxScore = Score[0];
    int MinScore = Score[0];
   //Calculate min & max score
        for (int i = 0; i < n; i++)
        {
            if (Score[i] < MinScore)
            {
                MinScore = Score[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (Score[i] > MaxScore)
            {
                MaxScore = Score[i];
            }
        }
        //Print min & max score
    printf("Your smallest number is: %d", MinScore);
    printf("\n");
    printf("And your largest number is: %d", MaxScore);
    printf("\n");

    return (EXIT_SUCCESS);
}