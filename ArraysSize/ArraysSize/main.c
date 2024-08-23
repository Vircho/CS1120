/*
    * File: main.c
    * Author: Joshua White
    * Title: Arrays
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Demonstrate array size
 */

int main(int argc, char** argv)
{
    int scores[5];
    // declare array and demonstrate size calculations
    printf("\n");

    printf("total array size %lu\n", sizeof(scores));   // display how manyy bytes in array
    printf("Array element size: %lu\n", sizeof(scores[0]));    // display how many bytes each element is
    printf("Number of array elements: %lu\n", sizeof(scores) / sizeof(scores[9]));
    printf("\n");

    // read in scores
    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        // prompt for and get valid test score
        printf("Enter score %d (0-100): ", i + 1);
        scanf_s("%d", &scores[i]);
        while (scores[i] < 0 || scores[i] > 100)
        {
            printf("\n");
            printf("score must be between 0 and 100\n");
            printf("Enter score %d (0-100): ", i + 1);
            scanf_s("%d", &scores[i]);
        }
    }
    // print test scores
    printf("\n");
    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        printf("score %d is %d\n", i + 1, scores[i]);
    }
    return (EXIT_SUCCESS);
}