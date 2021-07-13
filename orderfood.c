#include <stdio.h>
#include "prototype.h"
#include <stdlib.h>
#include <conio.h>

void orderfood(void)
{
    int choice;
    int again;
    int quantity;
    double total=0;

    printf("\t___________________________________________________________\n");
    printf("\t\t\tFOOD MENU\n");
    printf("\t___________________________________________________________\n");
    printf("\tInput Number if Selected Menu\n\n");

    char s;
    FILE*foodmenu;

    foodmenu=fopen("menu.txt", "r");
    
    while((s = getc(foodmenu)) != EOF)
    {
        printf("%c",s);
    }
    fclose(foodmenu);

    printf("\n\n\t#0 Back to Main Menu");
    printf("\n\tEnter your choice please-->");

    printf("\n\nInput Customer Order:");
    printf("\n\n");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Quantity: ");
        scanf("%d", &quantity);
        total=total+75*(quantity);
        printf("\n");
        printf("\tPress 1 to order Again:\n\tPress 2 to get your TOTAL:\n\n\n\tEnter Your Choice-->");
        scanf("%d", &again);
        printf("\n");
        if(again==1)
        {
            printf("\n\n");
            orderfood();
        }
        else if (again==2)
        {
            printf("Your Total Amount is: %.2f\n\n", total);

            int totl = total;
            FILE*ttl;
            ttl=fopen("order.txt","a");
            fprintf(ttl, "\nGrand Total:%d\n",totl);
            fclose(ttl);
        }
    
        customerdetails();
        
    }
    else if (choice==2)
        {
        printf("Quantity: ");
        scanf("%d", &quantity);
        total=total+25*(quantity);
        printf("\n");
        printf("\tPress 1 to order Again:\n\tPress 2 to get your TOTAL:\n\n\n\tEnter Your Choice-->");
        scanf("%d", &again);
        printf("\n");
        if(again==1)
        {
            printf("\n\n");
            orderfood();
        }
        else if (again==2){
            printf("Your Total Amount is: %.2f\n\n", total);

            int totl = total;
            FILE*ttl;
            ttl=fopen("order.txt","a");
            fprintf(ttl, "\nGrand Total:%d\n",totl);
            fclose(ttl);}
        
        customerdetails();
        }

        else if (choice==0)
        {
            \\Replace "clear" with "cls" for windows users
            system("clear");
            customer();
        }
        else
        {
                printf("\tWrong input! Kindly input the correct option...\n\n");
                if(getchar())
                orderfood(); 
        }

}
