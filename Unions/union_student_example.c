/*
 Program: Union Student Data Demonstration
 Description: This program demonstrates the use of a union in C.
              It shows how different members of a union share
              the same memory location. Assigning a value to one
              member overwrites the previously stored value.
 Author: Gajanan Bharat Lakade
*/

#include <stdio.h> // Standard input-output header file

// Define a union named StudentData
// All members share the same memory location
union StudentData
{
    int roll;
    float marks;
    char grade;
};

// Main function: entry point of the program
int main(void)
{
    union StudentData student; // Declare a union variable

    // Assign roll number to union member 'roll'
    student.roll = 101;
    printf("Roll Number: %d\n", student.roll);

    // This overwrites the previously stored roll number
    student.marks = 88.5;
    printf("Marks: %.2f\n", student.marks);

    // This overwrites the previously stored marks
    student.grade = 'A';
    printf("Grade: %c\n", student.grade);

    return 0; // End of program
}
