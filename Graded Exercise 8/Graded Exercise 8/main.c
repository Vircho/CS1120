/*
    * File: main.c
    * Author: Joshua White
    * Title:
    * Help from: Mark: Mathematics Center, Feris: Class
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Practice using for loops and nested for loops
 */

int main(int argc, char** argv)
{
    // problem 1
    int even;
    printf("Put in a number greater than zero, I'll tell you all the evens leading up to it: ");
    scanf_s("%d", &even);
    for (int i = 0; i <= even; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            printf("\n");
        }
    }
    // problem 2
    int asterisk;
    printf("Put in a number greater than zero, I'll give you that many *'s: ");
    scanf_s("%d", &asterisk);
    for (int i = 0; i < asterisk; i++)
    {
        printf("*");
    }
    printf("\n");
    // problem 3
    int width;
    int rows;
    printf("Put in two numbers and I'll make a box with your width (1), and rows (2): ");
    scanf_s("%d", &width);
    scanf_s("%d", &rows);
    for (int r = 0; r < rows; r++)
    {
        for (int w = 0; w < width; w++)
        {
            printf("*");
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}