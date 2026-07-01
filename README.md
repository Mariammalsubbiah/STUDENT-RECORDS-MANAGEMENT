**Student Record Management System

Objective
Develop a Student Record Management System using Singly Linked List and Multiple File Compilation in C.

 **Features
- Add New Record
- Delete Record
- Show Records
- Modify Record
- Save Records
- Load Records
- Sort Records
- Exit Program
 Menu

**** STUDENT RECORD MENU ****

A/a : Add New Record

D/d : Delete a Record

S/s : Show the List

M/m : Modify a Record

V/v : Save

T/t : Sort the List

E/e : Exit

** Project Files

student.h

main.c

stud_add.c

stud_del.c

stud_show.c

stud_mod.c

stud_save.c

stud_load.c

Makefile

README.md

** Structure

Student Data:

- Roll Number
- Name
- Percentage

Stored using Singly Linked List.

** Compilation

Using GCC:

```bash
gcc main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_load.c -o student
