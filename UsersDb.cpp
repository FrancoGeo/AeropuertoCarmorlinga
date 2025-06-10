#include "UsersDb.h"
#include <mysql.h>
#include <string>

using namespace System;

UsersDb::UsersDb() {
	// Constructor vacío
}

UsersDb::~UsersDb() {
	// Destructor vacío
}

bool UsersDb::AuthenticateUser(System::String^ email, System::String^ password) {
	// Convertir System::String^ a std::string
	IntPtr emailPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(email);
	IntPtr passPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(password);

	std::string emailStr = static_cast<char*>(emailPtr.ToPointer());
	std::string passStr = static_cast<char*>(passPtr.ToPointer());

	// Conexión a MySQL
	MYSQL* conn = mysql_init(nullptr);
	if (!conn) return false;
	if (!mysql_real_connect(conn, "127.0.0.1", "root", "root123", "tickets", 3306, nullptr, 0)) {
		mysql_close(conn);
		return false;
	}

	// Consulta SQL para autenticar usuario
	std::string query = "SELECT COUNT(*) FROM users WHERE email='" + emailStr + "' AND password='" + passStr + "'";
	if (mysql_query(conn, query.c_str())) {
		mysql_close(conn);
		return false;
	}

	MYSQL_RES* res = mysql_store_result(conn);
	if (!res) {
		mysql_close(conn);
		return false;
	}

	MYSQL_ROW row = mysql_fetch_row(res);
	bool authenticated = (row && atoi(row[0]) > 0);

	mysql_free_result(res);
	mysql_close(conn);

	// Liberar memoria de los strings
	System::Runtime::InteropServices::Marshal::FreeHGlobal(emailPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(passPtr);

	return authenticated;
}

bool UsersDb::InsertUser(System::String^ password, System::String^ email) {
	IntPtr emailPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(email);
	IntPtr passPtr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(password);
	std::string emailStr = static_cast<char*>(emailPtr.ToPointer());
	std::string passStr = static_cast<char*>(passPtr.ToPointer());

	MYSQL* conn = mysql_init(nullptr);
	if (!conn) return false;
	if (!mysql_real_connect(conn, "localhost", "root", "root123", "tickets", 3306, nullptr, 0)) {
		mysql_close(conn);
		return false;
	}

	std::string query = "INSERT INTO users (email, password) VALUES ('" + emailStr + "', '" + passStr + "')";
	bool success = (mysql_query(conn, query.c_str()) == 0);

	mysql_close(conn);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(emailPtr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(passPtr);

	return success;
}
