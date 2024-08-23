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



/*
* Calculates the maximum height and horizontal distance
* for a shell given an initial angle and speed
*/
int main(int argc, char** argv)
{
	// input variables
	float theta;
	float speed;
	float vox;
	float voy;
	float t;
	float h;
	float dx;
	// get initial angle and convert to radians
	printf("Hello user! I will help you calculate the distance your shell will travel. Please input the angle:\n");
	scanf_s("%f", &theta);
	theta = (theta * (M_PI / 180));
	// get initial speed
	printf("Now input the speed it travels:\n");
	scanf_s("%f", &speed);
	printf("\n");

	// calculate initial velocity components
	vox = (speed * (cosf(theta)));
	voy = (speed * (sinf(theta)));
	t = (voy / G);
	// calculate final values
	h = (voy * voy) / (2 * G);
	dx = (vox * (2 * t));
	// print max height and horizontal distance
	printf("%.4f", h);
	printf(",");
	printf("%.4f", dx);
	printf("\n");
	return (EXIT_SUCCESS);
}

/*
* Gets a floating-point number from the user
* getFloat was unused because it caused errors even when no extra code was there
*/
