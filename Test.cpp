#include <mysql.h>
#include <iostream>
#include <string>

#include "TicketsDb.h"


using namespace System;

int main(void) {
	TicketsDb^ ticketsDb = gcnew TicketsDb();

	auto tickets = ticketsDb->MostrarTodosLosTickets();
	for each (Ticket ^ t in tickets) {
		Console::WriteLine("Booking: {0} - {1} -> {2}", t->bookingNumber, t->inicio, t->destino);
	}

	system("pause");
	return 0;
}
