#pragma once

namespace AeropuertosCarmorlinga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for newClient
	/// </summary>
	public ref class newClient : public System::Windows::Forms::Form
	{
	public:
		newClient(void)
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
		~newClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Aceptar;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::TextBox^ inicioInput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ bookinNumber;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ asientoInput;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ reservacionInput;

	private: System::Windows::Forms::Label^ label4;
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
			this->Aceptar = (gcnew System::Windows::Forms::Button());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->inicioInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bookinNumber = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->asientoInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->reservacionInput = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Aceptar
			// 
			this->Aceptar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Aceptar->Location = System::Drawing::Point(308, 364);
			this->Aceptar->Name = L"Aceptar";
			this->Aceptar->Size = System::Drawing::Size(112, 33);
			this->Aceptar->TabIndex = 0;
			this->Aceptar->Text = L"Aceptar";
			this->Aceptar->UseVisualStyleBackColor = true;
			this->Aceptar->Click += gcnew System::EventHandler(this, &newClient::Aceptar_Click);
			// 
			// Cancelar
			// 
			this->Cancelar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Cancelar->Location = System::Drawing::Point(426, 364);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(112, 33);
			this->Cancelar->TabIndex = 1;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &newClient::Cancelar_Click);
			// 
			// inicioInput
			// 
			this->inicioInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inicioInput->Location = System::Drawing::Point(346, 161);
			this->inicioInput->Name = L"inicioInput";
			this->inicioInput->Size = System::Drawing::Size(169, 20);
			this->inicioInput->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(342, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre completo";
			// 
			// bookinNumber
			// 
			this->bookinNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookinNumber->Location = System::Drawing::Point(346, 211);
			this->bookinNumber->Name = L"bookinNumber";
			this->bookinNumber->Size = System::Drawing::Size(169, 20);
			this->bookinNumber->TabIndex = 5;
			this->bookinNumber->TextChanged += gcnew System::EventHandler(this, &newClient::bookinNumber_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Numero de bookin";
			// 
			// asientoInput
			// 
			this->asientoInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->asientoInput->Location = System::Drawing::Point(346, 262);
			this->asientoInput->Name = L"asientoInput";
			this->asientoInput->Size = System::Drawing::Size(169, 20);
			this->asientoInput->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(342, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Asiento";
			// 
			// reservacionInput
			// 
			this->reservacionInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->reservacionInput->Location = System::Drawing::Point(346, 321);
			this->reservacionInput->Name = L"reservacionInput";
			this->reservacionInput->Size = System::Drawing::Size(169, 20);
			this->reservacionInput->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(342, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Reservacion";
			// 
			// newClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 514);
			this->Controls->Add(this->reservacionInput);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->asientoInput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->bookinNumber);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inicioInput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Aceptar);
			this->Name = L"newClient";
			this->Text = L"newClient";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nombreCompleto = inicioInput->Text;
		String^ numeroBooking = bookinNumber->Text;
		String^ asiento = asientoInput->Text;
		String^ reservacion = reservacionInput->Text;

		if (nombreCompleto->Length == 0 || numeroBooking->Length == 0 || asiento->Length == 0 || reservacion->Length == 0) {
			MessageBox::Show("Por favor, complete todos los campos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}




	}
	private: System::Void bookinNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
