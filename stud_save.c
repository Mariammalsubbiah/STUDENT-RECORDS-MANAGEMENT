#include<stdio.h>
#include "student.h"

extern ST *head;

void stud_save()
{
    FILE *fp=fopen("student.dat","wb");

    ST *temp=head;

    while(temp)
    {
        fwrite(temp,sizeof(ST),1,fp);
        temp=temp->next;
    }

    fclose(fp);

    printf("Data Saved\n");
}
