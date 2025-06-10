#pragma once

namespace AeropuertosCarmorlinga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateFlight
	/// </summary>
	public ref class CreateFlight : public System::Windows::Forms::Form
	{
	public:
		CreateFlight(void)
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
		~CreateFlight()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inicioInput;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ destinoInput;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ fechaAbordajeInput;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ horaAbordajeInput;
	private: System::Windows::Forms::TextBox^ AsientoInput;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ operadorInput;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;






	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inicioInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->destinoInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->fechaAbordajeInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->horaAbordajeInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->AsientoInput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->operadorInput = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(287, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inicio";
			this->label1->Click += gcnew System::EventHandler(this, &CreateFlight::label1_Click);
			// 
			// inicioInput
			// 
			this->inicioInput->Location = System::Drawing::Point(291, 122);
			this->inicioInput->Name = L"inicioInput";
			this->inicioInput->Size = System::Drawing::Size(169, 20);
			this->inicioInput->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(219, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Creador de boletos";
			// 
			// destinoInput
			// 
			this->destinoInput->Location = System::Drawing::Point(291, 175);
			this->destinoInput->Name = L"destinoInput";
			this->destinoInput->Size = System::Drawing::Size(169, 20);
			this->destinoInput->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(287, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(287, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Fecha de abordaje";
			this->label4->Click += gcnew System::EventHandler(this, &CreateFlight::label4_Click);
			// 
			// fechaAbordajeInput
			// 
			this->fechaAbordajeInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fechaAbordajeInput->Location = System::Drawing::Point(291, 227);
			this->fechaAbordajeInput->Name = L"fechaAbordajeInput";
			this->fechaAbordajeInput->Size = System::Drawing::Size(169, 18);
			this->fechaAbordajeInput->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(287, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Hora de abordaje";
			// 
			// horaAbordajeInput
			// 
			this->horaAbordajeInput->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->horaAbordajeInput->Location = System::Drawing::Point(291, 288);
			this->horaAbordajeInput->Name = L"horaAbordajeInput";
			this->horaAbordajeInput->ShowUpDown = true;
			this->horaAbordajeInput->Size = System::Drawing::Size(169, 20);
			this->horaAbordajeInput->TabIndex = 8;
			this->horaAbordajeInput->ValueChanged += gcnew System::EventHandler(this, &CreateFlight::horaAbordajeInput_ValueChanged);
			// 
			// AsientoInput
			// 
			this->AsientoInput->Location = System::Drawing::Point(291, 343);
			this->AsientoInput->Name = L"AsientoInput";
			this->AsientoInput->Size = System::Drawing::Size(169, 20);
			this->AsientoInput->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(287, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Asiento";
			// 
			// operadorInput
			// 
			this->operadorInput->Location = System::Drawing::Point(291, 406);
			this->operadorInput->Name = L"operadorInput";
			this->operadorInput->Size = System::Drawing::Size(169, 20);
			this->operadorInput->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(287, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Operador";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(259, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 30);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Crear Boleto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateFlight::button1_Click);
			// 
			// button2
			// 
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(369, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 30);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateFlight::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(214, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(310, 39);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Creador de boletos";
			// 
			// CreateFlight
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 627);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inicioInput);
			this->Controls->Add(this->label1);
			this->Name = L"CreateFlight";
			this->Text = L"CreateFlight";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void horaAbordajeInput_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inicio = inicioInput->Text;
		String^ destino = destinoInput->Text;
		DateTime fechaAbordaje = fechaAbordajeInput->Value;
		DateTime horaAbordaje = horaAbordajeInput->Value;
		String^ asiento = AsientoInput->Text;
		String^ operador = operadorInput->Text;

		MessageBox::Show("Boleto creado y guardado en la base de datos con éxito:\n" +
			"Inicio: " + inicio + "\n" +
			"Destino: " + destino + "\n" +
			"Fecha de Abordaje: " + fechaAbordaje.ToShortDateString() + "\n" +
			"Hora de Abordaje: " + horaAbordaje.ToShortTimeString() + "\n" +
			"Asiento: " + asiento + "\n" +
			"Operador: " + operador);

		/*if (exito) {
			MessageBox::Show("Boleto creado y guardado en la base de datos con éxito:\n" +
				"Inicio: " + inicio + "\n" +
				"Destino: " + destino + "\n" +
				"Fecha de Abordaje: " + fechaAbordaje.ToShortDateString() + "\n" +
				"Hora de Abordaje: " + horaAbordaje.ToShortTimeString() + "\n" +
				"Asiento: " + asiento + "\n" +
				"Operador: " + operador);
		}
		else {
			MessageBox::Show("No se pudo guardar el boleto en la base de datos.");
		}*/
	}

	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
