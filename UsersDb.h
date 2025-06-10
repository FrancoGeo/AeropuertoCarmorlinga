#pragma once

ref class UsersDb {
public:
	UsersDb();
	~UsersDb();

	// CREATE
	bool InsertUser(System::String^ password, System::String^ email);

	// AUTHENTICATION
	bool AuthenticateUser(System::String^ email, System::String^ password);

};