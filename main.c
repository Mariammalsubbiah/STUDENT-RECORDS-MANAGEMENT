#include<stdio.h>
#include "student.h"

ST *head=NULL;

int main()
{
    char ch;

    stud_load();

    while(1)
    {
        printf("\n**** STUDENT RECORD MENU ****\n");
        printf("A/a : Add Record\n");
        printf("D/d : Delete Record\n");
        printf("S/s : Show Records\n");
        printf("M/m : Modify Record\n");
        printf("V/v : Save Records\n");
        printf("E/e : Exit\n");

        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
            case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'V':
            case 'v':
                stud_save();
                break;

            case 'E':
            case 'e':
                return 0;
        }
    }
}
