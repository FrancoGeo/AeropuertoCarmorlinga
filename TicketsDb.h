#pragma once
#include <mysql.h>

using namespace System;
using namespace System::Collections::Generic;

// Tipo de datos para representar un ticket
public ref class Ticket {
public:
	String^ inicio;
	String^ destino;
	String^ fechaAbordaje;
	String^ horaAbordaje;
	String^ horaLlegada;
	String^ reservacion;
	int bookingNumber;
	String^ vuelo;
	String^ asiento;
	String^ operador;
	String^ clienteName;
};

public ref class TicketsDb {
public:
	TicketsDb();
	~TicketsDb();

	List<Ticket^>^ MostrarTodosLosTickets();

	bool CrearTicket(
		String^ inicio,
		String^ destino,
		String^ fechaAbordaje,
		String^ horaAbordaje,
		String^ horaLlegada,
		String^ reservacion,
		int bookingNumber,
		String^ vuelo,
		String^ asiento,
		String^ operador,
		String^ clienteName
	);

	bool UpdateTicket(
		int id,
		String^ inicio,
		String^ destino,
		String^ fechaAbordaje,
		String^ horaAbordaje,
		String^ horaLlegada,
		String^ reservacion,
		int bookingNumber,
		String^ vuelo,
		String^ asiento,
		String^ operador,
		String^ clienteName
	);

	bool DeleteTicket(int bookingNumber);

};
