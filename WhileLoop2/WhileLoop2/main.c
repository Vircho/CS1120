/*
    * File: main.c
    * Author:
    * Title:
*/

#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

int main(int argc, char** argv)
{
    int score;

    //prompt for and get test score
    printf("Enter test score (0-100): ");
    scanf_s("%d", &score);

    //validate score
    while (score < 0 || score > 100)
    {
        // print error message and get a new score
        printf("\n");
        printf("Score must be between 0 and 100.\n");
        printf("Enter test score (0-100): ");
        scanf_s("%d", &score);
    }



    return (EXIT_SUCCESS);
}