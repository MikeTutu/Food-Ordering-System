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
    

    printf("Your Details Entered Are-->");

    printf("\n\n\n");
    printf("t\tYour order will be ready in 5 minutes..\n");
    printf("\nThank You.");
    printf("\t___________________________________________________________\n");


    
    printf("-->First Name:%s\n", fname);

    if(getchar())
    {
        mainmenu();
    }
}
