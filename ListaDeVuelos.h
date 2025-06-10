#pragma once

#include "CreateFlight.h"
//#include "VuelosController.h"

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: Panel^ selectedVueloPanel;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->flowLayoutVuelos->Size = System::Drawing::Size(850, 585);
			this->flowLayoutVuelos->TabIndex = 1;
			this->flowLayoutVuelos->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListaDeVuelos::flowLayoutVuelos_Paint);
			// 
			// UpdateButton
			// 
			this->UpdateButton->Location = System::Drawing::Point(785, 30);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(77, 25);
			this->UpdateButton->TabIndex = 2;
			this->UpdateButton->Text = L"Actualizar";
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(349, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Nuevo Vuelo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(477, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Cancelar Vuelo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(605, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Modificar Vuelo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ListaDeVuelos::button3_Click);
			// 
			// ListaDeVuelos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 660);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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


		   /*private: void CargarVuelos() {
			   this->flowLayoutVuelos->Controls->Clear();

			   VuelosController^ vuelosCtrl = gcnew VuelosController();
			   auto vuelos = vuelosCtrl->ObtenerVuelos();

			   for each (auto vuelo in vuelos) {
				   System::Windows::Forms::Panel^ vueloPanel = gcnew System::Windows::Forms::Panel();
				   vueloPanel->Width = 800;
				   vueloPanel->Height = 120;
				   vueloPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				   vueloPanel->Margin = System::Windows::Forms::Padding(5);

				   System::Windows::Forms::Label^ inicioLabel = gcnew System::Windows::Forms::Label();
				   inicioLabel->Text = "Inicio: " + vuelo["inicio"];
				   inicioLabel->Location = System::Drawing::Point(10, 10);
				   inicioLabel->AutoSize = true;

				   System::Windows::Forms::Label^ destinoLabel = gcnew System::Windows::Forms::Label();
				   destinoLabel->Text = "Destino: " + vuelo["destino"];
				   destinoLabel->Location = System::Drawing::Point(10, 35);
				   destinoLabel->AutoSize = true;

				   System::Windows::Forms::Label^ vueloLabel = gcnew System::Windows::Forms::Label();
				   vueloLabel->Text = "Vuelo: " + vuelo["vuelo"];
				   vueloLabel->Location = System::Drawing::Point(10, 60);
				   vueloLabel->AutoSize = true;

				   System::Windows::Forms::Label^ fechaLabel = gcnew System::Windows::Forms::Label();
				   fechaLabel->Text = "Fecha de abordaje: " + vuelo["fechaAbordaje"];
				   fechaLabel->Location = System::Drawing::Point(200, 10);
				   fechaLabel->AutoSize = true;

				   System::Windows::Forms::Label^ horaAbordajeLabel = gcnew System::Windows::Forms::Label();
				   horaAbordajeLabel->Text = "Hora de abordaje: " + vuelo["horaAbordaje"];
				   horaAbordajeLabel->Location = System::Drawing::Point(200, 35);
				   horaAbordajeLabel->AutoSize = true;

				   System::Windows::Forms::Label^ horaLlegadaLabel = gcnew System::Windows::Forms::Label();
				   horaLlegadaLabel->Text = "Hora de llegada: " + vuelo["horaLlegada"];
				   horaLlegadaLabel->Location = System::Drawing::Point(200, 60);
				   horaLlegadaLabel->AutoSize = true;

				   System::Windows::Forms::Label^ reservacionLabel = gcnew System::Windows::Forms::Label();
				   reservacionLabel->Text = "Reservación: " + vuelo["reservacion"];
				   reservacionLabel->Location = System::Drawing::Point(400, 10);
				   reservacionLabel->AutoSize = true;

				   System::Windows::Forms::Label^ bookingNumberLabel = gcnew System::Windows::Forms::Label();
				   bookingNumberLabel->Text = "No. Ticket: " + vuelo["bookingNumber"];
				   bookingNumberLabel->Location = System::Drawing::Point(400, 35);
				   bookingNumberLabel->AutoSize = true;

				   System::Windows::Forms::Label^ asientoLabel = gcnew System::Windows::Forms::Label();
				   asientoLabel->Text = "Asiento: " + vuelo["asiento"];
				   asientoLabel->Location = System::Drawing::Point(400, 60);
				   asientoLabel->AutoSize = true;

				   System::Windows::Forms::Label^ operadorLabel = gcnew System::Windows::Forms::Label();
				   operadorLabel->Text = "Operador: " + vuelo["operador"];
				   operadorLabel->Location = System::Drawing::Point(600, 10);
				   operadorLabel->AutoSize = true;

				   System::Windows::Forms::Button^ pasajerosButton = gcnew System::Windows::Forms::Button();
				   pasajerosButton->Text = "Ver pasajeros";
				   pasajerosButton->Location = System::Drawing::Point(650, 25);
				   pasajerosButton->Width = 120;
				   pasajerosButton->Height = 30;

				   pasajerosButton->Tag = vuelo;

				   vueloPanel->Click += gcnew System::EventHandler(this, &ListaDeVuelos::OnVueloPanelClick);
				   for each (System::Windows::Forms::Control ^ ctrl in gcnew cli::array<System::Windows::Forms::Control^> { inicioLabel, destinoLabel, vueloLabel, fechaLabel, horaAbordajeLabel, horaLlegadaLabel, reservacionLabel, bookingNumberLabel, asientoLabel, operadorLabel, pasajerosButton }) {
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
				   vueloPanel->Controls->Add(pasajerosButton);

				   this->flowLayoutVuelos->Controls->Add(vueloPanel);
			   }
		   }*/



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//CargarVuelos();
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

				pasajerosList->MouseClick += gcnew MouseEventHandler(this, &ListaDeVuelos::OnPasajerosListMouseClick);

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

	private: System::Void OnPasajerosListMouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ListView^ pasajerosList = dynamic_cast<ListView^>(sender);
		if (pasajerosList != nullptr) {
			ListViewHitTestInfo^ hitTest = pasajerosList->HitTest(e->Location);
			ListViewItem^ clickedItem = hitTest->Item;

			if (clickedItem != nullptr && hitTest->SubItem != nullptr) {
				if (hitTest->Item->SubItems->IndexOf(hitTest->SubItem) == 4) {
					array<String^>^ pasajeroInfo = dynamic_cast<array<String^>^>(clickedItem->Tag);
					if (pasajeroInfo != nullptr) {
						String^ ticketContent =
							"===== BOLETO DE VUELO =====\n\n" +
							"NOMBRE: " + pasajeroInfo[0] + "\n" +
							"ASIENTO: " + pasajeroInfo[1] + "\n" +
							"RESERVACIÓN: " + pasajeroInfo[2] + "\n" +
							"TICKET #: " + pasajeroInfo[3] + "\n\n" +
							pasajeroInfo[4] + "\n" +
							pasajeroInfo[5] + "\n" +
							pasajeroInfo[6] + "\n" +
							pasajeroInfo[7] + "\n" +
							pasajeroInfo[8] + "\n" +
							pasajeroInfo[9] + "\n" +
							pasajeroInfo[10];

						MessageBox::Show(ticketContent, "Imprimir Ticket",
							MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
			}
		}
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		AeropuertosCarmorlinga::CreateFlight^ createFlightForm = gcnew AeropuertosCarmorlinga::CreateFlight();
		createFlightForm->ShowDialog(this);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedVueloPanel == nullptr) {
			MessageBox::Show("Por favor selecciona un vuelo para cancelar.", "Cancelar Vuelo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"¿Seguro que quieres cancelar el vuelo seleccionado?",
			"Confirmar cancelación",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->flowLayoutVuelos->Controls->Remove(selectedVueloPanel);
			selectedVueloPanel = nullptr;
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Implementar lógica de modificar vuelo si es necesario
	}
	};
}
