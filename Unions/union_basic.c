/*
 Program: Demonstration of Union in C
 Description: This program illustrates the concept of union in C programming.
              A union allows storing different data types in the same memory
              location. Only one member can hold a valid value at a time.
              Assigning a value to one member overwrites the previously stored value.
 Author: Gajanan Bharat Lakade
*/

#include <stdio.h> // Standard input-output header file

// Define a union named Data
union Data
{
    int Integer;
    float Float;
    char Character;
};

// Main function: entry point of the program
int main(void)
{
    union Data data; // Declare a union variable

    data.Integer = 10;
    printf("Integer value: %d\n", data.Integer);

    // This overwrites the previously stored integer value
    data.Float = 20.5;
    printf("Float value: %.2f\n", data.Float);

    // This overwrites the previously stored float value
    data.Character = 'A';
    printf("Character value: %c\n", data.Character);

    return 0; // End of program
}
