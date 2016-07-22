#include<stdio.h>
#include<string.h>
#include"information.h"
#include"language_processing.h"

void login()
{
    char incard[100];
    char inpass[100];
    char dia[250];
    char position;
    int i,j=1;
    ///time_t dat;
    ///time(&dat);
    printf("Lanzhou University Campus Card Service Center\n\n");
    printf("Please input your card number:\n");
    while(j)
    {
        gets(incard);
        for(i=0;i<8;i++)
        {
            if(strcmp(incard,student[i].cardnumber)==0)
            {
                j=0;
                break;
            }
        }
        if(j==1)
            printf("\nThe account does not exist!\nPlease make sure you have input the right number:\n");
    }
    for(j=0;j<5;j++)
    {
        printf("Please input the password:\n");
        gets(inpass);
        if(strcmp(inpass,student[i].password)==0)
        {
            position='a';
            break;
        }
        else
        {
            position='b';
            if(j!=4)
            {
                printf("\nThe password you input is wrong!\n");
                printf("Please input again(%d time(s)left)\n",4-j);
            }
            else
            {
                printf("The password you input is wrong!\n");
                break;
            }
        }
    }
    switch(position)
    {
        case'a':
        {
            printf("\nLoading...Please wait...\n");
            printf("Please press any key to continue...");
            getch();
            system("cls");
            printf("Tarvis is getting online now...This may take a second...\n");
            printf("Please press any key to continue...");
            getch();
            system("cls");
            printf("\nTarvis: Nice to meet you,%s%s! What can I do for you?\n",student[i].gender,student[i].lastname);
            talk(i);
            break;
        }
        case'b':
        {
            printf("Sorry,this account has been locked! Please call 0931-8912026 for more details.\n");
            break;
        }
    }
}
