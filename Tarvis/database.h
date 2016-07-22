#ifndef _DATABASE_H
#define _DATABASE_H

#include <stdio.h>
#include "information.h"

int read_from_database()
{
        FILE *databasefile=fopen("database.dat","r");
        int i=0;

        if(databasefile == NULL)
                return -1;

        for(i=0;i<8;i++)
                fread(&student[i],sizeof(struct card_information),1,databasefile);

        fclose(databasefile);
        return 0;
}
int write_to_database()
{
        FILE *databasefile=fopen("database.dat","w+");
        int i=0;

        if(databasefile == NULL)
                return -1;

        for(i=0;i<8;i++)
                fwrite(&student[i],sizeof(struct card_information),1,databasefile);

        fclose(databasefile);
        return 0;
}
#endif
