#include <stdio.h>
#include "prototype.h"
#include <stdlib.h>
#include <conio.h>

void customerdetails(void)
{
    char fname[25];
    char lname[25];
    long long int contact;

    
    customerdetails();
    

    // printf("\tInput Customer Details\n");
    // printf("\tFirst Name: ");
    // scanf("%s", fname);
    // printf("\n");

    // printf("\tLast Name: ");
    // scanf("%s", lname);
    // printf("\n");

    // printf("\tContact: ");
    // scanf("%lld", &contact);
    // printf("\nSOmer");

    printf("Your Details Entered Are-->");

    printf("\n\n\n");
    printf("t\tYour order will be ready in 5 minutes..\n");
    printf("\nThank You.");
    printf("\t___________________________________________________________\n");


    // FILE*cust;
    // cust=fopen("order.txt", "a");
    // fprintf(cust, "Order by: %s %s \nContact: %lld\n", fname, lname, contact);
    // fclose(cust);
    
    printf("-->First Name:%s\n", fname);

    if(getchar())
    {
        mainmenu();
    }
}