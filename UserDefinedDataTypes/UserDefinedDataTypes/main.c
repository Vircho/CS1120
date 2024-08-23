/*
    * File: main.c
    * Author: <your name here>
*/


#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

int main(int argc, char** argv)
{
    typedef struct Student Student;

    struct Student // give the structure a name
    {
        int number;
        float percent; // grade percentage
        char grade; // letter grade in class
    };

    // initiallize and print student info
    Student student0 = { 101010101, 89.5, 'B' };
    printf("Student0\n");
    printf("----------\n");
    printf("Number: %d\n", student0.number);
    printf("Percent: %f\n", student0.percent);
    printf("Grade: %c\n", student0.grade);
    printf("\n");

    Student student1; // another way to initialize
    student1.number = 8;
    student1.percent = 59.99;
    student1.grade = 'G';
   
    printf("Student1\n");
    printf("----------\n");
    printf("Number: %d\n", student1.number);
    printf("Percent: %.2f\n", student1.percent);
    printf("Grade: %c\n", student1.grade);
    printf("\n");

    return (EXIT_SUCCESS);
}