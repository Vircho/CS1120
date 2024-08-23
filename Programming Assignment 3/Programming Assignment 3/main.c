/*
    * File: main.c
    * Author: Joshua White
    * Title: Junior Codebreaker
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
 * Read in a phrase and count letter frequency
 * Help from: Feras, class. Mark, math center.
 */

int main(int argc, char** argv)
{
    // Set up variables
    char userPhrase[99];
    int charAmount[26] = { 0 };
    
    // Introduce user
    printf("Welcome! Put in a phrase that is <= 99 characters and I'll tell you how often certain characters appear.");
    printf("\n");
    printf("Put in your phrase: ");
    fgets(userPhrase, sizeof(userPhrase), stdin);
    
    // find char amounts
    for (int i = 0; i < strlen(userPhrase); i++)
    {
        char userLetters = userPhrase[i];
        if (isalpha(userLetters))
        {
            charAmount[toupper(userLetters) - 'A'] += 1;
        }

    }
    
    // print results
    printf("\n");
    printf("Your message was: %s", userPhrase);
    printf("It contains these letters of these amounts:");
    printf("\n");
    for (int w = 0; w < 26; w++)
    {
        if (charAmount[w] > 0)
        {
            printf("%c%d ", 'A' + w, (int)charAmount[w]);
        }
    }
 
    return (EXIT_SUCCESS);
}