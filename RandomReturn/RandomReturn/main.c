/*
    * File: main.c
    * Author: Joshua White
    * Title: RandomReturn
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Demonstrate returning data from a function
 */

int main(int argc, char** argv)
{
    // initialize randomnumber generator and generate numbers
    srand(time(0));
    for (int i = 1; i <= 5; i++)
    {
        printf("Random Number %d: %d\n ", i, getRandom());
    }


    return (EXIT_SUCCESS);
}
/*
 * Generates a random number
*/
int getRandom()
{
    return rand();
}