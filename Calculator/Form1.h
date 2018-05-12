#pragma once

#include "Calc.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			delete calc; 
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(183, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"%";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(269, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 2;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(96, 96);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"⌫";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(183, 172);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 7;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(96, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 5;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 172);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 4;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(317, 62);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(183, 249);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 12;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(269, 249);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 11;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(96, 249);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(12, 249);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 60);
			this->button12->TabIndex = 9;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(183, 329);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 60);
			this->button13->TabIndex = 16;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(269, 172);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 15;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(96, 329);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 14;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(12, 329);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 60);
			this->button16->TabIndex = 13;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(183, 407);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 60);
			this->button17->TabIndex = 20;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(269, 329);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 138);
			this->button18->TabIndex = 19;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(96, 407);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 18;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(12, 407);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 60);
			this->button20->TabIndex = 17;
			this->button20->Text = L".";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(341, 478);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	Calc* calc; 

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 calc = new Calc; 
		 }

	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 0 pressed
			 calc->pressDigit("0"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 1 pressed
			 calc->pressDigit("1"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 2 pressed
			 calc->pressDigit("2"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 3 pressed
			 calc->pressDigit("3"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 4 pressed
			 calc->pressDigit("4"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 5 pressed
			 calc->pressDigit("5"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 6 pressed
			 calc->pressDigit("6"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 7 pressed
			 calc->pressDigit("7"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 8 pressed
			 calc->pressDigit("8"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 9 pressed
			 calc->pressDigit("9"); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 // + pressed
			 calc->pressOperator('+'); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 // - pressed
			 calc->pressOperator('-'); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 // * pressed
			 calc->pressOperator('*'); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 // / pressed
			 calc->pressOperator('/'); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 // = pressed
			 calc->equals(); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 // . pressed
			 calc->point(); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 // clearAll
			 calc->clearAll(); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 // clear
			 calc->clear(); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 // % pressed
			 calc->percent(); 
			 this->textBox1->Text = gcnew String((calc->getDisplay()).c_str()); 
		 }
};
}

