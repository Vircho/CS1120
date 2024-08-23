/*
    * File: main.c
    * Author:
    * Title:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

int main(int argc, char** argv)
{
    int MaxGrade = 500;
    int StudentGrade[5];
    int MathGrade = 0;
    int FinalGrade;
    for (int i = 0; i < StudentGrade; i++)
    {
        scanf_s("%d", &StudentGrade[i]);
        MathGrade = StudentGrade[i] + MathGrade;
    }
    FinalGrade = (MathGrade / MaxGrade) * 100;
    printf("%d", FinalGrade);



    return (EXIT_SUCCESS);
}