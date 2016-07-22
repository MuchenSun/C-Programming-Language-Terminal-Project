#ifndef INFORMATION_H_INCLUDED
#define INFORMATION_H_INCLUDED

struct card_information
{
    char cardnumber[20];
    char password[20];
    char sex[5];
    char gender[10];
    char lastname[20];
    char firstname[20];
    float surplus;
    char credit[6];
    int key;
    float consumption;
}student[]={"0","0","male","Mr.","Zheng","Guang",23.0,"*****",1,0,
            "320150939131","320150939131","male","Mr.","Li","Nan",23.0,"*****",0,0,
            "320150939211","320150939211","male","Mr.","Lu","Luming",23.0,"*****",0,0,
            "320150939321","320150939321","male","Mr.","Sun","Muchen",23.0,"*****",0,0,
            "320150939171","320150939171","male","Mr.","Liu","Hanyue",23.0,"*****",0,0,
            "320150939111","320150939111","male","Mr.","Huang","Zhixiang",23.0,"*****",0,0,
            "320150939911","320150939911","male","Mr.","Shan","Chuang",23.0,"*****",0,0,
            "320150938841","320150938841","male","Mr.","Chen","Guanbin",23.0,"*****",0,0};


#endif // INFORMATION_H_INCLUDED
