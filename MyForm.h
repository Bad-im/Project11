#pragma once
#include "MyForm1.h"
#include "MyForm2.h"

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ max_square;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ main_btn;


	protected:

	protected:

	protected:





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->max_square = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->main_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// max_square
			// 
			this->max_square->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->max_square->BackColor = System::Drawing::Color::Chartreuse;
			this->max_square->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->max_square->ForeColor = System::Drawing::Color::Black;
			this->max_square->Location = System::Drawing::Point(126, 210);
			this->max_square->Name = L"max_square";
			this->max_square->Size = System::Drawing::Size(110, 35);
			this->max_square->TabIndex = 1;
			this->max_square->Text = L"Максимальная площадь";
			this->max_square->UseVisualStyleBackColor = false;
			this->max_square->Click += gcnew System::EventHandler(this, &MyForm::max_square_btn);
			// 
			// title
			// 
			this->title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->title->AutoSize = true;
			this->title->Cursor = System::Windows::Forms::Cursors::Default;
			this->title->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(21, 40);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(341, 34);
			this->title->TabIndex = 4;
			this->title->Text = L"Калькулятор площадей";
			// 
			// main_btn
			// 
			this->main_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->main_btn->BackColor = System::Drawing::Color::Chartreuse;
			this->main_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->main_btn->ForeColor = System::Drawing::Color::Black;
			this->main_btn->Location = System::Drawing::Point(126, 148);
			this->main_btn->Name = L"main_btn";
			this->main_btn->Size = System::Drawing::Size(110, 35);
			this->main_btn->TabIndex = 5;
			this->main_btn->Text = L"Список всех наборов";
			this->main_btn->UseVisualStyleBackColor = false;
			this->main_btn->Click += gcnew System::EventHandler(this, &MyForm::main_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(375, 339);
			this->Controls->Add(this->main_btn);
			this->Controls->Add(this->title);
			this->Controls->Add(this->max_square);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(391, 378);
			this->MinimumSize = System::Drawing::Size(391, 378);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор площадей!";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void main_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		MyForm1^ MyForm = gcnew MyForm1();
		MyForm->ShowDialog(this);
	}
	private: System::Void max_square_btn(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		MyForm2^ MyForm = gcnew MyForm2();
		MyForm->ShowDialog(this);
	}

	};
}
