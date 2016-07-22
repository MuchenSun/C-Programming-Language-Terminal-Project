#ifndef LANGUAGE_PROCESSING_H_INCLUDED
#define LANGUAGE_PROCESSING_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"information.h"
#include"recharge.h"
#include"canteen_system.h"
#include"database.h"
#include"administrator.h"

struct store
{
    char word[50];
}sentence[50];

int talk(int identity)
{
	int i,j,k,length;
	int r=0,p=0;
	char dia[100];
	char bus[5];
	char * v=dia;
///////////////////////////////////////////////////////////////////////////////////
	for(;;)
	{
	    for(i=0;i<50;i++)
        {
            memset(sentence[i].word,0,50);
        }
	    printf("\n     I: ");
	    fflush(stdin);
	    gets(dia);
        length=strlen(dia);
        for(i=0,j=0,k=0;i<length;i++)
        {
            if(('A'<=*(v+i)&&'Z'>=*(v+i)) || ('a'<=*(v+i)&&'z'>=*(v+i)))
            {
                sentence[j].word[k]=*(v+i);
                k++;
            }
            else
            {
                if(*(v+i)!='\0')
                {
                    k=0;
                    j++;
                }
                else
                    break;
            }
        }
        ///
        for(i=0;i<j+1;i++)/// logic needs a test!
        {
            if(strcmp(sentence[i].word,"Hello")==0||strcmp(sentence[i].word,"hello")==0||strcmp(sentence[i].word,"Hi")==0||strcmp(sentence[i].word,"hi")==0)
            {
                r=9;
                break;
            }
            if(strcmp(sentence[i].word,"Thank")==0||strcmp(sentence[i].word,"thank")==0||strcmp(sentence[i].word,"Thanks")==0||strcmp(sentence[i].word,"thanks")==0)
            {
                r=10;
                break;
            }
            if(p==1&&(strcmp(sentence[i].word,"yes")==0||strcmp(sentence[i].word,"Yes")==0))
            {
                r=8;
                break;
            }
            if(strcmp(sentence[i].word,"am")==0)
            {
                r=6;
                p=0;
                break;
            }
            if(strcmp(sentence[i].word,"are")==0)
            {
                r=7;
                p=1;
                break;
            }
            if(strcmp(sentence[i].word,"administrator")==0)
            {
                p=0;
                if(student[identity].key==1)
                {
                    printf("\nTarvis: You have the permission of administrator now!\n");
                    printf("\nTarvis: You can change all users' information now.\n");
                    printf("\nTarvis: Connecting with administrator system now...\n");
                    printf("\nTarvis: Please press any key to enter the administrator system...\n");
                    getch();
                    system("cls");
                    administrator();
                    r=1;
                    break;
                }
                else
                {
                    printf("\nTarvis: Please input the command(How to unlock the map in 'StarCraft'?):\n\n     I: ");
                    fflush(stdin);
                    gets(bus);
                    if(strcmp(bus,"Black Sheep Wall")==0)
                    {
                        student[identity].key=1;
                        printf("\nTarvis: You have the permission of administrator now!\n");
                        printf("\nTarvis: You can change all users' information now.\n");
                    }
                    else
                    {
                        printf("\nTarvis: Sorry,you don't have the permission of administrator.\n");
                        break;
                    }
                    printf("\nTarvis: Connecting with administrator system now...\n");
                    printf("\nTarvis: Please press any key to enter the administrator system...\n");
                    getch();
                    system("cls");
                    administrator();
                    r=3;
                    student[identity].key=0;
                    break;
                }
                ///
                break;
            }
            if(strcmp(sentence[i].word,"surplus")==0||strcmp(sentence[i].word,"remainder")==0||strcmp(sentence[i].word,"remaining")==0||strcmp(sentence[i].word,"balance")==0)
            {
                printf("\nTarvis: Your account: %s has %.1f yuan left,its credit degree is: %s\n",student[identity].cardnumber,student[identity].surplus,student[identity].credit);
                r=1;
                p=0;
                break;
            }
            if(strcmp(sentence[i].word,"recharge")==0||strcmp(sentence[i].word,"refill")==0||strcmp(sentence[i].word,"replenish")==0||strcmp(sentence[i].word,"charge")==0)
            {
                printf("\nTarvis: Connecting with recharge system now...\n");
                printf("\nTarvis: Please press any key to enter the recharge system...\n");
                getch();
                system("cls");
                recharge(identity);
                r=2;
                p=0;
                break;
            }
            if(strcmp(sentence[i].word,"bus")==0)
            {
                printf("\nTarvis: Are you going to take the school bus?\n\n     I: ");
                fflush(stdin);
                gets(bus);
                if(strcmp(bus,"Yes")==0||strcmp(bus,"yes")==0||strcmp(bus,"Yes.")==0||strcmp(bus,"yes.")==0)
                {
                    student[identity].surplus-=6.0;
                    student[identity].consumption+=6.0;
                    printf("\nTarvis: You have bought a school bus ticket,it costs you 6.0 yuan.Now you have %.1f yuan left in your account.\n",student[identity].surplus);
                }
                else
                {
                    printf("\nTarvis: Sorry,I was think about other thing just then.\n");
                }
                r=3;
                p=0;
                break;
            }
            if(strcmp(sentence[i].word,"shower")==0||strcmp(sentence[i].word,"bath")==0)
            {
                printf("\nTarvis: Do you mean that you want to take a shower?\n\n     I: ");
                fflush(stdin);
                gets(bus);
                if(strcmp(bus,"Yes")==0||strcmp(bus,"yes")==0||strcmp(bus,"Yes.")==0||strcmp(bus,"yes.")==0)
                {
                    student[identity].surplus-=2.0;
                    student[identity].consumption+=2.0;
                    printf("\nTarvis: You have succeed in buying a ticket,it costs you 2.0 yuan.Now you have %.1f yuan left in your account.\n",student[identity].surplus);
                }
                else
                {
                    printf("Tarvis: Sorry,it's my fault.\n");
                }
                r=4;
                p=0;
                break;
            }
            if(strcmp(sentence[i].word,"swim")==0||strcmp(sentence[i].word,"swimming")==0||strcmp(sentence[i].word,"pool")==0||strcmp(sentence[i].word,"natatorium")==0)
            {
                printf("\nTarvis: I think you are going to swim,right?\n\n     I: ");
                fflush(stdin);
                gets(bus);
                if(strcmp(bus,"Yes")==0||strcmp(bus,"yes")==0||strcmp(bus,"Yes.")==0||strcmp(bus,"yes.")==0||strcmp(bus,"Yes!")==0||strcmp(bus,"yes!")==0)
                {
                    student[identity].surplus-=6.0;
                    student[identity].consumption+=6.0;
                    printf("\nTarvis: You have succeed in buying a ticket,it costs you 6.0 yuan.Now you have %.1f yuan left in your account.\n",student[identity].surplus);
                }
                else
                {
                    printf("\nTarvis: Sorry,I misunderstand you.\n");
                }
                r=5;
                p=0;
                break;
            }
            if(strcmp(sentence[i].word,"eat")==0||strcmp(sentence[i].word,"food")==0||strcmp(sentence[i].word,"meal")==0||strcmp(sentence[i].word,"starvation")==0||strcmp(sentence[i].word,"starve")==0||strcmp(sentence[i].word,"hungry")==0)
            {
                r=2;
                p=0;
                printf("\nTarvis: It's time to eat something? Do you need me to connect the canteen system?\n\n     I: ");
                fflush(stdin);
                gets(bus);
                if(strcmp(bus,"Yes")==0||strcmp(bus,"yes")==0||strcmp(bus,"Yes.")==0||strcmp(bus,"yes.")==0)
                {
                    printf("\nTarvis: Connecting with canteen system now...\n");
                    printf("\nTarvis: Please press any key to enter canteen system...\n");
                    getch();
                    system("cls");
                    canteen_area(identity);
                    break;
                }
                else
                {
                    printf("\nTarvis: Sorry,I misunderstand you.\n");
                    break;
                }
            }
            if(strcmp(sentence[i].word,"Bye")==0||strcmp(sentence[i].word,"bye")==0)
            {
                printf("\nTarvis: No need to be so sad,%sI believe I can see you again soon\n",student[identity].gender);
                fflush(stdin);
                gets(bus);
                return 0;
            }
            if(strcmp(sentence[i].word,"See")==0||strcmp(sentence[i].word,"see")==0)
            {
                printf("\nTarvis: Ah!Farewell is always a sad thing,don't you think so?But life will continue,cheer up!\n");
                fflush(stdin);
                gets(bus);
                return 0;
            }
        }
        ///
        switch(r)
        {
        case 0:
            {
                printf("\nTarvis: Sorry,I don't understand you.\n");
                break;
            }
        case 1:
            {
                printf("\nTarvis: Can I help you more?\n");
                break;
            }
        case 2:
            {
                printf("\nTarvis: Is there anything more?\n");
                break;
            }
        case 3:
            {
                printf("\nTarvis: What else can I do for you?\n");
                break;
            }
        case 4:
            {
                printf("\nTarvis: Do you have other things need me to do?\n");
                break;
            }
        case 5:
            {
                printf("\nTarvis: Another mission?\n");
                break;
            }
        case 6:
            {
                printf("\nTarvis: Sorry %s%s,but I think it's a waste of time to think about the problem of existence.\n",student[identity].gender,student[identity].lastname);
                printf("\nTarvis: Besides that,what else can I do for you?\n");
                break;
            }
        case 7:
            {
                printf("\nTarvis: Do you want me to introduce myself?\n");
                break;
            }
        case 8:
            {
                printf("\nTarvis: My name is Tarvis,\n");
                printf("        I am a campus assistant,\n");
                printf("        I was born to help you to deal with your campus affairs,\n");
                printf("        like recharge and some daily consumption,\n");
                printf("        my creator is Mr.Sun,\n");
                printf("        he helped me to understand what you say,\n");
                printf("        so you just need to tell me what you want to do just like you are talking with your friend,\n");
                printf("        I am clever,but not that clever,\n");
                printf("        if I can't understand you,I will tell you,then you can try to talk with me in other words,\n");
                printf("        I believe I can be a good assistant to you.\n");
                printf("\nTarvis: Is there anything more?\n");
                p=0;
                break;
            }
        case 9:
            {
                printf("\nTarvis: Hello,%s%s!\n",student[identity].gender,student[identity].lastname);
                break;
            }
        case 10:
            {
                printf("\nTarvis: You're welcome,%s%s!\n",student[identity].gender,student[identity].lastname);
                break;
            }
        }
        r=0;
    }
    return 0;
///////////////////////////////////////////////////////////////////////////////////
}

#endif // LANGUAGE_PROCESSING_H_INCLUDED
