#pragma once
#include "Customer.h";

namespace Fitness
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for FitnessFrame
	/// </summary>
	public ref class FitnessFrame : public System::Windows::Forms::Form
	{
	public:
		FitnessFrame(void)
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
		~FitnessFrame()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::TextBox^ nameBox;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ courseBox;

	private: System::Windows::Forms::ComboBox^ trainerBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->courseBox = (gcnew System::Windows::Forms::ComboBox());
			this->trainerBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите ваши данные:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(299, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ФИО:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(525, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Курс:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(674, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Тренер:";
			this->label5->Click += gcnew System::EventHandler(this, &FitnessFrame::label5_Click);
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameBox->Location = System::Drawing::Point(203, 133);
			this->nameBox->Multiline = true;
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(253, 26);
			this->nameBox->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(376, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FitnessFrame::button1_Click);
			// 
			// courseBox
			// 
			this->courseBox->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->courseBox->FormattingEnabled = true;
			this->courseBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Хобби-хорсинг", L"Уроки куколдизма", L"Гачи танцы",
					L"Уроки минета"
			});
			this->courseBox->Location = System::Drawing::Point(494, 133);
			this->courseBox->Name = L"courseBox";
			this->courseBox->Size = System::Drawing::Size(128, 26);
			this->courseBox->TabIndex = 10;
			this->courseBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FitnessFrame::comboBox1_SelectedIndexChanged);
			// 
			// trainerBox
			// 
			this->trainerBox->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trainerBox->FormattingEnabled = true;
			this->trainerBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Гаджов Н.К.", L"Яна Цист", L"Яспер Моглот" });
			this->trainerBox->Location = System::Drawing::Point(656, 131);
			this->trainerBox->Name = L"trainerBox";
			this->trainerBox->Size = System::Drawing::Size(128, 26);
			this->trainerBox->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(197, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(472, 32);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Регистрация в Фитнесс центр";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(706, 252);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(120, 18);
			this->linkLabel1->TabIndex = 13;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Ваш профиль";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FitnessFrame::linkLabel1_LinkClicked);
			// 
			// FitnessFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 279);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trainerBox);
			this->Controls->Add(this->courseBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"FitnessFrame";
			this->Text = L"Фитнесс-центр";
			this->Load += gcnew System::EventHandler(this, &FitnessFrame::FitnessFrame_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void FitnessFrame_Load(System::Object^ sender, System::EventArgs^ e){
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	public: Customer^ customer = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ name = nameBox->Text;
		String^ course = courseBox->Text;
		String^ trainer = trainerBox->Text;

		if (this->nameBox->Text->Length == 0 || this->courseBox->Text->Length == 0 || this->trainerBox->Text->Length == 0)
		{
			MessageBox::Show("Некорректные данные", "Ошибка ввода", MessageBoxButtons::OK);
		}

		try
		{
			SqlConnection sqlConn("Data Source=DESKTOP-6QL0FP6\\MSSQLSERVER01;Initial Catalog=fitness_center;Integrated Security=True");
			sqlConn.Open();

			String^ Querry = "Insert Into customers(name, course, trainer) Values (@name, @course, @trainer)";

			SqlCommand command(Querry, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@course", course);
			command.Parameters->AddWithValue("@trainer", trainer);

			command.ExecuteNonQuery();
			customer = gcnew Customer;
			customer->name = name;
			customer->course = course;
			customer->trainer = trainer;

			MessageBox::Show("Пользователь успешно добавлен", "Successfull connection", MessageBoxButtons::OK);

			sqlConn.Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Ошибка в регистрации пользователя", "Database Error", MessageBoxButtons::OK);
		}
	}
	public: bool switchToProf = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{
		this->switchToProf = true;
		this->Close();
	}

	};
}