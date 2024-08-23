/*
    * File: main.c
    * Author: Joshua White
    * Title: Hangman
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

/*
 * Create a functional 2-player hangman game
 */

int main(int argc, char** argv)
{
    char Player1Word[20];
    char GuessedLetter;
    char GuessedLetters;
    int SizeOfWord;

    
    // take in user word
    printf("Welcome. This is a 2-player game of hangman. First player, please put in your word.\n");
    fgets(Player1Word, sizeof(Player1Word), stdin);
    

    GuessedLetter = Player2Response(Player1Word);
    
    


   
    return (EXIT_SUCCESS);
}

int Player2Response(char word[])
{
    char Guess;
    char head = ' ';
    char torso = ' ';
    char leftarm = ' ';
    char rightarm = ' ';
    char leftleg = ' ';
    char rightleg = ' ';

    printf("Now it's player 2's turn! Please guess a letter.\n");
    printf(" ______\n");
    printf(" |    |\n");
    printf(" %c    |\n", head);
    printf("%c%c%c   |\n", leftarm, torso, rightarm);
    printf("%c %c   |\n", leftleg, rightleg);
    printf("      |\n");
    scanf_s("%c", &Guess);
    

    return Guess;
}