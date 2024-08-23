/*
    * File: main.c
    * Author: Joshua White
    * Title: Graded Exercise 11
    * Help from: James | Math Center.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
 * Encrypt messages using the caeser cipher
 */

int main(int argc, char** argv)
{
    // define variables
    char shift;
    int shiftamount;
    char usermessage[50] = { 0 };
    char cipher[50] = { 0 };

    // introduce user to the program
    printf("Hi! I will encrypt what you type into the Caeser Cipher!\n");
    printf("First order of business: Do you want to left or right shift? (l or r)\n");

    // take in left or right shift
    scanf(" %c", &shift);
    while (tolower(shift) != 'l' && tolower(shift) != 'r')
    {
        printf("Please put in l or r\n");
        scanf(" %c", &shift);
    }

    // take in amount shifted
    printf("\n");
    printf("Now put in how far you want to shift. (1-25)\n");

    scanf_s("%d", &shiftamount);
    while (shiftamount < 1 || shiftamount > 25)
    {
        printf("Please put in a number from 1-25\n");
        scanf_s("%d", &shiftamount);
    }

    // takea in message
    printf("\nNow we're ready to encrypt something! What will you encrypt? (make sure it's uppercase. no spaces)\n");
    scanf("%s", &usermessage);
    
    // encrypt message
    printf("\n");
    printf("You are converting %s into a caeser cipher of %c shift and %d amount. \nThat means your message, when encrypted is : \n", usermessage, shift, shiftamount);
    for (int i = 0; i < strlen(usermessage); i++)
    {
        if (shift == 'l')
        {
            cipher[i] = (toupper(usermessage[i]) - 'A' - shiftamount + 26) % 26 + 'A';
        }
        else if (shift == 'r')
        {
            cipher[i] = (toupper(usermessage[i]) - 'A' + shiftamount + 26) % 26 + 'A';
        }
        
    }
    
    // output encrypted message
    printf("%s", cipher);
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------");


    return (EXIT_SUCCESS);
}