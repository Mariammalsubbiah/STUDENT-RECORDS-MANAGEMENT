#include<stdio.h>
#include "student.h"

extern ST *head;

void stud_show()
{
    ST *temp=head;

    printf("\n---------------------------------\n");
    printf("Roll\tName\tPercentage\n");
    printf("---------------------------------\n");

    while(temp)
    {
        printf("%d\t%s\t%.2f\n",
                temp->roll,
                temp->name,
                temp->per);

        temp=temp->next;
    }

    printf("---------------------------------\n");
}
