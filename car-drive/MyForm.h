#include "RoadType.h";
#include "Constant.h";
#pragma once

namespace cardrive {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ auto_type;
	private: System::Windows::Forms::Button^ Car;
	private: System::Windows::Forms::Button^ Truck;
	protected:



	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->auto_type = (gcnew System::Windows::Forms::Label());
			this->Car = (gcnew System::Windows::Forms::Button());
			this->Truck = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// auto_type
			// 
			this->auto_type->AutoSize = true;
			this->auto_type->BackColor = System::Drawing::SystemColors::MenuText;
			this->auto_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->auto_type->ForeColor = System::Drawing::SystemColors::Control;
			this->auto_type->Location = System::Drawing::Point(227, 100);
			this->auto_type->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->auto_type->Name = L"auto_type";
			this->auto_type->Size = System::Drawing::Size(523, 135);
			this->auto_type->TabIndex = 0;
			this->auto_type->Text = L"Typ auta";
			this->auto_type->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Car
			// 
			this->Car->Location = System::Drawing::Point(251, 309);
			this->Car->Margin = System::Windows::Forms::Padding(4);
			this->Car->Name = L"Car";
			this->Car->Size = System::Drawing::Size(488, 101);
			this->Car->TabIndex = 1;
			this->Car->Text = L"Samochód osobowy";
			this->Car->UseVisualStyleBackColor = true;
			this->Car->Click += gcnew System::EventHandler(this, &MyForm::selectCarEvent);
			// 
			// Truck
			// 
			this->Truck->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Truck.BackgroundImage")));
			this->Truck->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Truck->Location = System::Drawing::Point(251, 514);
			this->Truck->Margin = System::Windows::Forms::Padding(4);
			this->Truck->Name = L"Truck";
			this->Truck->Size = System::Drawing::Size(488, 101);
			this->Truck->TabIndex = 2;
			this->Truck->Text = L"Ciê¿arówka";
			this->Truck->UseVisualStyleBackColor = true;
			this->Truck->Click += gcnew System::EventHandler(this, &MyForm::selectTruckEvent);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1845, 937);
			this->Controls->Add(this->Truck);
			this->Controls->Add(this->Car);
			this->Controls->Add(this->auto_type);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void selectCarEvent(System::Object^ sender, System::EventArgs^ e) {
		RoadType^ roadType = gcnew RoadType(Stale::SAMOCHOD);
		roadType->ShowDialog();

	}
	private: System::Void selectTruckEvent(System::Object^ sender, System::EventArgs^ e) {
		RoadType^ roadType = gcnew RoadType(Stale::CIEZAROWKA);
		roadType->ShowDialog();
	}
	};
}
