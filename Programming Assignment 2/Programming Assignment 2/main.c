/*
	* File: main.c
	* Author: Joshua White
	* Title: Programming Assignment 2
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

int main(int argc, char** argv)
{


	// Let the user know what's going down
	printf("Hi! Put in a list of numbers. I will tell you how many you inputted, and the mean of your numbers.\n");
	printf("Just know that negative numbers do not count. When you want to end list, type -1.\n");
	
	// Set up variables
	float List;
	float ListLength = 0;
	float Mean;
	float List2 = 0;
	
// Calculate numbers as they are put in
	scanf_s("%f", &List);
	while (List != -1)
	{
		if (List >= 0)
		{
			ListLength = ListLength + 1;
			List2 = List2 + List;
			Mean = List2 / ListLength;
		}
		scanf_s("%f", &List);
		
		// Output the calculated values
		if (List == -1)
		{
			printf("-----------------------------------------\n");
			printf("You put in %.0f Numbers.\n", ListLength);
			printf("Your mean is %.2f.", Mean);
		}
	}
	return (EXIT_SUCCESS);
}