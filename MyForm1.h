#pragma once

#include <vector>
#include "SegmentTripleHolderWrapper.h"


namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Wrapper;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		SegmentTripleHolderWrapper^ segmentTripleHolderWrapper;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			UpdateKitList();
			segmentTripleHolderWrapper = gcnew SegmentTripleHolderWrapper();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ add_set;
		System::Windows::Forms::Button^ delete_set;
		System::Windows::Forms::Button^ back_form;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::ListBox^ KitsBox;


	protected:

	protected:

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_set = (gcnew System::Windows::Forms::Button());
			this->delete_set = (gcnew System::Windows::Forms::Button());
			this->back_form = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->KitsBox = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(52, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Текущий список всех наборов";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// add_set
			// 
			this->add_set->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->add_set->BackColor = System::Drawing::Color::Chartreuse;
			this->add_set->Location = System::Drawing::Point(519, 201);
			this->add_set->Name = L"add_set";
			this->add_set->Size = System::Drawing::Size(83, 33);
			this->add_set->TabIndex = 1;
			this->add_set->Text = L"Добавить";
			this->add_set->UseVisualStyleBackColor = false;
			this->add_set->Click += gcnew System::EventHandler(this, &MyForm1::add_set_Click);
			// 
			// delete_set
			// 
			this->delete_set->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->delete_set->BackColor = System::Drawing::Color::Chartreuse;
			this->delete_set->Location = System::Drawing::Point(25, 282);
			this->delete_set->Name = L"delete_set";
			this->delete_set->Size = System::Drawing::Size(83, 33);
			this->delete_set->TabIndex = 2;
			this->delete_set->Text = L"Удалить";
			this->delete_set->UseVisualStyleBackColor = false;
			this->delete_set->Click += gcnew System::EventHandler(this, &MyForm1::delete_set_Click);
			// 
			// back_form
			// 
			this->back_form->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->back_form->BackColor = System::Drawing::Color::Chartreuse;
			this->back_form->Location = System::Drawing::Point(519, 282);
			this->back_form->Name = L"back_form";
			this->back_form->Size = System::Drawing::Size(83, 33);
			this->back_form->TabIndex = 3;
			this->back_form->Text = L"Назад";
			this->back_form->UseVisualStyleBackColor = false;
			this->back_form->Click += gcnew System::EventHandler(this, &MyForm1::back_form_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(351, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"1-ый отрезок";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(354, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"2-ой отрезок";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(354, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"3-ий отрезок";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(492, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(124, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(492, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(124, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(492, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(371, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 26);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Добавить новый набор";
			// 
			// KitsBox
			// 
			this->KitsBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->KitsBox->FormattingEnabled = true;
			this->KitsBox->Location = System::Drawing::Point(12, 33);
			this->KitsBox->Name = L"KitsBox";
			this->KitsBox->Size = System::Drawing::Size(336, 238);
			this->KitsBox->TabIndex = 12;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(643, 330);
			this->Controls->Add(this->KitsBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->back_form);
			this->Controls->Add(this->delete_set);
			this->Controls->Add(this->add_set);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(659, 369);
			this->MinimumSize = System::Drawing::Size(659, 369);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список наборов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void delete_set_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void add_set_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем значения полей
		int segment1 = 0;
		if (!Int32::TryParse(textBox1->Text, segment1)) {
			MessageBox::Show("Введите число в поле отрезок 1!");
			return;
		}

		int segment2 = 0;
		if (!Int32::TryParse(textBox2->Text, segment1)) {
			MessageBox::Show("Введите число в поле отрезок 2!");
			return;
		}

		int segment3 = 0;
		if (!Int32::TryParse(textBox3->Text, segment1)) {
			MessageBox::Show("Введите число в поле отрезок 3!");
			return;
		}

		SegmentTripleHolderWrapper^ newKit = gcnew SegmentTripleHolderWrapper();
		newKit->Segment1 = segment1;
		newKit->Segment2 = segment2;
		newKit->Segment3 = segment3;

		newKit->SaveKit();

		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";

		UpdateKitList();
	}
		   void UpdateKitList() {
			   List<SegmentTripleHolderWrapper^>^ kits = segmentTripleHolderWrapper->GetAllKits();

			   KitsBox->Items->Clear();

			   for each (SegmentTripleHolderWrapper ^ kit in kits) {
				   KitsBox->Items->Add(kit->Segment1 + " " + kit->Segment2 + " " + kit->Segment3);
			   }
		   }

	private: System::Void back_form_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Owner->Visible = true;
		this->Close();
	}
	};
}