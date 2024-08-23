/*
* File:   main.c
* Author: Joshua White
* Title: Programming Assingment 1: Ready, Aim, Fire!
* Collab Members: Nathaniel Endicott
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

#define G 9.81
#ifndef M_PI
	#define M_PI 3.14159265358979323846f
#endif

float getFloat();

/*
* Calculates the maximum height and horizontal distance
* for a shell given an initial angle and speed
*/
int main(int argc, char** argv)
{
	// input variables
	float theta;
	float speed;

	// get initial angle and convert to radians
	
	// get initial speed

	// calculate initial velocity components

	// calculate final values

	// print max height and horizontal distance


	return (EXIT_SUCCESS);
}

/*
* Gets a floating-point number from the user
*/
float getFloat()
{
	float number;
	scanf("%f", &number);
	return number;
}

