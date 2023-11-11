#include "clients.h"

void highest_month_tax(struct Client *cl, int num_of_clients)
{
    int i, id;
    float temp= 0.0;
    float highest_tax=0.0;


    for(i=0; i< num_of_clients; i++)
    {
        if(cl[i].month_tax > highest_tax)
        {
            highest_tax = cl[i].month_tax;
            id=cl[i].subscribtion_id;
        }
    }

    printf("The highest month tax is: %f. It belongs to the client with sibscription ID: %d\n", highest_tax, id);
}