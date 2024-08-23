/*
    * File: main.c
    * Author: Joshua White
    * Title: Programming Assignment 4
*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX_HEIGHT 96
#define MIN_HEIGHT 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*
 *
 */

// inform system of extra functions
int getValidInteger(int lowerBound, int upperBound);
float averageIntegerArray(int values[], int count);
int findExtremeInIntegerArray(int minOrMax, int values[], int count);

int main(int argc, char** argv)
{
    int HeightAmount;
    int Heights[100];
    float Average;
    int Min;
    int Max;


    // introduce user
    printf("Hi! This program will prompt you for an amount of heights and the heights of people.\n");
    printf("To start, please put in how many heights you will input. (1-100)\n");
    
    //permanently set heightamount
    HeightAmount = getValidInteger(1, 100);

    //prompt for heights
    printf("Cool, so you want to put in %d heights.\n", HeightAmount);
    printf("Now put in your heights in inches. (1-96)\n");

    // permanently set heights
    for (int i = 0; i < HeightAmount; i++)
    {
        Heights[i] = getValidInteger(1, 96);
    }

    // permanently set average
    Average = averageIntegerArray(Heights, HeightAmount);

    // permanently set min
    Min = findExtremeInIntegerArray(MIN_HEIGHT, Heights, HeightAmount);
    
    //permanently set max
    Max = findExtremeInIntegerArray(MAX_HEIGHT, Heights, HeightAmount);

    // print results
    printf("Nice. Now here is the average of your heights, and the min/max of them.\n");
    printf("Average: %.2f.\n", Average);
    printf("Min: %d.\n", Min);
    printf("Max: %d.\n", Max);

    return (EXIT_SUCCESS);
}

int getValidInteger(int lowerBound, int upperBound)
{
    // scan in user integers
    int UserInt;
    scanf_s("%d", &UserInt);
    while (UserInt < lowerBound || UserInt > upperBound)
    {
        printf("Please input a number in the valid range: %d to %d\n", lowerBound, upperBound);
        scanf_s("%d", &UserInt);
    }
    return UserInt;
}

float averageIntegerArray(int values[], int count)
{
    // calculate average
    float AverageNum;
    float MathNum = 0;
    for (int i = 0; i < count; i++)
    {
        MathNum += values[i];
    }
    AverageNum = MathNum / count;

    return AverageNum;
}

int findExtremeInIntegerArray(int minOrMax, int values[], int count)
{
    // calculate or max
    int TestWall = values[0];
    if (minOrMax == MIN_HEIGHT)
    {
        for (int i = 0; i < count; i++)
        {
            if (values[i] < TestWall)
            {
                TestWall = values[i];
            }
        }
    }
    else if (minOrMax == MAX_HEIGHT)
    {
        for (int i = 0; i < count; i++)
        {
            if (values[i] > TestWall)
            {
                TestWall = values[i];
            }
        }
    }
 
    return TestWall;
}