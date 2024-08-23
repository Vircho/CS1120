/*
    * File: main.c
    * <Joshua White>
    * Title: Graded Exercise 3: Floating-Point Variables and Operations
*/


#include <stdio.h>
#include <stdlib.h>
#define MAX_SCORE  150000

/*
 * Declare floating-point variables and display output of floating-point operations
 * Help from: James, Mathematic Excel Center. Remove = from define, Change position of ( in equation.
 */

int main(int argc, char** argv)
{
    int score = 29586;
    printf("%d\n", score);
    float percent = ((float)score / MAX_SCORE) * 100;
    printf("%1.2f\n", percent);
    printf("%1.0f\n", percent);




    return (EXIT_SUCCESS);
}