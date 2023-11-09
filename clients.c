/* Program to perform clients records management system */


#include "clients.h"

int main()
{
    int choice, i;
    int subscr_id;
    bool flag = false;

    
    int clients_count;
    printf("Enter number of clients: ");
    scanf("%d", &clients_count);
    printf("\n\n");
    struct Client clients[clients_count];

    while(1)
    {
        printf("-------------------------------------- MENU --------------------------------------\n");
        printf("Do you want to perform an operation? Choose an option 0-2.\n");
        printf("1. Input data for clients.\n");
        printf("2. Output data for clients.\n");
        printf("0. Exit program.\n");

        scanf("%d", &choice);

        if(choice == 0)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            
            
            for (i = 0; i < clients_count; i++)
            {
                printf("\n------------------------------- INPUTTING CLIENT'S DATA -------------------------------\n");
                input_client_data(&clients[i]);
                printf("\n----------------------------------------------------------------------------------------\n");
            }
            
            break;

        case 2:

            for(i=0; i<clients_count; i++)
            {                
                printf("\n------------------------------- OUTPUTTING CLIENT'S DATA -------------------------------\n");
                output_client_data(&clients[i]);
                printf("\n----------------------------------------------------------------------------------------\n");
                           
            }
            break;

        default:
            break;
        }
    }
}