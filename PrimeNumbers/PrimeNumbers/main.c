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
    int i, j;

    for (i = 2; i < 100; i++)
    {
        for (j = 2; j <= (i / j); j++)
            if (!(i % j))
                break;                          // if a factor found using modules, not prime
            if (j > (i / j))
                printf("%d is prime\n", i);
       
    }



    return (EXIT_SUCCESS);
}