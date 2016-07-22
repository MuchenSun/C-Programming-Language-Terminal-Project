#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include"login_interface.h"
#include"database.h"

int main()
{
    read_from_database();
    login();
    write_to_database();
    return 0;
}
