#include <stdio.h>
#include "prototype.h"
#include <stdlib.h>
#include <conio.h>

 

void mainmenu(void)
{
    system("clear");
    printf("\t___________________________________________________________\n");
    printf("\t\t\tWelcome to Snack Board\n");
    printf("\t1. Customer Section-->\n\t2. About Us-->\n\t3. EXIT-->\n\n\n\tEnter option-->");
    printf("\t___________________________________________________________\n");

    int select;
    scanf("\t\t\t\t\t\t\t%d", &select);
    switch(select){
        case 1:
        {
            customer();
            if(getchar())
            mainmenu();
            
        }
        break;
        case 2:
        {
            printf("aboutUs();");
            if(getchar())
            mainmenu();
            
        }
        break;
        case 3:{
            system("clear");
            printf("\n\n\n");
            printf("\t___________________________________________________________\n");
            printf("\t\t\tThank You\n");
            printf("\t\t\tFeeling Hungry? Time to yum-yum\n");
            printf("\t___________________________________________________________\n");
            exit(0);
        }
        break;
        default:
        {
            if(getchar())
            mainmenu();
            
        }
    }

}