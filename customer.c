#include <stdio.h>
#include "prototype.h"
#include <stdlib.h>
#include <conio.h>

void customer(void)
{
    system("clear");
    printf("\t___________________________________________________________\n");
    printf("\tYou are about to-->\n\t1. Order Food\n\t2. View Order\n\t3. Back to Main Menu\n\n\n\tEnter Your Choice-->");
    
    int c;
    scanf("%d",&c);
    

    if(c==1)
    {
        //Replace "clear" with "cls" for windows users
        system("clear");
        orderfood();
        
    }
    else if (c==2)
    {
        //Replace "clear" with "cls" for windows users
        system("clear");
        printf("vieworder();");
        if(getchar());
        customer();

    }
    else if (c==3)
    {
        //Replace "clear" with "cls" for windows users
        system("clear");
        mainmenu();
    }
    else
    {
        printf("\tWrong input! Kindly input the correct option...\n\n");
        customer();
    }
}
