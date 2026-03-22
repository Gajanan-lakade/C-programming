/*
    File: struct_file.c
    Description: Storing and reading structure from file
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {

    FILE *fp;
    struct Student s1 = {1, "Gajanan", 88.5};

    fp = fopen("student.dat", "wb");

    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("student.dat", "rb");
    fread(&s1, sizeof(s1), 1, fp);

    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.roll, s1.name, s1.marks);

    fclose(fp);

    return 0;
}
