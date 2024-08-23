/*
    * File: main.c
    * Author: <Joshua White>
    * Title: Graded Exercise 4:Floating-Point Calculations
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Implement basic floating-point calculations
 * Help from: James, Mathematics Excel Center, reminded of % before f
 */

int main(int argc, char** argv)
{
    float originalFarenheit;
    scanf_s("%f", &originalFarenheit);
    float calculatedCelsius = (float)((originalFarenheit - 32) / 9 * 5);
    float calculatedFarenheit = (float)((calculatedCelsius * 9 / 5) + 32);
    printf("%.6f\n", calculatedCelsius);
    printf("%.6f\n", calculatedFarenheit);




    return (EXIT_SUCCESS);
}