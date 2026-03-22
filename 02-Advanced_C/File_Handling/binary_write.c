/*
    Program: Writing integers into a binary file
    Description: Demonstrates how to create a binary file,
                 write integer data into it using fwrite(),
                 and verify successful writing.
    Author: Gajanan Bharat Lakade
*/

#include <stdio.h>   // Required for file handling functions like fopen, fwrite, fclose

/*
    Main function: Entry point of the program
*/
int main(void)
{
    FILE *fp;   // Declare a file pointer
                 // FILE is a structure used to handle files in C

    // Initialize an integer array with 6 values
    int numbers[] = {10, 20, 30, 40, 50, 60};

    /*
        Open a file named "data.bin" in write-binary mode ("wb")
        - If file does not exist → it will be created
        - If file exists → it will be overwritten
    */
    fp = fopen("data.bin", "wb");

    // Check if file was opened successfully
    if (fp == NULL)
    {
        printf("Error creating binary file\n");
        return 1;   // Exit program with error status
    }

    /*
        Write data to file using fwrite()
        Parameters:
        1. numbers       → starting address of array
        2. sizeof(int)   → size of each element
        3. 6             → number of elements to write
        4. fp            → file pointer

        fwrite returns the number of elements successfully written
    */
    size_t written = fwrite(numbers, sizeof(int), 6, fp);

    // Display number of elements written
    printf("Elements written: %zu\n", written);

    // Verify all elements were written successfully
    if (written != 6)
    {
        printf("Error writing to file\n");
    }

    // Close the file (important to save data properly)
    fclose(fp);

    printf("Binary data written successfully\n");

    return 0;   // Successful execution
}