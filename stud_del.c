#include<stdio.h>
#include<stdlib.h>
#include "student.h"

extern ST *head;

void stud_del()
{
    int roll;

    ST *temp=head,*prev=NULL;

    printf("Enter Roll Number : ");
    scanf("%d",&roll);

    while(temp)
    {
        if(temp->roll==roll)
        {
            if(prev==NULL)
                head=temp->next;
            else
                prev->next=temp->next;

            free(temp);

            printf("Deleted\n");
            return;
        }

        prev=temp;
        temp=temp->next;
    }

    printf("Record not found\n");
}
