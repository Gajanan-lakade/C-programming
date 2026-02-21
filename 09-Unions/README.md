# 🔹 Unions in C Programming

A union in C is a user-defined data type where all members share the same memory location.
Unlike structures, only one member of a union can store a value at a time.

## Programs Included
`union_basic.c` Basic union example 
`union_memory_size.c` Demonstrates memory size behavior 
`union_student_example.c` Practical student data example 

## Key Concepts Covered
- - Structure declaration using `union`
- Understanding union declaration and syntax.  
- All members share the same memory location.  
- Size of union equals the size of its largest member.  
- Assigning one member overwrites the previous value.  
- Difference between structure and union.

## How to Compile and Run
```bash
gcc filename.c
./a.out
