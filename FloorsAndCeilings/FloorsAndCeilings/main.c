/*
    * File: main.c
    * Author: <Joshua White>
    * Title: FloorsAndCeilings
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Calculates floor and ceiling
 * Only works for positive numbers
 */

int main(int argc, char** argv)
{
    float x;

    // prompt for and get float from user
    printf("Enter floating-point number: ");
    scanf_s("%f", &x);
    printf("\n");

    // calculate and print floor
    printf("Floor: %d\n", (int)x);

    // calculate and print ceiling
    printf("Ceiling: %d\n", (int)(x + 0.99));

    // calculate the print floor and ceiling function using math.h
    printf("\n");
    printf("Floor using math.h: %d\n", (int)floorf(x));
    printf("ceiling using math.h: %d\n", (int)ceilf(x));
    printf("\n");

    return (EXIT_SUCCESS);
}