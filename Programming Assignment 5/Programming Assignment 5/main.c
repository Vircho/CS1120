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
void getMoveInfoBetweenPoints(MoveInfo* moveInfo,
	Vector firstPoint, Vector secondPoint);
void writeMoveInfoToFile(MoveInfo moveInfo[], int count);

/*
  * 
 */
int main(int argc, char** argv)
{
	// declare variables
	int numLines;
	int points[3];



	// introduce user and make them think the computer is thinking ;)
	printf("Hello. I will calculate velocity and duration using files. No action is required on your part.\n");
	printf("Please give me a bit...");
	Sleep(1);

	int vectorSize = 3;
	Vector vectorArr[10];
	MoveInfo moveInfo[10];
	
	char line[100];
	int index = 0;

	FILE* inputFile = fopen("points.txt", "r");
	if (inputFile != NULL)
	{
		while (fgets(line, 100, inputFile))
		{
			getPointFromString(line, &vectorArr[index]);
			index++;
		}
	}
	else
	{
		printf("File open unsuccessful");
	}
	for (int i = 0; i < vectorSize; i++)
	{
		getmoveInfoBetweenPoints(&moveInfo[i], vectorArr[i], vectorArr[i + 1]);
	}
	
	
	
	
	//printFileContents(MOVE_INFO_FILE_NAME, numPoints - 1);
	return(EXIT_SUCCESS);
}

int countInputFileLines(char inputFileName[])
{
	// Count how many lines are in the file.

	char currentLine[MAX_LENGTH];
	int numLines = 0;

	FILE* inputFile = fopen("points.txt", "r");
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

	return numLines;
}

void getPointFromString(char string[], Vector* point)
{
	int commaIndex = 0;
	char* result = NULL;
	result = strchr(string, ',');
	char* stringStart = &string[0];
	commaIndex = result - stringStart;

	// read in x
	char* numberString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(numberString, string, commaIndex);
	numberString[commaIndex] = '\0';
	point->x = atoi(numberString);

	// find second comma index
	string = &string[0] + commaIndex + 1;
	result = strchr(string, ',');
	stringStart = &string[0];
	commaIndex = result - stringStart;

	// read in y
	char* percentString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(percentString, string, commaIndex);
	percentString[commaIndex] = '\0';
	point->y = atof(percentString);

	// read in z
	point->z = string[commaIndex + 1];

	// free memory
	free(numberString);
	numberString = NULL;
	free(percentString);
	percentString = NULL;
}

void getMoveInfoBetweenPoints(MoveInfo* moveInfo,
	Vector firstPoint, Vector secondPoint)
{
	float deltaX = secondPoint.x - firstPoint.x;
	float deltaY = secondPoint.y - firstPoint.y;
	float deltaZ = secondPoint.z - firstPoint.z;

	moveInfo->direction.x = deltaX;
	moveInfo->direction.y = deltaY;
	moveInfo->direction.z = deltaZ;

	float time = sqrt(powf(deltaX, 2) + powf(deltaY, 2) + powf(deltaZ, 2));

	moveInfo->duration = time;

	deltaX /= time;
	deltaY /= time;
	deltaZ /= time;
}

void writeMoveInfoToFile(MoveInfo moveInfo[], int count)
{
	FILE* outputFile;
	outputFile = fopen("point.txt", "w");

	if (outputFile == NULL)
	{
		printf("File open failed\n");
		printf("\n");
	}
	for (int i = 0; i < count; i++)
	{
		fprintf(outputFile, "%.4f, %.4f, %.4f, %.4f\n", moveInfo[i]);

		for (int i = 0; i < count; i++)
		{
			fprintf(outputFile, "%.4f,", moveInfo[i].direction.x);
			fprintf(outputFile, "%.4f,", moveInfo[i].direction.y);
			fprintf(outputFile, "%.4f,", moveInfo[i].direction.z);
			fprintf(outputFile, "%.4f,\n", moveInfo[i].duration);
		}
		fclose(outputFile);
	}



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