#pragma once

#include "CreateFlight.h"
#include "ModificarVuelo.h"
#include "TicketsDb.h"

namespace AeropuertosCarmorlinga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ListaDeVuelos : public System::Windows::Forms::Form
	{
	public:
		ListaDeVuelos(void)
		{
			InitializeComponent();
		}

	protected:
		~ListaDeVuelos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutVuelos;
	private: System::Windows::Forms::Button^ UpdateButton;
	private: System::Windows::Forms::Button^ nuevoVuelo;

	private: Panel^ selectedVueloPanel;
	private: System::Windows::Forms::Button^ button1;

	protected:
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->flowLayoutVuelos = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->nuevoVuelo = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lista de Vuelos";
			this->label1->Click += gcnew System::EventHandler(this, &ListaDeVuelos::label1_Click);
			// 
			// flowLayoutVuelos
			// 
			this->flowLayoutVuelos->AutoScroll = true;
			this->flowLayoutVuelos->Location = System::Drawing::Point(12, 63);
			this->flowLayoutVuelos->Name = L"flowLayoutVuelos";
			this->flowLayoutVuelos->Size = System::Drawing::Size(1065, 582);
			this->flowLayoutVuelos->TabIndex = 1;
			this->flowLayoutVuelos->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListaDeVuelos::flowLayoutVuelos_Paint);
			// 
			// UpdateButton
			// 
			this->UpdateButton->Location = System::Drawing::Point(1000, 35);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(77, 25);
			this->UpdateButton->TabIndex = 2;
			this->UpdateButton->Text = L"Actualizar";
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button1_Click);
			// 
			// nuevoVuelo
			// 
			this->nuevoVuelo->Location = System::Drawing::Point(349, 12);
			this->nuevoVuelo->Name = L"nuevoVuelo";
			this->nuevoVuelo->Size = System::Drawing::Size(86, 43);
			this->nuevoVuelo->TabIndex = 3;
			this->nuevoVuelo->Text = L"Nuevo Vuelo";
			this->nuevoVuelo->UseVisualStyleBackColor = true;
			this->nuevoVuelo->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button1_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(450, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Modificar Vuelo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button1_Click_3);
			// 
			// ListaDeVuelos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1089, 657);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->nuevoVuelo);
			this->Controls->Add(this->UpdateButton);
			this->Controls->Add(this->flowLayoutVuelos);
			this->Controls->Add(this->label1);
			this->Name = L"ListaDeVuelos";
			this->Text = L"ListaDeVuelos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void flowLayoutVuelos_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void OnCancelarVueloClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn != nullptr && btn->Tag != nullptr) {
			Ticket^ ticket = dynamic_cast<Ticket^>(btn->Tag);
			if (ticket != nullptr) {
				// Mostrar información del ticket
				String^ ticketInfo =
					"===== INFORMACIÓN DEL VUELO =====\n\n" +
					"Inicio: " + ticket->inicio + "\n" +
					"Destino: " + ticket->destino + "\n" +
					"Vuelo: " + ticket->vuelo + "\n" +
					"Fecha de abordaje: " + ticket->fechaAbordaje + "\n" +
					"Hora de abordaje: " + ticket->horaAbordaje + "\n" +
					"Hora de llegada: " + ticket->horaLlegada + "\n" +
					"Reservación: " + ticket->reservacion + "\n" +
					"No. Ticket: " + ticket->bookingNumber + "\n" +
					"Asiento: " + ticket->asiento + "\n" +
					"Operador: " + ticket->operador;

				// Confirmación antes de eliminar
				if (MessageBox::Show(ticketInfo + "\n\n¿Está seguro que desea cancelar este vuelo?",
					"Confirmar cancelación", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {

					TicketsDb^ db = gcnew TicketsDb();
					bool eliminado = db->DeleteTicket(System::Convert::ToInt32(ticket->vuelo));

					if (eliminado) {
						MessageBox::Show("Vuelo cancelado correctamente.", "Cancelación", MessageBoxButtons::OK, MessageBoxIcon::Information);
						button1_Click(nullptr, nullptr); // Refresca la lista
					}
					else {
						MessageBox::Show("No se pudo cancelar el vuelo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
		}
	}

	private: String^ QuitarAcentos(String^ texto) {
		array<wchar_t>^ acentos = { L'á', L'é', L'í', L'ó', L'ú', L'Á', L'É', L'Í', L'Ó', L'Ú' };
		array<wchar_t>^ sinAcentos = { L'a', L'e', L'i', L'o', L'u', L'A', L'E', L'I', L'O', L'U' };
		for (int i = 0; i < acentos->Length; i++) {
			texto = texto->Replace(acentos[i], sinAcentos[i]);
		}
		return texto;
	}


	private: System::Void OnImprimirBoletoClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn != nullptr && btn->Tag != nullptr) {
			Ticket^ ticket = dynamic_cast<Ticket^>(btn->Tag);
			if (ticket != nullptr) {
				Form^ boardingPassForm = gcnew Form();
				boardingPassForm->Text = "Pase de abordar";
				boardingPassForm->Size = Drawing::Size(800, 370);
				boardingPassForm->StartPosition = FormStartPosition::CenterParent;
				boardingPassForm->MaximizeBox = false;

				Panel^ mainPanel = gcnew Panel();
				mainPanel->Dock = DockStyle::Fill;
				mainPanel->BackColor = Color::White;

				// Titulo
				Label^ title = gcnew Label();
				title->Text = "PASE DE ABORDAR";
				title->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
				title->ForeColor = Color::FromArgb(0, 153, 255);
				title->Location = Drawing::Point(20, 10);
				title->AutoSize = true;

				// Nombre del pasajero
				Label^ name = gcnew Label();
				name->Text = ticket->clienteName->ToUpper();
				name->Font = gcnew Drawing::Font("Segoe UI", 14, FontStyle::Regular);
				name->Location = Drawing::Point(20, 60);
				name->AutoSize = true;

				// Ruta
				Label^ route = gcnew Label();
				route->Text = ticket->inicio->ToUpper() + "   ->   " + ticket->destino->ToUpper();
				route->Font = gcnew Drawing::Font("Segoe UI", 12, FontStyle::Bold);
				route->Location = Drawing::Point(20, 90);
				route->AutoSize = true;

				// Codigos de aeropuerto
				String^ codeInicio = ticket->inicio->Length >= 3 ? ticket->inicio->Substring(0, 3)->ToUpper() : ticket->inicio->ToUpper();
				String^ codeDestino = ticket->destino->Length >= 3 ? ticket->destino->Substring(0, 3)->ToUpper() : ticket->destino->ToUpper();

				Label^ codes = gcnew Label();
				codes->Text = codeInicio + "        " + codeDestino;
				codes->Font = gcnew Drawing::Font("Segoe UI", 22, FontStyle::Bold);
				codes->Location = Drawing::Point(20, 120);
				codes->AutoSize = true;

				// Fecha y reservacion
				Label^ date = gcnew Label();
				date->Text = "Fecha: " + ticket->fechaAbordaje + "    Codigo de reservacion: " + ticket->reservacion;
				date->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				date->Location = Drawing::Point(20, 170);
				date->AutoSize = true;

				// Numero de ticket
				Label^ ticketNum = gcnew Label();
				ticketNum->Text = "No. de boleto: " + ticket->bookingNumber;
				ticketNum->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				ticketNum->Location = Drawing::Point(20, 190);
				ticketNum->AutoSize = true;

				// Detalles de vuelo (en una sola linea)
				Label^ details = gcnew Label();
				details->Text = "Hora de abordaje: " + ticket->horaAbordaje +
					"    Salida: " + ticket->fechaAbordaje +
					"    Llegada: " + ticket->horaLlegada +
					"    Vuelo: " + ticket->vuelo +
					"    Asiento: " + ticket->asiento +
					"    Operado por: " + ticket->operador;
				details->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				details->Location = Drawing::Point(20, 220);
				details->AutoSize = true;

				// Nota
				Label^ note = gcnew Label();
				note->Text = "Presentese en el aeropuerto 2 horas antes de la salida de su vuelo. Hora de abordaje 45 minutos antes de la salida del vuelo.\nLa puerta cierra 15 minutos antes de la salida.";
				note->Font = gcnew Drawing::Font("Segoe UI", 9, FontStyle::Bold);
				note->Location = Drawing::Point(20, 270);
				note->Size = Drawing::Size(700, 40);

				mainPanel->Controls->Add(title);
				mainPanel->Controls->Add(name);
				mainPanel->Controls->Add(route);
				mainPanel->Controls->Add(codes);
				mainPanel->Controls->Add(date);
				mainPanel->Controls->Add(ticketNum);
				mainPanel->Controls->Add(details);
				mainPanel->Controls->Add(note);

				boardingPassForm->Controls->Add(mainPanel);
				boardingPassForm->ShowDialog();
			}
		}
	}




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->flowLayoutVuelos->Controls->Clear();

		TicketsDb^ db = gcnew TicketsDb();
		List<Ticket^>^ tickets = db->MostrarTodosLosTickets();

		for each (Ticket ^ ticket in tickets) {
			System::Windows::Forms::Panel^ vueloPanel = gcnew System::Windows::Forms::Panel();
			vueloPanel->Width = 1500; // Aumenta el ancho
			vueloPanel->Height = 160; // Aumenta la altura
			vueloPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			vueloPanel->Margin = System::Windows::Forms::Padding(10);

			// Ejemplo de distribución en columnas
			int col1 = 10, col2 = 300, col3 = 600, col4 = 900, col5 = 1200;
			int row1 = 10, row2 = 40, row3 = 70, row4 = 100;

			System::Windows::Forms::Label^ nombreClienteLabel = gcnew System::Windows::Forms::Label();
			nombreClienteLabel->Text = "Cliente: " + ticket->clienteName;
			nombreClienteLabel->Location = System::Drawing::Point(col5, row1);
			nombreClienteLabel->AutoSize = true;

			System::Windows::Forms::Label^ inicioLabel = gcnew System::Windows::Forms::Label();
			inicioLabel->Text = "Inicio: " + ticket->inicio;
			inicioLabel->Location = System::Drawing::Point(col1, row1);
			inicioLabel->AutoSize = true;

			System::Windows::Forms::Label^ destinoLabel = gcnew System::Windows::Forms::Label();
			destinoLabel->Text = "Destino: " + ticket->destino;
			destinoLabel->Location = System::Drawing::Point(col1, row2);
			destinoLabel->AutoSize = true;

			System::Windows::Forms::Label^ vueloLabel = gcnew System::Windows::Forms::Label();
			vueloLabel->Text = "Vuelo: " + ticket->vuelo;
			vueloLabel->Location = System::Drawing::Point(col2, row1);
			vueloLabel->AutoSize = true;

			System::Windows::Forms::Label^ fechaLabel = gcnew System::Windows::Forms::Label();
			fechaLabel->Text = "Fecha de abordaje: " + ticket->fechaAbordaje;
			fechaLabel->Location = System::Drawing::Point(col2, row2);
			fechaLabel->AutoSize = true;

			System::Windows::Forms::Label^ horaAbordajeLabel = gcnew System::Windows::Forms::Label();
			horaAbordajeLabel->Text = "Hora de abordaje: " + ticket->horaAbordaje;
			horaAbordajeLabel->Location = System::Drawing::Point(col3, row1);
			horaAbordajeLabel->AutoSize = true;

			System::Windows::Forms::Label^ horaLlegadaLabel = gcnew System::Windows::Forms::Label();
			horaLlegadaLabel->Text = "Hora de llegada: " + ticket->horaLlegada;
			horaLlegadaLabel->Location = System::Drawing::Point(col3, row2);
			horaLlegadaLabel->AutoSize = true;

			System::Windows::Forms::Label^ reservacionLabel = gcnew System::Windows::Forms::Label();
			reservacionLabel->Text = "Reservación: " + ticket->reservacion;
			reservacionLabel->Location = System::Drawing::Point(col4, row1);
			reservacionLabel->AutoSize = true;

			System::Windows::Forms::Label^ bookingNumberLabel = gcnew System::Windows::Forms::Label();
			bookingNumberLabel->Text = "No. Ticket: " + ticket->bookingNumber;
			bookingNumberLabel->Location = System::Drawing::Point(col4, row2);
			bookingNumberLabel->AutoSize = true;

			System::Windows::Forms::Label^ asientoLabel = gcnew System::Windows::Forms::Label();
			asientoLabel->Text = "Asiento: " + ticket->asiento;
			asientoLabel->Location = System::Drawing::Point(col5, row2);
			asientoLabel->AutoSize = true;

			System::Windows::Forms::Label^ operadorLabel = gcnew System::Windows::Forms::Label();
			operadorLabel->Text = "Operador: " + ticket->operador;
			operadorLabel->Location = System::Drawing::Point(col5, row3);
			operadorLabel->AutoSize = true;

			System::Windows::Forms::Button^ pasajerosButton = gcnew System::Windows::Forms::Button();
			pasajerosButton->Text = "Ver pasajeros";
			pasajerosButton->Location = System::Drawing::Point(col4, row4);
			pasajerosButton->Width = 120;
			pasajerosButton->Height = 30;
			pasajerosButton->Tag = ticket;

			System::Windows::Forms::Button^ imprimirButton = gcnew System::Windows::Forms::Button();
			imprimirButton->Text = "Imprimir boleto";
			imprimirButton->Location = System::Drawing::Point(col3, row4);
			imprimirButton->Width = 120;
			imprimirButton->Height = 30;
			imprimirButton->Tag = ticket;
			imprimirButton->Click += gcnew System::EventHandler(this, &ListaDeVuelos::OnImprimirBoletoClick);


			System::Windows::Forms::Button^ cancelarButton = gcnew System::Windows::Forms::Button();
			cancelarButton->Text = "Cancelar vuelo";
			cancelarButton->Location = System::Drawing::Point(col5, row4);
			cancelarButton->Width = 120;
			cancelarButton->Height = 30;
			cancelarButton->Tag = ticket;
			cancelarButton->Click += gcnew System::EventHandler(this, &ListaDeVuelos::OnCancelarVueloClick);

			vueloPanel->Click += gcnew System::EventHandler(this, &ListaDeVuelos::OnVueloPanelClick);
			for each (System::Windows::Forms::Control ^ ctrl in gcnew cli::array<System::Windows::Forms::Control^> { inicioLabel, destinoLabel, vueloLabel, fechaLabel, horaAbordajeLabel, horaLlegadaLabel, reservacionLabel, bookingNumberLabel, asientoLabel, operadorLabel, nombreClienteLabel, pasajerosButton, cancelarButton }) {
				ctrl->Click += gcnew System::EventHandler(this, &ListaDeVuelos::OnVueloPanelClick);
			}
			pasajerosButton->Click += gcnew System::EventHandler(this, &ListaDeVuelos::OnVerPasajerosClick);

			vueloPanel->Controls->Add(inicioLabel);
			vueloPanel->Controls->Add(destinoLabel);
			vueloPanel->Controls->Add(vueloLabel);
			vueloPanel->Controls->Add(fechaLabel);
			vueloPanel->Controls->Add(horaAbordajeLabel);
			vueloPanel->Controls->Add(horaLlegadaLabel);
			vueloPanel->Controls->Add(reservacionLabel);
			vueloPanel->Controls->Add(bookingNumberLabel);
			vueloPanel->Controls->Add(asientoLabel);
			vueloPanel->Controls->Add(operadorLabel);
			vueloPanel->Controls->Add(nombreClienteLabel);
			vueloPanel->Controls->Add(pasajerosButton);
			vueloPanel->Controls->Add(cancelarButton);
			vueloPanel->Controls->Add(imprimirButton);

			this->flowLayoutVuelos->Controls->Add(vueloPanel);
		}
	}



	private: System::Void OnVueloPanelClick(System::Object^ sender, System::EventArgs^ e) {
		Control^ ctrl = dynamic_cast<Control^>(sender);
		Panel^ panel = nullptr;
		if (ctrl != nullptr) {
			panel = dynamic_cast<Panel^>(ctrl);
			if (panel == nullptr)
				panel = dynamic_cast<Panel^>(ctrl->Parent);
		}
		if (panel != nullptr) {
			if (selectedVueloPanel != nullptr)
				selectedVueloPanel->BackColor = SystemColors::Control;
			selectedVueloPanel = panel;
			selectedVueloPanel->BackColor = Color::LightCoral;
		}
	}

	private: System::Void OnVerPasajerosClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn != nullptr && btn->Tag != nullptr) {
			array<Object^>^ flightInfo = dynamic_cast<array<Object^>^>(btn->Tag);
			if (flightInfo != nullptr && flightInfo->Length == 7) {
				Label^ vueloLabel = dynamic_cast<Label^>(flightInfo[2]);
				Label^ inicioLabel = dynamic_cast<Label^>(flightInfo[0]);
				Label^ destinoLabel = dynamic_cast<Label^>(flightInfo[1]);
				Label^ fechaLabel = dynamic_cast<Label^>(flightInfo[3]);
				Label^ horaAbordajeLabel = dynamic_cast<Label^>(flightInfo[4]);
				Label^ horaLlegadaLabel = dynamic_cast<Label^>(flightInfo[5]);
				Label^ operadorLabel = dynamic_cast<Label^>(flightInfo[6]);

				Form^ pasajerosForm = gcnew Form();
				pasajerosForm->Text = "Lista de pasajeros - " + vueloLabel->Text;
				pasajerosForm->Size = Drawing::Size(620, 400);
				pasajerosForm->StartPosition = FormStartPosition::CenterParent;

				Panel^ mainPanel = gcnew Panel();
				mainPanel->Dock = DockStyle::Fill;

				ListView^ pasajerosList = gcnew ListView();
				pasajerosList->Dock = DockStyle::Fill;
				pasajerosList->View = View::Details;
				pasajerosList->FullRowSelect = true;
				pasajerosList->GridLines = true;

				pasajerosList->Columns->Add("Nombre", 150);
				pasajerosList->Columns->Add("Asiento", 70);
				pasajerosList->Columns->Add("Reservación", 100);
				pasajerosList->Columns->Add("No. Ticket", 100);
				pasajerosList->Columns->Add("Acción", 120);

				array<String^>^ nombres = { "Juan Pérez", "María López", "Roberto García" };
				array<String^>^ asientos = { "12A", "12B", "13C" };
				array<String^>^ reservaciones = { "RES123", "RES124", "RES125" };
				array<String^>^ tickets = { "156487", "156488", "156489" };

				for (int i = 0; i < 3; i++) {
					ListViewItem^ item = gcnew ListViewItem(nombres[i]);
					item->SubItems->Add(asientos[i]);
					item->SubItems->Add(reservaciones[i]);
					item->SubItems->Add(tickets[i]);
					item->SubItems->Add("Imprimir Ticket");

					array<String^>^ pasajeroInfo = gcnew array<String^>{
						nombres[i], asientos[i], reservaciones[i], tickets[i],
							inicioLabel->Text, destinoLabel->Text, vueloLabel->Text,
							fechaLabel->Text, horaAbordajeLabel->Text, horaLlegadaLabel->Text,
							operadorLabel->Text
					};
					item->Tag = pasajeroInfo;

					pasajerosList->Items->Add(item);
				}

				PasajerosClickContext^ context = gcnew PasajerosClickContext();
				context->ListView = pasajerosList;

				mainPanel->Controls->Add(pasajerosList);
				pasajerosForm->Controls->Add(mainPanel);

				pasajerosForm->ShowDialog();
			}
		}
	}

		   ref class PasajerosClickContext {
		   public:
			   ListView^ ListView;
		   };

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		AeropuertosCarmorlinga::CreateFlight^ createFlightForm = gcnew AeropuertosCarmorlinga::CreateFlight();
		createFlightForm->ShowDialog(this);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		ModificarVuelo^ modificarVueloForm = gcnew ModificarVuelo();
		modificarVueloForm->ShowDialog(this);
	}
	};
}
