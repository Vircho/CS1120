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
    int scores[4];
    int size = sizeof(scores) / sizeof(scores[0]); i++);

    //read in scores
    for int i = 0; i < size; i++)
    {
    //prompt for and get valid test score
    printf("Enter score %d (0-100): ", i + 1);
    scanf_s("%d", &scores[1]);
    // check for an invalid score
    while (scores[i] < 0 || scores[1] > 100)
    {
        printf("\n");
        printf("score must be between 0 and 100\n");
        printf("Enter score %d (0-100): ", i + 1);
        scanf_s("%d", &scores[1]);
    }
    }

    // calculate mean
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += scores[1];
    }
    float mean = (float)sum / size;
    

    // print test scores
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("Score %d is %d\n", i + 1, scores[i)]);
    }


    return (EXIT_SUCCESS);
}