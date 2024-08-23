/*
    * File: main.c
    * Author: Joshua White
    * Title: Arrays
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Demonstrate arrays
 */

int main(int argc, char** argv)
{
    
    int scores[5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        printf("Score %d is %d\n", i + 1, scores[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter score %d (0-100): ", i + 1);
        scanf_s("%d", &scores[i]);
        while (scores[i] < 0 || scores[i] > 100)
        {
            printf("\n");
            printf("Score must be between 0 and 100\n");
            printf("Enter score %d (0-100): ", i + 1);
            scanf_s("%d", &scores[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("score %d is %d\n", i + 1, scores[i]);
    }
    int scores_new[] = { 100, 95, 90, 85, 80 };
    for (int i = 0; i < 5; i++)
    {
        printf("Scores[%d] Address: %p Contents: %d\n", i, &scores_new[i], scores_new[i]);
    }
    return (EXIT_SUCCESS);
}