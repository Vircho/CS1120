/*
    * File: main.c
    * Author: Joshua White
    * Title: ChangeParameters
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swapValues(int* firstValue, int* secondValue);

/*
 * Demonstrates geeting valid user input
 */
int main(int argc, char** argv)
{
    int value1 = 5;
    int value2 = 10;

    printf("Before swap\n");
    printf("-----------\n");
    printf("Value1: %d\n", value1);
    printf("Value2: %d\n", value2);

    swapValues(&value1, &value2);

    printf("\n");
    printf("Before swap\n");
    printf("-----------\n");
    printf("Value1: %d\n", value1);
    printf("Value2: %d\n", value2);

    return (EXIT_SUCCESS);
}

void swapValues(int* firstValue, int* secondValue)
{
    int temp;
    temp = *secondValue;
    *secondValue = *firstValue;
    *firstValue = temp;
}