clients.out: clients.o input_client_data.o output_client_data.o change_status.o highest_month_tax.o sum_of_unpaid_taxes.o clients_not_paid.o
	gcc clients.o input_client_data.o output_client_data.o change_status.o highest_month_tax.o sum_of_unpaid_taxes.o clients_not_paid.o -o clients.out

clients.o: clients.c
	gcc -c clients.c

input_client_data.o: input_client_data.c
	gcc -c input_client_data.c

output_client_data.o: output_client_data.c
	gcc -c output_client_data.c

change_status.o: change_status.c
	gcc -c change_status.c

highest_month_tax.o: highest_month_tax.c
	gcc -c highest_month_tax.c

sum_of_unpaid_taxes.o: sum_of_unpaid_taxes.c
	gcc -c sum_of_unpaid_taxes.c

clients_not_paid.o: clients_not_paid.c
	gcc -c clients_not_paid.c

clean:
	rm *.o clients.out