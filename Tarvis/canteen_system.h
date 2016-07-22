#ifndef CANTEEN_SYSTEM_H_INCLUDED
#define CANTEEN_SYSTEM_H_INCLUDED
#include<stdio.h>
#include<conio.h>
#include"information.h"

struct menu_a
{
    char name[100];
    float price;
}a[]={"Braised Pork in Brown Sauce(∫Ï…’»‚)",7.0,
      "Saut®¶ed Broccoli(«Â≥¥Œ˜¿ºª®)",3.5,
      "Ut®¶ed Beef(±¨≥¥≈£»‚)",9.0,
      "Poached Prawns(ÀÆ÷Ûœ∫)",9.0,
      "Tofu and Kelp Soup(∂π∏Ø ﬂ≤ÀÃ¿)",5.0};

struct menu_b
{
    char name[100];
    float price;
}b[]={"Stir-Fried Rice Noodles(≥¥∫”∑€)",7.0,
      "Rice Fried with Eggs(µ∞≥¥∑π)",6.0,
      "Marmite(…∞π¯)",9.0,
      "Dumplings(ÀÆΩ»)",9.0};

struct menu_c
{
    char name[100];
    float price;
}c[]={"Beef Noodles(≈£»‚√Ê)",3.8,
      "Islamic Stir-Fried Noodles («Â’Ê≥¥√Ê)",6.0,
      "Cabobs(—Ú»‚¥Æ)*5",10.0,
      "Islamic Pastry(«Â’Ê∏‚µ„)",3.0};

void canteen_area(int identity)
{
    int i,j,k;
    float cost=0;
    char area;
    printf("Which area are you at now?(a,b or c?): ");
    scanf("%c",&area);
    printf("\nWe have these for you now:\n");
    switch(area)
    {
        case 'a':
            {
                for(i=0;i<5;i++)
                    printf("No.%d: %s - price: %.1f.\n",i+1,a[i].name,a[i].price);
                printf("\nPlease input the number of the item you want: ");
                for(;;)
                {
                    scanf("%d",&i);
                    if(i!=0)
                    {
                        printf("You have choose: %s(%.1f yuan).\n",a[i-1].name,a[i-1].price);
                        printf("\nDo you want anything more(input '0' to quit)? ");
                        cost+=a[i-1].price;
                    }
                    if(i==0)
                    {

                        if(student[identity].surplus<cost)
                            printf("Sorry,your surplus is not enough.\n");
                        else
                        {
                            student[identity].surplus-=cost;
                            student[identity].consumption+=cost;
                            printf("\nThe total cost is %.1f yuan, your account has: %.1f yuan left.\n",cost,student[identity].surplus);
                        }
                        break;
                    }
                }
                printf("\nPress any key to quit the canteen system...");
                getch();
                system("cls");
                break;
            }
        case 'b':
            {
                for(i=0;i<4;i++)
                    printf("No.%d: %s - price: %.1f.\n",i+1,b[i].name,b[i].price);
                printf("\nPlease input the number of the item you want: ");
                for(;;)
                {
                    scanf("%d",&i);
                    if(i!=0)
                    {
                        printf("You have choose: %s(%.1f yuan).\n",b[i-1].name,b[i-1].price);
                        printf("\nDo you want anything more(input '0' to quit)? ");
                        cost+=b[i-1].price;
                    }
                    if(i==0)
                    {
                        if(student[identity].surplus<cost)
                            printf("Sorry,your surplus is not enough.\n");
                        else
                        {
                            student[identity].surplus-=cost;
                            printf("\nThe total cost is %.1f yuan, your account has: %.1f yuan left.\n",cost,student[identity].surplus);
                        }
                        break;
                    }
                }
                printf("\nPress any key to quit the canteen system...");
                getch();
                system("cls");
                break;
            }
        case 'c':
            {
                for(i=0;i<4;i++)
                    printf("No.%d: %s - price: %.1f.\n",i+1,c[i].name,c[i].price);
                printf("\nPlease input the number of the item you want: ");
                for(;;)
                {
                    scanf("%d",&i);
                    if(i!=0)
                    {
                        printf("You have choose: %s(%.1f yuan).\n",c[i-1].name,c[i-1].price);
                        printf("\nDo you want anything more(input '0' to quit)? ");
                        cost+=c[i-1].price;
                    }
                    if(i==0)
                    {
                        if(student[identity].surplus<cost)
                            printf("Sorry,your surplus is not enough.\n");
                        else
                        {
                            student[identity].surplus-=cost;
                            printf("\nThe total cost is %.1f yuan, your account has: %.1f yuan left.\n",cost,student[identity].surplus);
                        }
                        break;
                    }
                }
                ///printf("\nPress any key to quit the canteen system...");
                ///getch();
                ///system("cls");
                break;
            }
    }
}

#endif // CANTEEN_SYSTEM_H_INCLUDED
