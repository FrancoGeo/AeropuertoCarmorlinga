#include "ClientesDb.h"
#include <mysql.h>
#include <string>
#include <iostream>

using namespace System;
using namespace System::Collections::Generic;

ClientesDb::ClientesDb() {}

ClientesDb::~ClientesDb() {}

bool ClientesDb::InsertCliente(String^ nombre, String^ bookingNumber, String^ asiento, String^ reservacion) {
	IntPtr nombrePtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(nombre);
	IntPtr bookingNumberPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(bookingNumber);
	IntPtr asientoPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(asiento);
	IntPtr reservacionPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(reservacion);

	std::string nombreStr = static_cast<char*>(nombrePtr.ToPointer());
	std::string bookingNumberStr = static_cast<char*>(bookingNumberPtr.ToPointer());
	std::string asientoStr = static_cast<char*>(asientoPtr.ToPointer());
	std::string reservacionStr = static_cast<char*>(reservacionPtr.ToPointer());

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		std::cout << "Error al inicializar MySQL." << std::endl;
		System::Runtime::InteropServices::Marshal::FreeHGlobal(nombrePtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(bookingNumberPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(reservacionPtr);
		return false;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		std::cout << "Error de conexión: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(nombrePtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(bookingNumberPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(reservacionPtr);
		return false;
	}

	std::string query = "INSERT INTO clientes (nombre, bookingNumber, asiento, reservacion) VALUES ('" +
		nombreStr + "', '" +
		bookingNumberStr + "', '" +
		asientoStr + "', '" +
		reservacionStr + "')";

	bool success = (mysql_query(conn, query.c_str()) == 0);

	if (!success) {
		std::cout << "Error al insertar el cliente: " << mysql_error(conn) << std::endl;
	}

	mysql_close(conn);

	System::Runtime::InteropServices::Marshal::FreeHGlobal(nombrePtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(bookingNumberPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(reservacionPtr);

	return success;
}

List<Cliente^>^ ClientesDb::GetAllInBookin(int bookin) {
	auto list = gcnew List<Cliente^>();

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		std::cout << "Error al inicializar MySQL." << std::endl;
		return list;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		std::cout << "Error de conexión: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return list;
	}

	std::string query = "SELECT nombre, bookingNumber, asiento, reservacion FROM clientes WHERE bookingNumber = " + std::to_string(bookin);

	if (mysql_query(conn, query.c_str())) {
		std::cout << "Error en la consulta: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return list;
	}

	MYSQL_RES* res = mysql_store_result(conn);
	if (!res) {
		std::cout << "Error al obtener resultados: " << mysql_error(conn) << std::endl;
		mysql_close(conn);
		return list;
	}

	MYSQL_ROW row;
	while ((row = mysql_fetch_row(res))) {
		Cliente^ cliente = gcnew Cliente();
		cliente->nombre = gcnew System::String(row[0]);
		cliente->bookingNumber = gcnew System::String(row[1]);
		cliente->asiento = gcnew System::String(row[2]);
		cliente->reservacion = gcnew System::String(row[3]);
		list->Add(cliente);
	}

	mysql_free_result(res);
	mysql_close(conn);
	return list;
}

bool ClientesDb::UpdateCliente(int id, String^ nombre, String^ bookingNumber, String^ asiento, String^ reservacion) {
	IntPtr nombrePtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(nombre);
	IntPtr bookingNumberPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(bookingNumber);
	IntPtr asientoPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(asiento);
	IntPtr reservacionPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(reservacion);

	std::string nombreStr = static_cast<char*>(nombrePtr.ToPointer());
	std::string bookingNumberStr = static_cast<char*>(bookingNumberPtr.ToPointer());
	std::string asientoStr = static_cast<char*>(asientoPtr.ToPointer());
	std::string reservacionStr = static_cast<char*>(reservacionPtr.ToPointer());

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) {
		System::Runtime::InteropServices::Marshal::FreeHGlobal(nombrePtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(bookingNumberPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(reservacionPtr);
		return false;
	}
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		mysql_close(conn);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(nombrePtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(bookingNumberPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(reservacionPtr);
		return false;
	}

	std::string query = "UPDATE clientes SET nombre='" + nombreStr +
		"', bookingNumber='" + bookingNumberStr +
		"', asiento='" + asientoStr +
		"', reservacion='" + reservacionStr +
		"' WHERE id=" + std::to_string(id);

	bool success = (mysql_query(conn, query.c_str()) == 0);

	if (!success) {
		std::cout << "Error al actualizar el cliente: " << mysql_error(conn) << std::endl;
	}

	mysql_close(conn);

	System::Runtime::InteropServices::Marshal::FreeHGlobal(nombrePtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(bookingNumberPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(asientoPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(reservacionPtr);

	return success;
}

bool ClientesDb::DeleteCliente(int id) {
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

	std::string query = "DELETE FROM clientes WHERE id=" + std::to_string(id);
	bool success = (mysql_query(conn, query.c_str()) == 0);

	if (!success) {
		std::cout << "Error al eliminar el cliente: " << mysql_error(conn) << std::endl;
	}

	mysql_close(conn);
	return success;
}
