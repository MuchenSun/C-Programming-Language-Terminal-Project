#ifndef ADMINISTRATOR_H_INCLUDED
#define ADMINISTRATOR_H_INCLUDED
#include<stdio.h>
#include<string.h>
#include"information.h"

void administrator()
{
    int r;
    int i;
    char kind[100];
    printf("\nHere is all users' information:\n\n");
    for(i=0;i<8;i++)
    {
        printf("User No.%d\n",i+1);
        printf("\tCardnumber: %s\n",student[i].cardnumber);
        printf("\tPassword: %s\n",student[i].password);
        printf("\tLastname: %s\n",student[i].lastname);
        printf("\tFirstname: %s\n",student[i].firstname);
        printf("\tAppellation: %s\n",student[i].gender);
        printf("\tGender: %s\n",student[i].sex);
        printf("\tConsumption: %.1f yuan\n",student[i].consumption);
        printf("\tSurplus: %.1f yuan\n",student[i].surplus);
        printf("\tCredit: %s\n",student[i].credit);
        if(student[i].key==1)
            printf("\tAuthority: Administrator\n");
        else
            printf("\tAuthority: Ordinary User\n");
    }
    printf("\nWhat kind of information do you want to modify(input 'quit' to quit): ");
    for(;;)
    {
        i=0;
        r=0;
        fflush(stdin);
        gets(kind);
        if(strcmp(kind,"cardnumber")==0||strcmp(kind,"Cardnumber")==0)
            i=1;
        if(strcmp(kind,"password")==0||strcmp(kind,"Password")==0)
            i=2;
        if(strcmp(kind,"lastname")==0||strcmp(kind,"Lastname")==0)
            i=3;
        if(strcmp(kind,"firstname")==0||strcmp(kind,"Firstname")==0)
            i=4;
        if(strcmp(kind,"appellation")==0||strcmp(kind,"Appellation")==0)
            i=5;
        if(strcmp(kind,"gender")==0||strcmp(kind,"Gender")==0)
            i=6;
        if(strcmp(kind,"consumption")==0||strcmp(kind,"Consumption")==0)
            i=7;
        if(strcmp(kind,"surplus")==0||strcmp(kind,"Surplus")==0)
            i=8;
        if(strcmp(kind,"credit")==0||strcmp(kind,"Credit")==0)
            i=9;
        if(strcmp(kind,"quit")==0)
            break;

        switch(i)
        {
        case 0:
            {
                printf("\nSorry,you do the wrong operation!\n");
                break;
            }
        case 1:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].cardnumber);
                printf("\nUser No.%d\n",i);
                printf("Cardnumber: %s\n",student[i-1].cardnumber);
                break;
            }
        case 2:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].password);
                printf("\nUser No.%d\n",i);
                printf("Password: %s\n",student[i-1].password);
                break;
            }
        case 3:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].lastname);
                printf("\nUser No.%d\n",i);
                printf("Lastname: %s\n",student[i-1].lastname);
                break;
            }
        case 4:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].firstname);
                printf("\nUser No.%d\n",i);
                printf("Firstname: %s\n",student[i-1].firstname);
                break;
            }
        case 5:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].gender);
                printf("\nUser No.%d\n",i);
                printf("Appellation: %s\n",student[i-1].gender);
                break;
            }
        case 6:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].sex);
                printf("\nUser No.%d\n",i);
                printf("Gender: %s\n",student[i-1].sex);
                break;
            }
        case 7:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                scanf("%f",&student[i-1].consumption);
                printf("\nUser No.%d\n",i);
                printf("Consumption: %.1f\n",student[i-1].consumption);
                break;
            }
        case 8:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                scanf("%f",&student[i-1].surplus);
                printf("\nUser No.%d\n",i);
                printf("Surplus: %.1f\n",student[i-1].surplus);
                break;
            }
        case 9:
            {
                printf("\nPlease input the number of the user: ");
                scanf("%d",&i);
                printf("\nYou want to change it to what: ");
                gets(student[i-1].credit);
                printf("\nUser No.%d\n",i);
                printf("Credit: %s\n",student[i-1].credit);
                break;
            }
        }

    }
    printf("\nPress any key to quit the administrator system...");
    getch();
    system("cls");
}

#endif // ADMINISTRATOR_H_INCLUDED
