#include<stdio.h>
#include "student.h"

extern ST *head;

void stud_mod()
{
    int roll;

    ST *temp=head;

    printf("Enter Roll Number : ");
    scanf("%d",&roll);

    while(temp)
    {
        if(temp->roll==roll)
        {
            printf("New Name : ");
            scanf("%s",temp->name);

            printf("New Percentage : ");
            scanf("%f",&temp->per);

            return;
        }

        temp=temp->next;
    }

    printf("Record not found\n");
}
