#ifndef RECHARGE_H_INCLUDED
#define RECHARGE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"information.h"

void recharge(int identity)
{
    char bankcard[30],bankpassword[30];
    float amount;
    printf("Please input your bank card number: ");
    gets(bankcard);
    printf("Please input the password: ");
    gets(bankpassword);
    printf("Please input the amount of the money you want refill: ");
    scanf("%f",&amount);
    student[identity].surplus+=amount;
    printf("\nProcessing now...This may take a second...\n");
    printf("Please press any key to continue...");
    getch();
    ///system("pause > nul");
    printf("\n\nYou have recharge %.1f yuan to your account: %s.Now,its surplus is: %.1f yuan.\n",amount,student[identity].cardnumber,student[identity].surplus);
    printf("\nPress any key to quit the recharge system...");
    getch();
    system("cls");
}

#endif // RECHARGE_H_INCLUDED
