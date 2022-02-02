#pragma once
#include "Speed.h"
#include "constant.h";
namespace cardrive {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o RoadType
	/// </summary>
	public ref class RoadType : public System::Windows::Forms::Form
	{
	public:
		RoadType(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		RoadType(Stale::RodzajAuta type) {
			InitializeComponent();
			carType = type;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~RoadType()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ residenceZone;
	private: System::Windows::Forms::Button^ builtUpArea;
	private: System::Windows::Forms::Button^ singeCarriagewayRoad;
	private: System::Windows::Forms::Button^ singeCarriagewayExpress;
	private: System::Windows::Forms::Button^ dualCarriagewayRoad;







	private: System::Windows::Forms::Button^ dualCarriagewayExpress;

	private: System::Windows::Forms::Button^ highway;

	private: Stale::RodzajAuta carType;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoadType::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->residenceZone = (gcnew System::Windows::Forms::Button());
			this->builtUpArea = (gcnew System::Windows::Forms::Button());
			this->singeCarriagewayRoad = (gcnew System::Windows::Forms::Button());
			this->singeCarriagewayExpress = (gcnew System::Windows::Forms::Button());
			this->dualCarriagewayRoad = (gcnew System::Windows::Forms::Button());
			this->dualCarriagewayExpress = (gcnew System::Windows::Forms::Button());
			this->highway = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(200, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(732, 135);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Rodzaj drogi";
			this->label2->Click += gcnew System::EventHandler(this, &RoadType::label2_Click);
			// 
			// residenceZone
			// 
			this->residenceZone->Location = System::Drawing::Point(211, 270);
			this->residenceZone->Name = L"residenceZone";
			this->residenceZone->Size = System::Drawing::Size(352, 85);
			this->residenceZone->TabIndex = 2;
			this->residenceZone->Text = L"Strefa zamieszkania";
			this->residenceZone->UseVisualStyleBackColor = true;
			this->residenceZone->Click += gcnew System::EventHandler(this, &RoadType::residenceZone_Click);
			// 
			// builtUpArea
			// 
			this->builtUpArea->Location = System::Drawing::Point(592, 270);
			this->builtUpArea->Name = L"builtUpArea";
			this->builtUpArea->Size = System::Drawing::Size(352, 85);
			this->builtUpArea->TabIndex = 3;
			this->builtUpArea->Text = L"Obszar zabudowany";
			this->builtUpArea->UseVisualStyleBackColor = true;
			this->builtUpArea->Click += gcnew System::EventHandler(this, &RoadType::builtUpArea_Click);
			// 
			// singeCarriagewayRoad
			// 
			this->singeCarriagewayRoad->Location = System::Drawing::Point(211, 389);
			this->singeCarriagewayRoad->Name = L"singeCarriagewayRoad";
			this->singeCarriagewayRoad->Size = System::Drawing::Size(352, 85);
			this->singeCarriagewayRoad->TabIndex = 4;
			this->singeCarriagewayRoad->Text = L"Droga jednojezdniowa dwukierunkowa";
			this->singeCarriagewayRoad->UseVisualStyleBackColor = true;
			this->singeCarriagewayRoad->Click += gcnew System::EventHandler(this, &RoadType::singeCarriagewayRoad_Click);
			// 
			// singeCarriagewayExpress
			// 
			this->singeCarriagewayExpress->Location = System::Drawing::Point(592, 389);
			this->singeCarriagewayExpress->Name = L"singeCarriagewayExpress";
			this->singeCarriagewayExpress->Size = System::Drawing::Size(352, 85);
			this->singeCarriagewayExpress->TabIndex = 5;
			this->singeCarriagewayExpress->Text = L"Droga ekspresowa jednojezdniowa";
			this->singeCarriagewayExpress->UseVisualStyleBackColor = true;
			this->singeCarriagewayExpress->Click += gcnew System::EventHandler(this, &RoadType::singeCarriagewayExpress_Click);
			// 
			// dualCarriagewayRoad
			// 
			this->dualCarriagewayRoad->Location = System::Drawing::Point(211, 521);
			this->dualCarriagewayRoad->Name = L"dualCarriagewayRoad";
			this->dualCarriagewayRoad->Size = System::Drawing::Size(352, 85);
			this->dualCarriagewayRoad->TabIndex = 6;
			this->dualCarriagewayRoad->Text = L"Droga dwujezdniowa o dwoch pasach ruchu w kazda strone";
			this->dualCarriagewayRoad->UseVisualStyleBackColor = true;
			this->dualCarriagewayRoad->Click += gcnew System::EventHandler(this, &RoadType::dualCarriagewayRoad_Click);
			// 
			// dualCarriagewayExpress
			// 
			this->dualCarriagewayExpress->Location = System::Drawing::Point(592, 521);
			this->dualCarriagewayExpress->Name = L"dualCarriagewayExpress";
			this->dualCarriagewayExpress->Size = System::Drawing::Size(352, 85);
			this->dualCarriagewayExpress->TabIndex = 7;
			this->dualCarriagewayExpress->Text = L"Droga ekspresowa dwujezdniowa";
			this->dualCarriagewayExpress->UseVisualStyleBackColor = true;
			this->dualCarriagewayExpress->Click += gcnew System::EventHandler(this, &RoadType::dualCarriagewayExpress_Click);
			// 
			// highway
			// 
			this->highway->Location = System::Drawing::Point(211, 653);
			this->highway->Name = L"highway";
			this->highway->Size = System::Drawing::Size(733, 85);
			this->highway->TabIndex = 8;
			this->highway->Text = L"Autostrada";
			this->highway->UseVisualStyleBackColor = true;
			this->highway->Click += gcnew System::EventHandler(this, &RoadType::highway_Click);
			// 
			// RoadType
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1845, 937);
			this->Controls->Add(this->highway);
			this->Controls->Add(this->dualCarriagewayExpress);
			this->Controls->Add(this->dualCarriagewayRoad);
			this->Controls->Add(this->singeCarriagewayExpress);
			this->Controls->Add(this->singeCarriagewayRoad);
			this->Controls->Add(this->builtUpArea);
			this->Controls->Add(this->residenceZone);
			this->Controls->Add(this->label2);
			this->DoubleBuffered = true;
			this->Name = L"RoadType";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"RoadType";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &RoadType::RoadType_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void residenceZone_Click(System::Object^ sender, System::EventArgs^ e) {
		Speed^ speedometer = gcnew Speed(carType, Stale::STREFA_ZAMIESZKANIA);
		speedometer->ShowDialog();
		
	}
	private: System::Void RoadType_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void builtUpArea_Click(System::Object^ sender, System::EventArgs^ e) {
	Speed^ speedometer = gcnew Speed(carType, Stale::OBSZAR_ZABUDOWANY);
	speedometer->ShowDialog();
}
private: System::Void singeCarriagewayRoad_Click(System::Object^ sender, System::EventArgs^ e) {
	Speed^ speedometer = gcnew Speed(carType, Stale::DROGA_JEDNOJEZDNIOWA);
	speedometer->ShowDialog();
}
private: System::Void singeCarriagewayExpress_Click(System::Object^ sender, System::EventArgs^ e) {
	Speed^ speedometer = gcnew Speed(carType, Stale::DROGA_JEDNOJEZDNIOWA_EKSPRESOWA);
	speedometer->ShowDialog();
}
private: System::Void dualCarriagewayRoad_Click(System::Object^ sender, System::EventArgs^ e) {
	Speed^ speedometer = gcnew Speed(carType, Stale::DROGA_DWUJEZDNIOWA);
	speedometer->ShowDialog();
}
private: System::Void dualCarriagewayExpress_Click(System::Object^ sender, System::EventArgs^ e) {
	Speed^ speedometer = gcnew Speed(carType, Stale::DROGA_DWUJEZDNIOWA_EKSPRESOWA);
	speedometer->ShowDialog();
}
private: System::Void highway_Click(System::Object^ sender, System::EventArgs^ e) {
	Speed^ speedometer = gcnew Speed(carType, Stale::AUTOSTRADA);
	speedometer->ShowDialog();
}
};
}
