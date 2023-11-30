#pragma once
#include "Customer.h"

namespace Fitness {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Course
	/// </summary>
	public ref class Course : public System::Windows::Forms::Form
	{
	public:
		Course(void)
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
		~Course()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameBox;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ courseButton;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::DataGridView^ dataGrid;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->courseButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(226, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фитнесс-центр";
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameBox->Location = System::Drawing::Point(156, 78);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(243, 23);
			this->nameBox->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ваше имя:";
			// 
			// courseButton
			// 
			this->courseButton->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->courseButton->Location = System::Drawing::Point(428, 70);
			this->courseButton->Name = L"courseButton";
			this->courseButton->Size = System::Drawing::Size(224, 37);
			this->courseButton->TabIndex = 3;
			this->courseButton->Text = L"Посмотреть курсы";
			this->courseButton->UseVisualStyleBackColor = true;
			this->courseButton->Click += gcnew System::EventHandler(this, &Course::courseButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(264, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ваши курсы";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(571, 417);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(112, 18);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Регистрация";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Course::linkLabel1_LinkClicked);
			// 
			// dataGrid
			// 
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGrid->BackgroundColor = System::Drawing::Color::Silver;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Location = System::Drawing::Point(62, 207);
			this->dataGrid->MinimumSize = System::Drawing::Size(50, 60);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->Size = System::Drawing::Size(555, 176);
			this->dataGrid->TabIndex = 7;
			// 
			// Course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 444);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->courseButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label1);
			this->Name = L"Course";
			this->Text = L"Фитнесс-центр";
			this->Load += gcnew System::EventHandler(this, &Course::Course_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Course_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: Customer^ customer = nullptr;
	private: System::Void courseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ name = nameBox->Text;

		if (nameBox->Text->Length == 0)
		{
			MessageBox::Show("Введите правильные данные!", "Input eror", MessageBoxButtons::OK);
		}

		try
		{
			SqlConnection sqlConn("Data Source=DESKTOP-6QL0FP6\\MSSQLSERVER01;Initial Catalog=fitness_center;Integrated Security=True");
			sqlConn.Open();

			String^ Querry = "Select * From customers Where name = @name";

			SqlCommand command(Querry, % sqlConn);
			command.Parameters->AddWithValue("@name", name);

			SqlDataReader^ reader = command.ExecuteReader();
			
			DataTable^ table = gcnew DataTable();
			table->Load(reader);

			dataGrid->DataSource = table;
			
			sqlConn.Close();
		}
		catch (Exception^ ex)
		{

		}
	}
	public: bool switchToReg = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{
		this->switchToReg = true;
		this->Close();
	}
};
}
