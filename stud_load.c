#include<stdio.h>
#include<stdlib.h>
#include "student.h"

extern ST *head;

void stud_load()
{
    FILE *fp=fopen("student.dat","rb");

    ST *new,*temp;

    if(fp==NULL)
        return;

    while(1)
    {
        new=malloc(sizeof(ST));

        if(fread(new,sizeof(ST),1,fp)!=1)
        {
            free(new);
            break;
        }

        new->next=NULL;

        if(head==NULL)
            head=new;
        else
        {
            temp=head;

            while(temp->next)
                temp=temp->next;

            temp->next=new;
        }
    }

    fclose(fp);
}
