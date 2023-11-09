#ifndef CLIENTS
#define CLIENTS

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

    struct FullName
    {
        char first_name[15];
        char last_name[30];
    };

    struct Client
    {
        int subscribtion_id;
        struct FullName name;
        float month_tax;
        float sum;        
    };

    void input_client_data(struct Client *cl);
    void output_client_data(struct Client *cl);

 #endif   
    
    