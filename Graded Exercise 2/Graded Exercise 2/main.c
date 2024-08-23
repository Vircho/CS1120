/*
    * File: main.c
    * Author: <Joshua White>
    * Title: Graded Exercise 2: Integer Variables and Operations
*/


#include <stdio.h>
#include <stdlib.h>

#define Current_Year 2022

/*
 * Declare integer variables and display output of integer operations
 * Help from: James, Mathematics Excel Center: Told me to remove semicolon from #define line
 */

int main(int argc, char** argv)
{
    int BirthYear1 = 2006;
        // By subtracting BirthYear from Current_Year, we can get youngAge
    
    int youngAge = Current_Year - BirthYear1;

    printf("%d\n", youngAge);

    int BirthYear2 = 1963;
    int oldAge = Current_Year - BirthYear2;

    printf("%d\n", oldAge);
   
    int ageDifference = oldAge - youngAge;
    printf("%d\n", ageDifference);

    int ageSum = youngAge + oldAge;
    printf("%d\n", ageSum);

    int ratioInteger = oldAge / youngAge;
    printf("%d\n", ratioInteger);
   return (EXIT_SUCCESS);
}