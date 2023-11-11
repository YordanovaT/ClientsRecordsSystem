/* Module to output the clients with unpaid month taxes */

#include "clients.h"

void clients_not_paid(struct Client *cl, int num_of_clients)
{
    int i;
    for(i=0; i<num_of_clients; i++)
    {
        if(!cl[i].paid)
        {
            printf("\nSubscription ID: %d \t Name: %s %s \t Month tax: %f", 
            cl[i].subscribtion_id, cl[i].name.first_name, cl[i].name.last_name, cl[i].month_tax);
            printf("\n\n----------------------------------------------------------------------------------------\n");
        }
    }
}