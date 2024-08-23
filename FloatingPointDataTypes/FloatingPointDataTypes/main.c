/*
* File: main.c
* Author: <Joshua White>
* Title: FloatingPointDataTypes
*/
#include <stdio.h>
#include <stdlib.h>
/*
* Demonstrate floating-point data types
*/
int main(int argc, char** argv)
{
	// collected data
	int hoursDriven = 5;
	int milesDriven = 262;

	// calculate and print miles per hour
	float mph = (float)milesDriven / hoursDriven;
	printf("mph: %.2f\n", mph);


	return (EXIT_SUCCESS);
}