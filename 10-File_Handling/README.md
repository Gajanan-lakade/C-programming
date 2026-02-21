# 🔹 File Handling in C

## 📌 Introduction

File handling in C allows us to store data permanently in files instead of temporary memory (RAM).  
C provides file operations using the `stdio.h` library.

---

## 🔑 Key Concepts Covered

- Opening and closing files using `fopen()` and `fclose()`
- Writing data using `fprintf()` and `fputc()`
- Reading data using `fscanf()` and `fgetc()`
- Understanding file modes like "r", "w", and "a"
- Checking `NULL` pointer for safe file handling

---

## 📂 Example Programs in this Folder

| File Name | Description |
|------------|-------------|
| write_file.c | Writing data into a file |
| read_file.c | Reading data from a file |
| append_file.c | Appending data to existing file |

---

## 🔹 File Modes

| Mode | Description |
|------|------------|
| "r"  | Read file |
| "w"  | Write (overwrite file) |
| "a"  | Append to file |
| "r+" | Read and write |
| "w+" | Write and read |

---

## 🛠 Compile & Run

```bash
gcc write_file.c -o write_file
./write_file
