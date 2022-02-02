#pragma once

#include "ScaleOfFines.h";
#include "CarScaleOfFines.h";
#include "TruckScaleOfFines.h";

namespace cardrive {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Speed
	/// </summary>
	public ref class Speed : public System::Windows::Forms::Form
	{
	public:
		Speed(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		Speed(Stale::RodzajAuta carTypeArg, Stale::RodzajDrogi roadTypeArg) {
			InitializeComponent();
			if (carTypeArg == Stale::SAMOCHOD) {
				scaleOfFine = new CarScaleOfFines(0);
			}
			else if (carTypeArg == Stale::CIEZAROWKA) {
				scaleOfFine = new TruckScaleOfFines(0);
			}
			roadType = roadTypeArg;
		}


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Speed()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ speedInput;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ maxValue;
	private: System::Windows::Forms::TextBox^ minValue;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: ScaleOfFines* scaleOfFine;
	private: Stale::RodzajDrogi roadType;
	private: Stale::RodzajAuta carType;
	private: System::Windows::Forms::Button^ calculateButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Speed::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->speedInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maxValue = (gcnew System::Windows::Forms::TextBox());
			this->minValue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(885, 135);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Podaj prêdkoœæ";
			// 
			// speedInput
			// 
			this->speedInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->speedInput->Location = System::Drawing::Point(35, 201);
			this->speedInput->Name = L"speedInput";
			this->speedInput->Size = System::Drawing::Size(509, 75);
			this->speedInput->TabIndex = 10;
			this->speedInput->TextChanged += gcnew System::EventHandler(this, &Speed::speedInput_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(227, 363);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 54);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Mandat";
			// 
			// maxValue
			// 
			this->maxValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maxValue->Location = System::Drawing::Point(253, 640);
			this->maxValue->Name = L"maxValue";
			this->maxValue->Size = System::Drawing::Size(375, 75);
			this->maxValue->TabIndex = 15;
			// 
			// minValue
			// 
			this->minValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->minValue->Location = System::Drawing::Point(253, 493);
			this->minValue->Name = L"minValue";
			this->minValue->Size = System::Drawing::Size(375, 75);
			this->minValue->TabIndex = 14;
			this->minValue->TextChanged += gcnew System::EventHandler(this, &Speed::minValue_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(38, 658);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 51);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Max";
			this->label4->Click += gcnew System::EventHandler(this, &Speed::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(38, 511);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 51);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Min";
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(614, 201);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(75, 75);
			this->calculateButton->TabIndex = 16;
			this->calculateButton->Text = L"Oblicz";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &Speed::calculateButton_Click);
			// 
			// Speed
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1845, 937);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->maxValue);
			this->Controls->Add(this->minValue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->speedInput);
			this->Controls->Add(this->label1);
			this->Name = L"Speed";
			this->Text = L"Speed";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Speed::Speed_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Speed_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		scaleOfFine->setSpeed(int::Parse(speedInput->Text));
		std::pair<int, int> result = scaleOfFine->calculate(roadType);
		minValue->Text = result.first.ToString();
		maxValue->Text = result.second.ToString();
	}
	private: System::Void speedInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void minValue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
