/*
    File: write_file.c
    Description: Writing data into a file using C
*/

#include <stdio.h>   // Required for file handling functions

// Main function: entry point of the program
int main(void)
{
    FILE *fp;   // File pointer declaration

    // Open file in write mode ("w")
    // If the file does not exist, it will be created
    fp = fopen("write_data.txt", "w");

    // Check if file was opened successfully
    if (fp == NULL) 
    {
        printf("Error creating file!\n");
        return 1;   // Exit program with error code
    }

    // Write data into the file
    fprintf(fp, "Hello C Programming\n");
    fprintf(fp, "File Handling Example\n");

    // Close the file to save changes and free resources
    fclose(fp);

    // Print confirmation message to console
    printf("Data written successfully.\n");

    return 0;   // Successful execution
}
