/*
    * File: main.c
    * Author: <Joshua White>
    * Title: Distance
*/

#define _CRT_SECURE_NO_WARNINGS
#define TIME_TO_MOVE 3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define TIME_TO_MOVE 3\

// needed to add vor visual studio
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


/*
 * Calculates speed and direction
 */

int main(int argc, char** argv)
{
    

    // declare variables for user-input of the x and y points
    float pointOneX;
    float pointOneY;
    float pointTwoX;
    float pointTwoY;

    // prompt for and get user input
    printf("Enter x for first point: ");
    scanf_s("%f", &pointOneX);
    printf("Enter y for first point: ");
    scanf_s("%f", &pointOneY);
    printf("Enter x for first point: ");
    scanf_s("%f", &pointTwoX);
    printf("Enter y for first point: ");
    scanf_s("%f", &pointTwoY);
    printf("\n");
   
    // calculate distance, speed, and direction between two points
    float deltaX = pointTwoX - pointOneX;
    float deltaY = pointTwoY - pointOneY;

    float distance = sqrtf(powf((deltaX), 2) + powf((deltaY), 2));
    float speed = distance / TIME_TO_MOVE;

    float direction = atan2f(deltaY, deltaX);
    // direction = direction * 180 / M_PI;
    direction *= 180 / M_PI;

    // print out speed and direction between two points
   
    printf("Speed: %.2f\n", speed);
    printf("Direction: %.2f\n", direction);
    


    return (EXIT_SUCCESS);
}