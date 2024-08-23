/*
* File:   main.c
* Author: Joshua White
* Title: Graded Exercise 5: User-Defined Data Types
*/

#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>

float getFloat();

/*
* Define a user-defined data type, declare variables of that data type, and display output of operations using those variables
* Help from: James, Mathematics Center, Cleaning of variables|Formatting of output
*/
int main(int argc, char** argv)
{
	// Problem 1: Define type for GPS coordinates
	typedef struct coordanites coordanites;

	struct coordanites
	{
		float Lat;
		float Long;
	};








	// Problem 2: Declare and initialize variables
	coordanites uccs = { 38.8936471, -104.8003126 };
	coordanites yourCoord;
	scanf_s("%f", &yourCoord.Lat);
	scanf_s("%f", &yourCoord.Long);

	coordanites difference = { (yourCoord.Lat - uccs.Lat), (yourCoord.Long - uccs.Long) };

	// Problem 3: Print latitude and longitude differences
	printf("%.6f", (difference.Lat));
	printf(",%.6f\n", (difference.Long));

	return (EXIT_SUCCESS);
}

/*
* Gets a floating-point number from the user
*/
float getFloat()
{
	float number;
	scanf_s("%f", &number);
	return number;
}