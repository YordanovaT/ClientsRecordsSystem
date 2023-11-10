#include "clients.h"


void change_status(struct Client *cl)
{
    int temp;
    printf("Current paid status for client: %s\n", cl->paid ? "Paid":"Not paid");

    if(cl->paid)
    {
        do
        {
            printf("\n\n Enter 0 to change the status to not paid: ");
            scanf("%d", &temp);
        }while(temp!=0);

        cl->paid=temp;
    }
    else
    {
        do
        {
            printf("\n\n Enter 1 to change the status to paid: ");
            scanf("%d", &temp);
        }while(temp!=1);

        cl->paid=temp;
        
    }
}