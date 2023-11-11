/* Module to output the sum of all unpaid month taxes */

#include "clients.h"

void sum_of_unpaid_taxes(struct Client *cl, int num_of_clients)
{
    int i;
    float unpaid_sum = 0.0;

    for(i=0; i<num_of_clients; i++)
    {
        if(!cl[i].paid) // it means the client haven't paid
        {
            unpaid_sum+=cl[i].month_tax;
        }
    }

    printf("The sum of all unpaid month taxes is: %f\n", unpaid_sum);
}