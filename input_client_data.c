/* Module to input clients' data */


#include "clients.h"

void input_client_data(struct Client *cl)
{
    printf("Enter client's subscription ID: ");
    scanf("%d", &cl->subscribtion_id);
    printf("\n");

    printf("First name: \n");
    scanf("%s", cl->name.first_name);
    printf("\n");
    fflush(stdin);

    printf("Last name: \n");
    scanf("%s", cl->name.last_name);
    printf("\n");
    fflush(stdin);

    //by default the clients have not paid their month tax
    cl->paid=false;
    //validate the sum client owns is not negative number

    do
    {
        printf("Month tax the client owns: ");
        scanf("%f", &cl->month_tax);

    }while (cl->month_tax <= 0);
    
}