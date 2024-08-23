/*
    * File: main.c
    * Author:
    * Title:
*/

#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * Demonstrate while loops
 */

int main(int argc, char** argv)
{
    int i, n;
    i = 0;
    printf("Enter any number\n");
    scanf_s("%d", &n);

    while (i <= n)
    {
        printf("%d", i);
        i++;
    }



    return (EXIT_SUCCESS);
}