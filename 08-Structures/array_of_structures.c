/*
 Program: Array of Structures
 Description: Demonstrates storing multiple structure records
 Author: Gajanan Lakade
*/

#include <stdio.h> // Header file for input and output functions

// Structure definition
// This structure stores information of one student
struct Student
{
    int rollNumber; // Stores student's roll number
    float marks;    // Stores student's marks
};

// Main function: entry point of the program
int main(void)
{
    int iterate, size; // 'iterate' used as loop counter, 'size' stores number of students
    char choice;       // Used to control repetition of program

    // do-while loop ensures the program runs at least once
    // and repeats based on user's choice
    do
    {
        // Ask user for number of students
        printf("Enter size of array: ");
        scanf("%d", &size);

        // Declare array of structures
        // Size is decided at runtime (Variable Length Array - VLA)
        struct Student students[size];

        // Input loop: store data for each student
        for (iterate = 0; iterate < size; iterate++)
        {
            printf("\nEnter details for Student %d\n", iterate + 1);

            // Input roll number
            printf("Enter Roll Number: ");
            scanf("%d", &students[iterate].rollNumber);

            // Input marks
            printf("Enter Marks: ");
            scanf("%f", &students[iterate].marks);
        }

        // Output section
        printf("\n--- Student Records ---\n");

        // Display stored student data
        for (iterate = 0; iterate < size; iterate++)
        {
            printf("Student %d -> Roll: %d, Marks: %.2f\n",
                   iterate + 1,
                   students[iterate].rollNumber,
                   students[iterate].marks);
        }

        // Ask the user whether to continue or terminate the program
        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &choice); // Space before %c ignores leftover newline

    } while (choice == 'Y' || choice == 'y'); // Loop continues if user enters Y or y

    return 0; // End of program
}
