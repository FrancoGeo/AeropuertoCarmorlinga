#include "TicketsDb.h"

#include <mysql.h>
#include <string>
#include <iostream>

using namespace System;
using namespace System::Collections::Generic;

TicketsDb::TicketsDb() {
	// Constructor vacío
}

TicketsDb::~TicketsDb() {
	// Destructor vacío
}

List<Ticket^>^ TicketsDb::MostrarTodosLosTickets() {
	List<Ticket^>^ tickets = gcnew List<Ticket^>();

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		std::cout << "Error al inicializar MySQL." << std::endl;
		return tickets;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		std::cout << "Error de conexión: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return tickets;
	}

	std::string query = "SELECT * FROM tickets";
	if (mysql_query(conn, query.c_str())) {
		std::cout << "Error en la consulta: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return tickets;
	}

	MYSQL_RES* res = mysql_store_result(conn);
	if (!res) {
		std::cout << "Error al obtener resultados: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return tickets;
	}

	MYSQL_ROW row;
	while ((row = mysql_fetch_row(res))) {
		Ticket^ ticket = gcnew Ticket();
		ticket->inicio = gcnew System::String(row[0]);
		ticket->destino = gcnew System::String(row[1]);
		ticket->fechaAbordaje = gcnew System::String(row[2]);
		ticket->horaAbordaje = gcnew System::String(row[3]);
		ticket->horaLlegada = gcnew System::String(row[4]);
		ticket->reservacion = gcnew System::String(row[5]);
		ticket->bookingNumber = row[6] ? atoi(row[6]) : 0;
		ticket->vuelo = gcnew System::String(row[7]);
		ticket->asiento = gcnew System::String(row[8]);
		ticket->operador = gcnew System::String(row[9]);
		tickets->Add(ticket);
	}

	mysql_free_result(res);
	mysql_close(conn);
	return tickets;
}

bool TicketsDb::CrearTicket(
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
) {
	// Convertir System::String^ a std::string
	IntPtr inicioPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inicio);
	IntPtr destinoPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(destino);
	IntPtr fechaPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fechaAbordaje);
	IntPtr horaAbPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(horaAbordaje);
	IntPtr horaLlPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(horaLlegada);
	IntPtr reservPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(reservacion);
	IntPtr vueloPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(vuelo);
	IntPtr asientoPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(asiento);
	IntPtr operadorPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(operador);

	std::string inicioStr = static_cast<char*>(inicioPtr.ToPointer());
	std::string destinoStr = static_cast<char*>(destinoPtr.ToPointer());
	std::string fechaStr = static_cast<char*>(fechaPtr.ToPointer());
	std::string horaAbStr = static_cast<char*>(horaAbPtr.ToPointer());
	std::string horaLlStr = static_cast<char*>(horaLlPtr.ToPointer());
	std::string reservStr = static_cast<char*>(reservPtr.ToPointer());
	std::string vueloStr = static_cast<char*>(vueloPtr.ToPointer());
	std::string asientoStr = static_cast<char*>(asientoPtr.ToPointer());
	std::string operadorStr = static_cast<char*>(operadorPtr.ToPointer());

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		std::cout << "Error al inicializar MySQL." << std::endl;
		return false;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		std::cout << "Error de conexión: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return false;
	}

	std::string query =
		"INSERT INTO tickets (inicio, destino, fechaAbordaje, horaAbordaje, horaLlegada, reservacion, bookingNumber, vuelo, asiento, operador) VALUES ('" +
		inicioStr + "', '" +
		destinoStr + "', '" +
		fechaStr + "', '" +
		horaAbStr + "', '" +
		horaLlStr + "', '" +
		reservStr + "', " +
		std::to_string(bookingNumber) + ", '" +
		vueloStr + "', '" +
		asientoStr + "', '" +
		operadorStr + "')";

	bool success = (mysql_query(conn, query.c_str()) == 0);

	if (!success) {
		std::cout << "Error al insertar el ticket: " << mysql_error(conn) << std::endl;
	}

	mysql_close(conn);

	// Liberar memoria
	System::Runtime::InteropServices::Marshal::FreeHGlobal(inicioPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(destinoPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(fechaPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(horaAbPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(horaLlPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(reservPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(vueloPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(operadorPtr);

	return success;
}

bool TicketsDb::UpdateTicket(
	int bookingNumber,
	String^ inicio,
	String^ destino,
	String^ fechaAbordaje,
	String^ horaAbordaje,
	String^ horaLlegada,
	String^ reservacion,
	int newBookingNumber,
	String^ vuelo,
	String^ asiento,
	String^ operador
) {
	// Convertir System::String^ a std::string
	IntPtr inicioPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inicio);
	IntPtr destinoPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(destino);
	IntPtr fechaPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fechaAbordaje);
	IntPtr horaAbPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(horaAbordaje);
	IntPtr horaLlPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(horaLlegada);
	IntPtr reservPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(reservacion);
	IntPtr vueloPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(vuelo);
	IntPtr asientoPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(asiento);
	IntPtr operadorPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(operador);

	std::string inicioStr = static_cast<char*>(inicioPtr.ToPointer());
	std::string destinoStr = static_cast<char*>(destinoPtr.ToPointer());
	std::string fechaStr = static_cast<char*>(fechaPtr.ToPointer());
	std::string horaAbStr = static_cast<char*>(horaAbPtr.ToPointer());
	std::string horaLlStr = static_cast<char*>(horaLlPtr.ToPointer());
	std::string reservStr = static_cast<char*>(reservPtr.ToPointer());
	std::string vueloStr = static_cast<char*>(vueloPtr.ToPointer());
	std::string asientoStr = static_cast<char*>(asientoPtr.ToPointer());
	std::string operadorStr = static_cast<char*>(operadorPtr.ToPointer());

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		std::cout << "Error al inicializar MySQL." << std::endl;
		return false;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		std::cout << "Error de conexión: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return false;
	}

	std::string query =
		"UPDATE tickets SET "
		"inicio='" + inicioStr +
		"', destino='" + destinoStr +
		"', fechaAbordaje='" + fechaStr +
		"', horaAbordaje='" + horaAbStr +
		"', horaLlegada='" + horaLlStr +
		"', reservacion='" + reservStr +
		"', bookingNumber=" + std::to_string(newBookingNumber) +
		", vuelo='" + vueloStr +
		"', asiento='" + asientoStr +
		"', operador='" + operadorStr +
		"' WHERE bookingNumber=" + std::to_string(bookingNumber);

	bool success = (mysql_query(conn, query.c_str()) == 0);

	if (!success) {
		std::cout << "Error al actualizar el ticket: " << mysql_error(conn) << std::endl;
	}

	mysql_close(conn);

	// Liberar memoria
	System::Runtime::InteropServices::Marshal::FreeHGlobal(inicioPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(destinoPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(fechaPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(horaAbPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(horaLlPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(reservPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(vueloPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(operadorPtr);

	return success;
}

bool TicketsDb::DeleteTicket(int bookingNumber) {
	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		std::cout << "Error al inicializar MySQL." << std::endl;
		return false;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		std::cout << "Error de conexión: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return false;
	}
	std::string query = "DELETE FROM tickets WHERE bookingNumber=" + std::to_string(bookingNumber);
	bool success = (mysql_query(conn, query.c_str()) == 0);
	if (!success) {
		std::cout << "Error al eliminar el ticket: " << mysql_error(conn) << std::endl;
	}
	mysql_close(conn);
	return success;
}