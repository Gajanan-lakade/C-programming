/*
 Program: Structure with Pointer
 Description: Demonstrates accessing structure using pointer
 Author: Gajanan Lakade
*/

#include <stdio.h>   // Header file for input and output functions

// Define structure to store student details
struct Student 
{
    int rollNumber;   // Stores student's roll number
    float marks;      // Stores student's marks
};

int main(void) 
{
    int iterate, size;   // 'iterate' for loop counter, 'size' for number of students
    char choice;         // Used to control repetition of program

    // do-while loop ensures program runs at least once
    do
    {
        // Ask user for number of students
        printf("Enter size of array: ");
        scanf("%d", &size);

        // Declare array of structures (size decided at runtime)
        struct Student students[size];

        // Declare pointer to structure
        struct Student *ptr;

        // Input section
        for (iterate = 0; iterate < size; iterate++) 
        {
            printf("\nEnter details for Student %d\n", iterate + 1);

            // Take roll number input
            printf("Enter Roll Number: ");
            scanf("%d", &students[iterate].rollNumber);

            // Take marks input
            printf("Enter Marks: ");  
            scanf("%f", &students[iterate].marks); 
        }

        // Make pointer point to first element of array
        // Array name acts as base address of first element
        ptr = students;

        printf("\n--- Student Records (Using Pointer) ---\n");

        // Access structure members using pointer
        for (iterate = 0; iterate < size; iterate++)
        {
            printf("Student %d -> Roll: %d, Marks: %.2f\n",
                   iterate + 1,
                   ptr[iterate].rollNumber,   // Access using pointer indexing
                   ptr[iterate].marks);
        }

        // Ask user whether to continue program
        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &choice);  // Space before %c ignores leftover newline

    } while(choice == 'Y' || choice == 'y');  // Repeat if user enters Y or y

    return 0;   // Program ends successfully
}
