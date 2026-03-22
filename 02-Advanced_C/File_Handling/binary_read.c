/*
    File: binary_read.c
    Description: Reading integers from binary file
*/

#include <stdio.h>

int main() {

    FILE *fp;
    int numbers[6];

    //fp = fopen("hata.bin", "rb");
    fp = fopen("/home/gajanan7028/Desktop/Github/C-programming/output/02-Advanced_C/File_Handling/data.bin", "rb");
   // fp = fopen("/home/gajanan7028/Desktop/Github/C-programming/02-Advanced_C/File_Handling/data.bin", "rb");

    if (fp == NULL) {
        printf("Binary file not found\n");
        return 1;
    }

    fread(numbers, sizeof(int), 6, fp);

    for (int i = 0; i < 6; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    fclose(fp);

    return 0;
}
