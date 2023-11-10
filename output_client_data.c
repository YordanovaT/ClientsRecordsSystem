/* Module to output client's data */

#include "clients.h"

void output_client_data(struct Client *cl)
{
    printf("Client's subscribtion ID: %d\n", cl->subscribtion_id);
    printf("Client name: %s %s \n", cl->name.first_name, cl->name.last_name);
    printf("Month tax: %f \t Paid month tax: %s\n", cl->month_tax, cl->paid ? "Paid":"Not paid");

}