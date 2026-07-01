#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

extern ST *head;

void stud_add()
{
    ST *new=malloc(sizeof(ST));
    ST *temp=head;

    int max=0;

    while(temp)
    {
        if(temp->roll > max)
            max=temp->roll;

        temp=temp->next;
    }

    new->roll=max+1;

    printf("Enter Name : ");
    scanf("%s",new->name);

    printf("Enter Percentage : ");
    scanf("%f",&new->per);

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
