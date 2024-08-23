/*
 * File:   main.c
 * Author: <your name here>
 * Title: Programming Assignment 5
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#define MAX_LENGTH 100

typedef struct Vector Vector;
struct Vector
{
	float x;
	float y;
	float z;
};

typedef struct MoveInfo MoveInfo;
struct MoveInfo
{
	Vector direction;
	float duration;
};

void printFileContents(char* fileName, int numLines);
int countInputFileLines(char inputFileName[]);
void getPointFromString(char string[], Vector* point);

/*
  *  
 */
int main(int argc, char** argv)
{
	printf("Hello. I will calculate velocity and duration using files. No action is required on your part.\n");
	printf("Please give me a bit...");
	Sleep(5000);


	//printFileContents(MOVE_INFO_FILE_NAME, numPoints - 1);

	return(EXIT_SUCCESS);
}

int countInputFileLines(char inputFileName[])
{
	// Count how many lines are in the file.

	char currentLine[MAX_LENGTH];
	int numLines = 0;
	
	FILE* inputFile = fopen("C:\Users\jlw31\Desktop\School\Programming Assignment 5\Programming Assignment 5\points.txt", "r");
	if (inputFile == NULL)
	{
		printf("File open failed\n");
		return (EXIT_FAILURE);
	}

	while (!feof(inputFile))
	{
		fgets(currentLine, MAX_LENGTH, inputFile);
		numLines++;
	}

}

void getPointFromString(char string[], Vector* point)
{

}










//--------------------------------------------------------------------------------------------------------------------------------------------//
/*
* Prints the first numLines of the given file
*/
void printFileContents(char* fileName, int numLines)
{
	char line[100];

	// open file for reading
	FILE* inputFile = fopen(fileName, "r");
	if (inputFile == NULL)
	{
		printf("File open failed in printFileContents\n");
		return (EXIT_FAILURE);
	}

	// print lines in file
	for (int i = 0; i < numLines; i++)
	{
		fgets(line, sizeof(line), inputFile);
		printf(line);
	}

	// close file
	fclose(inputFile);
}