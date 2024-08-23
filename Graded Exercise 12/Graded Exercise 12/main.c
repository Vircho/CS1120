/*
* File:   main.c
* Author: Dr. T
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*
* Graded Exercise 11
*/

// show computer that these functions exist
char getValidShiftDirection();
int getValidShiftAmount();
void getValidMessage(char* message, int messageSize);
char* encryptMessage(char* message, int messageSize,
	bool leftShift, int shiftAmount);
char* decryptMessage(char* message, int messageSize,
	bool leftShift, int shiftAmount);

int main(int argc, char** argv)
{
	// define variables
	char shiftResponse;
	bool leftShift = true;
	int shiftAmount;

	// get left or right shift
	shiftResponse = getValidShiftDirection();
	leftShift = shiftResponse == 'l';

	// get valid shift amount
	shiftAmount = getValidShiftAmount();

	// get message to encrypt
	char originalMessage[100];
	getValidMessage(&originalMessage,
		sizeof(originalMessage));
	int originalMessageLength =
		strnlen(originalMessage, sizeof(originalMessage));

	// build encrypted string (make sure it's null-terminated)
	// Note that we have to use pointers here to dynamically
	// allocate the encryptedMessage array in Visual Studio
	char* encryptedMessage = encryptMessage(
		originalMessage, originalMessageLength,
		leftShift, shiftAmount);
	encryptedMessage[originalMessageLength] = '\0';

	// build decrypted string (make sure it's null-terminated)
	// Note that we have to use pointers here to dynamically
	// allocate the decryptedMessage array in Visual Studio
	int encryptedMessageLength = originalMessageLength;
	char* decryptedMessage = encryptMessage(encryptedMessage, encryptedMessageLength,
		leftShift, -shiftAmount);

	// print messages
	printf("%s\n", originalMessage);
	printf("%s\n", encryptedMessage);
	printf("%s\n", decryptedMessage);

	// free memory because we used pointers
	// this is just good pointer use; you don't need it for this exercise
	free(encryptedMessage);
	encryptedMessage = NULL;
	free(decryptedMessage);
	decryptedMessage = NULL;

	return (EXIT_SUCCESS);
}

char getValidShiftDirection()
{
	char shiftResponse;
	bool leftShift = true;
	scanf("%c", &shiftResponse);
	getchar();
	shiftResponse = tolower(shiftResponse);
	while (shiftResponse != 'l' && shiftResponse != 'r')
	{
		scanf("%c", &shiftResponse);
		getchar();
		shiftResponse = tolower(shiftResponse);
	}
	if (shiftResponse == 'r')
	{
		leftShift = false;
	}

	return shiftResponse;
}

int getValidShiftAmount()
{
	int shiftAmount;
	scanf("%d", &shiftAmount);
	getchar();
	while (shiftAmount < 1 || shiftAmount > 25)
	{
		scanf("%d", &shiftAmount);
		getchar();
	}
	return shiftAmount;
}

void getValidMessage(char* message, int messageSize)
{

	bool validMessage = false;
	fgets(message, messageSize, stdin);
	int originalMessageLength = strnlen(message, messageSize - 1) - 1;
	message[originalMessageLength] = '\0';
	while (!validMessage)
	{
		// invalid if non-upper case alpha characters in message (don't include newline at end))
		validMessage = true;
		for (int i = 0; i < originalMessageLength; i++)
		{
			if (!isupper(message[i]))
			{
				fgets(message, messageSize, stdin);
				originalMessageLength = strnlen(message, (messageSize - 1));

				// reset flag and exit for loop
				validMessage = false;
				break;
			}
		}
	}
	return validMessage;
}

char* encryptMessage(char* message, int messageSize,
	bool leftShift, int shiftAmount)
{

	char* encryptedMessage = malloc((messageSize + 1) * sizeof(char));
	for (int i = 0; i < messageSize; i++)
	{
		if (leftShift)
		{
			encryptedMessage[i] = message[i] - shiftAmount;
			if (encryptedMessage[i] < 'A')
			{
				encryptedMessage[i] += 'Z' - 'A' + 1;
			}
		}
		else
		{
			encryptedMessage[i] = message[i] + shiftAmount;
			if (encryptedMessage[i] > 'Z')
			{
				encryptedMessage[i] -= 'Z' - 'A' + 1;
			}
		}
	}
	encryptedMessage[messageSize] = '\0';
	return encryptedMessage;
}

char* decryptMessage(char* message, int messageSize,
	bool leftShift, int shiftAmount)
{
	char* encryptedMessage = encryptMessage(
		message, messageSize,
		leftShift, shiftAmount);

	int encryptedMessageLength = messageSize;
	char* decryptedMessage = malloc((encryptedMessageLength + 1) * sizeof(char));
	for (int i = 0; i < encryptedMessageLength; i++)
	{
		if (leftShift)
		{
			decryptedMessage[i] = encryptedMessage[i] + shiftAmount;
			if (decryptedMessage[i] > 'Z')
			{
				decryptedMessage[i] -= 'Z' - 'A' + 1;
			}
		}
		else
		{
			decryptedMessage[i] = (encryptedMessage[i] - shiftAmount);
			if (decryptedMessage[i] < 'A')
			{
				decryptedMessage[i] += 'Z' - 'A' + 1;
			}
		}
	}
	decryptedMessage[encryptedMessageLength] = '\0';
	return decryptedMessage;
}