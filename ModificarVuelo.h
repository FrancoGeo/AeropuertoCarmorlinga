#pragma once

#include "TicketsDb.h"

namespace AeropuertosCarmorlinga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModificarVuelo
	/// </summary>
	public ref class ModificarVuelo : public System::Windows::Forms::Form
	{
	public:
		ModificarVuelo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModificarVuelo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ clienteNameInput;
	protected:
	private: System::Windows::Forms::Label^ Client;
	private: System::Windows::Forms::TextBox^ VuelosInput;
	private: System::Windows::Forms::Label^ Vuelo;
	private: System::Windows::Forms::TextBox^ reseInput;
	private: System::Windows::Forms::Label^ ReservacionInput;
	private: System::Windows::Forms::DateTimePicker^ horaLlegada;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ bookinNumber;
	private: System::Windows::Forms::Label^ bookingNumber;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ operadorInput;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ AsientoInput;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ horaAbordajeInput;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ fechaAbordajeInput;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ destinoInput;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ inicioInput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ identificadorBookinInput;

	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->clienteNameInput = (gcnew System::Windows::Forms::TextBox());
			this->Client = (gcnew System::Windows::Forms::Label());
			this->VuelosInput = (gcnew System::Windows::Forms::TextBox());
			this->Vuelo = (gcnew System::Windows::Forms::Label());
			this->reseInput = (gcnew System::Windows::Forms::TextBox());
			this->ReservacionInput = (gcnew System::Windows::Forms::Label());
			this->horaLlegada = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->bookinNumber = (gcnew System::Windows::Forms::TextBox());
			this->bookingNumber = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->operadorInput = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->AsientoInput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->horaAbordajeInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fechaAbordajeInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->destinoInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->inicioInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->identificadorBookinInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// clienteNameInput
			// 
			this->clienteNameInput->Location = System::Drawing::Point(474, 420);
			this->clienteNameInput->Name = L"clienteNameInput";
			this->clienteNameInput->Size = System::Drawing::Size(169, 20);
			this->clienteNameInput->TabIndex = 50;
			// 
			// Client
			// 
			this->Client->AutoSize = true;
			this->Client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Client->Location = System::Drawing::Point(470, 397);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(140, 20);
			this->Client->TabIndex = 49;
			this->Client->Text = L"Nombre de Cliente";
			// 
			// VuelosInput
			// 
			this->VuelosInput->Location = System::Drawing::Point(474, 368);
			this->VuelosInput->Name = L"VuelosInput";
			this->VuelosInput->Size = System::Drawing::Size(169, 20);
			this->VuelosInput->TabIndex = 48;
			// 
			// Vuelo
			// 
			this->Vuelo->AutoSize = true;
			this->Vuelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vuelo->Location = System::Drawing::Point(470, 345);
			this->Vuelo->Name = L"Vuelo";
			this->Vuelo->Size = System::Drawing::Size(50, 20);
			this->Vuelo->TabIndex = 47;
			this->Vuelo->Text = L"Vuelo";
			// 
			// reseInput
			// 
			this->reseInput->Location = System::Drawing::Point(474, 302);
			this->reseInput->Name = L"reseInput";
			this->reseInput->Size = System::Drawing::Size(169, 20);
			this->reseInput->TabIndex = 46;
			// 
			// ReservacionInput
			// 
			this->ReservacionInput->AutoSize = true;
			this->ReservacionInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReservacionInput->Location = System::Drawing::Point(470, 279);
			this->ReservacionInput->Name = L"ReservacionInput";
			this->ReservacionInput->Size = System::Drawing::Size(97, 20);
			this->ReservacionInput->TabIndex = 45;
			this->ReservacionInput->Text = L"Reservacion";
			// 
			// horaLlegada
			// 
			this->horaLlegada->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->horaLlegada->Location = System::Drawing::Point(474, 252);
			this->horaLlegada->Name = L"horaLlegada";
			this->horaLlegada->ShowUpDown = true;
			this->horaLlegada->Size = System::Drawing::Size(169, 20);
			this->horaLlegada->TabIndex = 44;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(470, 229);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 20);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Hora de llegada";
			// 
			// bookinNumber
			// 
			this->bookinNumber->Location = System::Drawing::Point(474, 199);
			this->bookinNumber->Name = L"bookinNumber";
			this->bookinNumber->Size = System::Drawing::Size(169, 20);
			this->bookinNumber->TabIndex = 42;
			// 
			// bookingNumber
			// 
			this->bookingNumber->AutoSize = true;
			this->bookingNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookingNumber->Location = System::Drawing::Point(470, 176);
			this->bookingNumber->Name = L"bookingNumber";
			this->bookingNumber->Size = System::Drawing::Size(138, 20);
			this->bookingNumber->TabIndex = 41;
			this->bookingNumber->Text = L"Numero de bookin";
			// 
			// button2
			// 
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(474, 562);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 30);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarVuelo::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(364, 562);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 30);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarVuelo::button1_Click);
			// 
			// operadorInput
			// 
			this->operadorInput->Location = System::Drawing::Point(299, 483);
			this->operadorInput->Name = L"operadorInput";
			this->operadorInput->Size = System::Drawing::Size(169, 20);
			this->operadorInput->TabIndex = 38;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(295, 460);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 20);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Operador";
			// 
			// AsientoInput
			// 
			this->AsientoInput->Location = System::Drawing::Point(299, 420);
			this->AsientoInput->Name = L"AsientoInput";
			this->AsientoInput->Size = System::Drawing::Size(169, 20);
			this->AsientoInput->TabIndex = 36;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(295, 397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Asiento";
			// 
			// horaAbordajeInput
			// 
			this->horaAbordajeInput->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->horaAbordajeInput->Location = System::Drawing::Point(299, 365);
			this->horaAbordajeInput->Name = L"horaAbordajeInput";
			this->horaAbordajeInput->ShowUpDown = true;
			this->horaAbordajeInput->Size = System::Drawing::Size(169, 20);
			this->horaAbordajeInput->TabIndex = 34;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(295, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 20);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Hora de abordaje";
			// 
			// fechaAbordajeInput
			// 
			this->fechaAbordajeInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fechaAbordajeInput->Location = System::Drawing::Point(299, 304);
			this->fechaAbordajeInput->Name = L"fechaAbordajeInput";
			this->fechaAbordajeInput->Size = System::Drawing::Size(169, 18);
			this->fechaAbordajeInput->TabIndex = 32;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(295, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 20);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Fecha de abordaje";
			// 
			// destinoInput
			// 
			this->destinoInput->Location = System::Drawing::Point(299, 252);
			this->destinoInput->Name = L"destinoInput";
			this->destinoInput->Size = System::Drawing::Size(169, 20);
			this->destinoInput->TabIndex = 30;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(295, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Destino";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(319, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(256, 39);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Modificar Vuelo";
			this->label8->Click += gcnew System::EventHandler(this, &ModificarVuelo::label8_Click);
			// 
			// inicioInput
			// 
			this->inicioInput->Location = System::Drawing::Point(299, 199);
			this->inicioInput->Name = L"inicioInput";
			this->inicioInput->Size = System::Drawing::Size(169, 20);
			this->inicioInput->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(295, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 20);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Inicio";
			// 
			// identificadorBookinInput
			// 
			this->identificadorBookinInput->Location = System::Drawing::Point(375, 137);
			this->identificadorBookinInput->Name = L"identificadorBookinInput";
			this->identificadorBookinInput->Size = System::Drawing::Size(169, 20);
			this->identificadorBookinInput->TabIndex = 52;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(371, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 20);
			this->label2->TabIndex = 51;
			this->label2->Text = L"bookin (Identificador)";
			// 
			// ModificarVuelo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 654);
			this->Controls->Add(this->identificadorBookinInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->clienteNameInput);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->VuelosInput);
			this->Controls->Add(this->Vuelo);
			this->Controls->Add(this->reseInput);
			this->Controls->Add(this->ReservacionInput);
			this->Controls->Add(this->horaLlegada);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->bookinNumber);
			this->Controls->Add(this->bookingNumber);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->operadorInput);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->AsientoInput);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->horaAbordajeInput);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->fechaAbordajeInput);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->destinoInput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->inicioInput);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarVuelo";
			this->Text = L"ModificarVuelo";
			this->Load += gcnew System::EventHandler(this, &ModificarVuelo::ModificarVuelo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModificarVuelo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inicio = inicioInput->Text;
		String^ destino = destinoInput->Text;
		String^ fechaAbordajeStr = fechaAbordajeInput->Value.ToString("yyyy-MM-dd");
		String^ horaAbordajeStr = horaAbordajeInput->Value.ToString("HH:mm:ss");
		String^ horaLlegadaStr = horaLlegada->Value.ToString("HH:mm:ss");
		String^ reservacion = reseInput->Text;
		String^ vuelo = VuelosInput->Text;
		String^ asiento = AsientoInput->Text;
		String^ operador = operadorInput->Text;
		String^ clienteName = clienteNameInput->Text;
		String^ bookinNumber = this->bookinNumber->Text;
		String^ identificadorBookinStr = this->identificadorBookinInput->Text;

		if (inicio->Length == 0 || destino->Length == 0 || fechaAbordajeStr->Length == 0 || horaAbordajeStr->Length == 0 ||
			horaLlegadaStr->Length == 0 || reservacion->Length == 0 || vuelo->Length == 0 || asiento->Length == 0 ||
			operador->Length == 0 || clienteName->Length == 0 || bookinNumber->Length == 0 || identificadorBookinStr->Length == 0) {
			MessageBox::Show("Por favor, complete todos los campos.");
			return;
		}

		int bookingNumberIdentificador;
		int newBookingNumber;
		// la conversión de String a int puede lanzar una excepción si el formato no es válido
		try {
			bookingNumberIdentificador = Convert::ToInt32(identificadorBookinStr);
			newBookingNumber = Convert::ToInt32(bookinNumber);
		}
		catch (FormatException^) {
			MessageBox::Show("El identificador y el número de booking deben ser numéricos.");
			return;
		}

		TicketsDb^ ticketsDb = gcnew TicketsDb();

		ticketsDb->UpdateTicket(
			bookingNumberIdentificador,
			inicio,
			destino,
			fechaAbordajeStr,
			horaAbordajeStr,
			horaLlegadaStr,
			reservacion,
			newBookingNumber,
			vuelo,
			asiento,
			operador,
			clienteName
		);

		if (ticketsDb) {
			MessageBox::Show("Vuelo modificado exitosamente.");
			this->Close();
		}
		else {
			MessageBox::Show("Error al modificar el vuelo. Por favor, inténtelo de nuevo.");
		}

	}

	};
}
