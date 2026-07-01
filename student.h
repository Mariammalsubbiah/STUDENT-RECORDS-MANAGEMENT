#ifndef STUDENT_H
#define STUDENT_H

typedef struct student
{
    int roll;
    char name[50];
    float per;
    struct student *next;
}ST;

extern ST *head;

void stud_add(void);
void stud_del(void);
void stud_show(void);
void stud_mod(void);
void stud_save(void);
void stud_load(void);

#endif
