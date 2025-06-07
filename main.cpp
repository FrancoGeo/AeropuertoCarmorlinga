#include "LoginForm.h"
#include "ListaDeVuelos.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AeropuertosCarmorlinga::LoginForm loginForm;


	Application::Run(% loginForm);

	return 0;
}
