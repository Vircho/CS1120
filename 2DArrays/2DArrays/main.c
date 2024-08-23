/*
    * File: main.c
    * Author: Joshua White
    * Title: 2DArrays
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Demonstrate a two-dimensional array
 */

int main(int argc, char** argv)
{
    // calculate and store multiplication tables
    int table[3][5];
    for (int i = 0; i < 3; i++)     // rows 0, 1, 2
    {
        for (int j = 0; j < 5; j++)     // cols 0, 1, 2, 3, 4
        {
            table[i][j] = (i + 1) * (j + 1);        // i starts at 0, we want to start at 1 x 1
        }
    }

    // output multiplication table
    // print header
    printf("     ");
    //printf("\t");     // print a tab = 5 spaces
    for (int i = 1; i <= sizeof(table[0]) / sizeof(table[0][0]); i++)
    {
        printf("%5d", i);
    }
    printf("\n");

    // print multiplication table
    for (int i = 1; i < 3; i++)
    {
        printf("%5d", i);
        for (int j = 1; j <= sizeof(table[0]) / sizeof(table[0][0]); j++)
        {
            printf("%5d", table[i - 1][j - 1]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}