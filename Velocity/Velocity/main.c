/*
    * File: main.c
    * Author: <Joshua White>
    * Title: Distance
*/

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TIME_TO_MOVE 3

// #define TIME_TO_MOVE 3\

// needed to add vor visual studio
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


/*
 * Calculates velocity vector
 */

int main(int argc, char** argv)
{
    typedef struct Vector Vector;
    struct Vector
    {
        float x;
        float y;
    };

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

    float deltaX = pointTwoX - pointOneX;
    float deltaY = pointTwoY - pointOneY;

    // calculate and print velocity vector
    Vector velocity;
    velocity.x = deltaX / TIME_TO_MOVE;
    velocity.y = deltaY / TIME_TO_MOVE;
    printf("Velocity vector: (%.2f,%.2f\n", velocity.x, velocity.y);

    // calculate distance, speed, and direction between two points
    float distance = sqrtf(powf((deltaX), 2) + powf((deltaY), 2));
    float speed = distance / TIME_TO_MOVE;

    float direction = atan2f(deltaY, deltaX);
    // direction = direction * 180 / M_PI;
    direction *= 180 / M_PI;

    // print out speed and direction between two points

    printf("Speed: %.2f\n", speed);
    printf("Direction: %.2f\n", direction);

    // calculate unit direction vector
    Vector unitDirection;
    unitDirection.x = deltaX;
    unitDirection.y = deltaY;
    float length = sqrtf(powf(unitDirection.x, 2) + powf(unitDirection.y, 2));
    unitDirection.x /= length;
    unitDirection.y /= length;

    // calculate and print velocity vecor
    velocity.x = unitDirection.x * speed;
    velocity.y = unitDirection.y * speed;
    printf("Velocity vector: (%.2f,%.2f)\n", velocity.x, velocity.y);


    return (EXIT_SUCCESS);
}