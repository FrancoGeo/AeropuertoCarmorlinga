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
};

public ref class TicketsDb {
public:
	TicketsDb();
	~TicketsDb();

	List<Ticket^>^ MostrarTodosLosTickets();
	int GetPrimaryId();

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
		String^ operador
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
		String^ operador
	);

	bool DeleteTicket(int bookingNumber);

};
