#pragma once

#include "ListaDeVuelos.h"
#include "UsersDb.h"

namespace AeropuertosCarmorlinga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
		}

	protected:
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inputUserName;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::Label^ inputPassword;
	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ registerButton;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputUserName = (gcnew System::Windows::Forms::TextBox());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->inputPassword = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(712, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inicio de Sesión";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Username->Location = System::Drawing::Point(160, 120);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(80, 25);
			this->Username->TabIndex = 2;
			this->Username->Text = L"Usuario";
			this->Username->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// inputUserName
			// 
			this->inputUserName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inputUserName->Location = System::Drawing::Point(260, 120);
			this->inputUserName->Name = L"inputUserName";
			this->inputUserName->Size = System::Drawing::Size(300, 29);
			this->inputUserName->TabIndex = 1;
			this->inputUserName->TextChanged += gcnew System::EventHandler(this, &LoginForm::inputUserName_TextChanged);
			// 
			// inputPassword
			// 
			this->inputPassword->AutoSize = true;
			this->inputPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inputPassword->Location = System::Drawing::Point(120, 180);
			this->inputPassword->Name = L"inputPassword";
			this->inputPassword->Size = System::Drawing::Size(120, 25);
			this->inputPassword->TabIndex = 3;
			this->inputPassword->Text = L"Contraseña";
			this->inputPassword->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->inputPassword->Click += gcnew System::EventHandler(this, &LoginForm::inputPassword_Click);
			// 
			// passwordInput
			// 
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->passwordInput->Location = System::Drawing::Point(260, 180);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(300, 29);
			this->passwordInput->TabIndex = 4;
			this->passwordInput->UseSystemPasswordChar = true;
			// 
			// LoginButton
			// 
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->LoginButton->Location = System::Drawing::Point(260, 250);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(140, 40);
			this->LoginButton->TabIndex = 5;
			this->LoginButton->Text = L"Iniciar sesión";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &LoginForm::LoginButton_Click);
			// 
			// registerButton
			// 
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->registerButton->Location = System::Drawing::Point(420, 250);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(140, 40);
			this->registerButton->TabIndex = 6;
			this->registerButton->Text = L"Registrarse";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerButton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(712, 350);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->inputPassword);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->inputUserName);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void inputUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = inputUserName->Text;
		String^ password = passwordInput->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show(
				"Por favor, complete todos los campos.",
				"Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		UsersDb^ usersDb = gcnew UsersDb();
		if (!usersDb->AuthenticateUser(username, password)) {
			MessageBox::Show(
				"Credenciales incorrectas. Intente de nuevo.",
				"Error de autenticación",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		ListaDeVuelos^ vuelosForm = gcnew ListaDeVuelos();
		vuelosForm->ShowDialog();

		this->Show();
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inputPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (inputUserName->Text->Length == 0 || passwordInput->Text->Length == 0) {
			MessageBox::Show(
				"Por favor, complete todos los campos.",
				"Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		UsersDb^ usersDb = gcnew UsersDb();

		if (usersDb->InsertUser(passwordInput->Text, inputUserName->Text)) {
			MessageBox::Show(
				"Usuario registrado exitosamente.",
				"Registro exitoso",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show(
				"Error al registrar el usuario. Intente de nuevo.",
				"Error de registro",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
