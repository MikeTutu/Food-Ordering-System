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
    
    // int load;
    // for(load=0; load<=5000; load++)
    // {
    //     printf("\rloading :%d", load/50);
    // }

    if(c==1)
    {
        system("clear");
        orderfood();
        
    }
    else if (c==2)
    {
        system("clear");
        printf("vieworder();");
        if(getchar());
        customer();

    }
    else if (c==3)
    {
        system("clear");
        mainmenu();
    }
    else
    {
        printf("\tWrong input! Kindly input the correct option...\n\n");
        customer();
    }
}