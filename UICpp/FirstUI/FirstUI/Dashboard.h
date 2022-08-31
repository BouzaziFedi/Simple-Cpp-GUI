#pragma once

namespace FirstUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ sqlCmd = gcnew SqlCommand();
		DataTable^ sqlData = gcnew DataTable();
		SqlDataAdapter^ sqlDtAdapter = gcnew SqlDataAdapter();
		SqlDataReader^ sqlReader;
	private: System::Windows::Forms::Button^ button1;

		
		String^ connString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=MyFirst;Integrated Security=True";

	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			MembersDB();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btn_Add;
	private: System::Windows::Forms::Button^ btn_Exit;
	private: System::Windows::Forms::Button^ btn_Reset;
	private: System::Windows::Forms::Button^ btn_Delete;
	private: System::Windows::Forms::Button^ btn_Refresh;

	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_DateReg;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_Mobile;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_Address;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_Surname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_FirstName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_RefNo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox_Prove;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox_MemberType;
	private: System::Windows::Forms::TextBox^ textBox_Search;
	private: System::Windows::Forms::ComboBox^ comboBox_MemberFees;






	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox_MemberFees = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_Search = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Prove = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox_MemberType = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_DateReg = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_Mobile = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_Address = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_Surname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_FirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_RefNo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->btn_Reset = (gcnew System::Windows::Forms::Button());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_Refresh = (gcnew System::Windows::Forms::Button());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->comboBox_MemberFees);
			this->panel1->Controls->Add(this->textBox_Search);
			this->panel1->Controls->Add(this->comboBox_Prove);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->comboBox_MemberType);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox_DateReg);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox_Mobile);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox_Address);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox_Surname);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox_FirstName);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox_RefNo);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(28, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1635, 267);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1432, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 53);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click_2);
			// 
			// comboBox_MemberFees
			// 
			this->comboBox_MemberFees->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"€ 25.00", L"€ 100.00",
					L"€ 300.00", L"€ 1200.00"
			});
			this->comboBox_MemberFees->FormattingEnabled = true;
			this->comboBox_MemberFees->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"€ 25.00", L"€ 100.00", L"€ 300.00",
					L"€ 1200.00"
			});
			this->comboBox_MemberFees->Location = System::Drawing::Point(1355, 213);
			this->comboBox_MemberFees->Name = L"comboBox_MemberFees";
			this->comboBox_MemberFees->Size = System::Drawing::Size(267, 28);
			this->comboBox_MemberFees->TabIndex = 25;
			this->comboBox_MemberFees->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::comboBox_MemberFees_SelectedIndexChanged);
			// 
			// textBox_Search
			// 
			this->textBox_Search->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"€ 25.00", L"€ 100.00",
					L"€ 300.00", L"€ 1200.00"
			});
			this->textBox_Search->Location = System::Drawing::Point(1058, 30);
			this->textBox_Search->Multiline = true;
			this->textBox_Search->Name = L"textBox_Search";
			this->textBox_Search->Size = System::Drawing::Size(350, 35);
			this->textBox_Search->TabIndex = 24;
			this->textBox_Search->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Dashboard::textBox_Search_KeyPress);
			// 
			// comboBox_Prove
			// 
			this->comboBox_Prove->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"Student ID", L"Passport",
					L"Pilot Licence", L"Driving Licence"
			});
			this->comboBox_Prove->FormattingEnabled = true;
			this->comboBox_Prove->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Student ID", L"Passport", L"Pilot Licence",
					L"Driving Licence"
			});
			this->comboBox_Prove->Location = System::Drawing::Point(737, 163);
			this->comboBox_Prove->Name = L"comboBox_Prove";
			this->comboBox_Prove->Size = System::Drawing::Size(267, 28);
			this->comboBox_Prove->TabIndex = 23;
			this->comboBox_Prove->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::comboBox3_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1051, 95);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(276, 36);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Date of Birth";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1051, 154);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(276, 47);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Member Type";
			// 
			// comboBox_MemberType
			// 
			this->comboBox_MemberType->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"Weekly Member",
					L"Monthly", L"Quartly", L"Annualy"
			});
			this->comboBox_MemberType->FormattingEnabled = true;
			this->comboBox_MemberType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Weekly Member", L"Monthly", L"Quartly",
					L"Annualy"
			});
			this->comboBox_MemberType->Location = System::Drawing::Point(1357, 156);
			this->comboBox_MemberType->Name = L"comboBox_MemberType";
			this->comboBox_MemberType->Size = System::Drawing::Size(267, 28);
			this->comboBox_MemberType->TabIndex = 19;
			this->comboBox_MemberType->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::comboBox2_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(1355, 105);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(267, 26);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Dashboard::dateTimePicker1_ValueChanged);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1051, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(276, 52);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Member Fees";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(531, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 36);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Prove";
			// 
			// textBox_DateReg
			// 
			this->textBox_DateReg->Location = System::Drawing::Point(737, 95);
			this->textBox_DateReg->Multiline = true;
			this->textBox_DateReg->Name = L"textBox_DateReg";
			this->textBox_DateReg->Size = System::Drawing::Size(267, 35);
			this->textBox_DateReg->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(531, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(200, 36);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Date Reg.";
			// 
			// textBox_Mobile
			// 
			this->textBox_Mobile->Location = System::Drawing::Point(737, 32);
			this->textBox_Mobile->Multiline = true;
			this->textBox_Mobile->Name = L"textBox_Mobile";
			this->textBox_Mobile->Size = System::Drawing::Size(267, 35);
			this->textBox_Mobile->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(531, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(200, 36);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Mobile";
			// 
			// textBox_Address
			// 
			this->textBox_Address->Location = System::Drawing::Point(224, 213);
			this->textBox_Address->Multiline = true;
			this->textBox_Address->Name = L"textBox_Address";
			this->textBox_Address->Size = System::Drawing::Size(780, 35);
			this->textBox_Address->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 36);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Address";
			// 
			// textBox_Surname
			// 
			this->textBox_Surname->Location = System::Drawing::Point(224, 156);
			this->textBox_Surname->Multiline = true;
			this->textBox_Surname->Name = L"textBox_Surname";
			this->textBox_Surname->Size = System::Drawing::Size(267, 35);
			this->textBox_Surname->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 36);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Surname";
			// 
			// textBox_FirstName
			// 
			this->textBox_FirstName->Location = System::Drawing::Point(224, 94);
			this->textBox_FirstName->Multiline = true;
			this->textBox_FirstName->Name = L"textBox_FirstName";
			this->textBox_FirstName->Size = System::Drawing::Size(267, 35);
			this->textBox_FirstName->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Firstname";
			// 
			// textBox_RefNo
			// 
			this->textBox_RefNo->Location = System::Drawing::Point(224, 31);
			this->textBox_RefNo->Multiline = true;
			this->textBox_RefNo->Name = L"textBox_RefNo";
			this->textBox_RefNo->Size = System::Drawing::Size(267, 35);
			this->textBox_RefNo->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ref.Number";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(28, 442);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1635, 446);
			this->panel2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1597, 410);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::dataGridView1_CellClick);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->btn_Exit);
			this->panel3->Controls->Add(this->btn_Reset);
			this->panel3->Controls->Add(this->btn_Delete);
			this->panel3->Controls->Add(this->btn_Add);
			this->panel3->Controls->Add(this->btn_Refresh);
			this->panel3->Controls->Add(this->btn_Update);
			this->panel3->Location = System::Drawing::Point(28, 326);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1635, 99);
			this->panel3->TabIndex = 1;
			// 
			// btn_Exit
			// 
			this->btn_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Exit->Location = System::Drawing::Point(1338, 18);
			this->btn_Exit->Name = L"btn_Exit";
			this->btn_Exit->Size = System::Drawing::Size(223, 61);
			this->btn_Exit->TabIndex = 5;
			this->btn_Exit->Text = L"Exit";
			this->btn_Exit->UseVisualStyleBackColor = true;
			this->btn_Exit->Click += gcnew System::EventHandler(this, &Dashboard::btn_Exit_Click);
			// 
			// btn_Reset
			// 
			this->btn_Reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Reset->Location = System::Drawing::Point(1075, 18);
			this->btn_Reset->Name = L"btn_Reset";
			this->btn_Reset->Size = System::Drawing::Size(223, 61);
			this->btn_Reset->TabIndex = 4;
			this->btn_Reset->Text = L"Reset";
			this->btn_Reset->UseVisualStyleBackColor = true;
			this->btn_Reset->Click += gcnew System::EventHandler(this, &Dashboard::btn_Reset_Click);
			// 
			// btn_Delete
			// 
			this->btn_Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Delete->Location = System::Drawing::Point(817, 18);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(223, 61);
			this->btn_Delete->TabIndex = 3;
			this->btn_Delete->Text = L"Delete";
			this->btn_Delete->UseVisualStyleBackColor = true;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &Dashboard::btn_Delete_Click);
			// 
			// btn_Add
			// 
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Add->Location = System::Drawing::Point(70, 18);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(223, 61);
			this->btn_Add->TabIndex = 0;
			this->btn_Add->Text = L"Add";
			this->btn_Add->UseVisualStyleBackColor = true;
			this->btn_Add->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// btn_Refresh
			// 
			this->btn_Refresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Refresh->Location = System::Drawing::Point(317, 18);
			this->btn_Refresh->Name = L"btn_Refresh";
			this->btn_Refresh->Size = System::Drawing::Size(223, 61);
			this->btn_Refresh->TabIndex = 1;
			this->btn_Refresh->Text = L"Refresh";
			this->btn_Refresh->UseVisualStyleBackColor = true;
			this->btn_Refresh->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click_1);
			// 
			// btn_Update
			// 
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->Location = System::Drawing::Point(563, 18);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(223, 61);
			this->btn_Update->TabIndex = 2;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = true;
			this->btn_Update->Click += gcnew System::EventHandler(this, &Dashboard::btn_Update_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1691, 955);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MembersDB()
	{
		sqlConn->ConnectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=MyFirst;Integrated Security=True";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM members";
		sqlReader = sqlCmd->ExecuteReader();
		sqlData->Load(sqlReader);
		sqlConn->Close();
		dataGridView1->DataSource = sqlData;
	}

	private: System::Void RefreshDB()
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=MyFirst;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			SqlDataAdapter^ sqlDtAdapter = gcnew SqlDataAdapter("SELECT * FROM members", sqlConn);
			DataTable^ sqlData = gcnew DataTable();

			sqlDtAdapter->Fill(sqlData);
			dataGridView1->DataSource = sqlData;
		}
		catch(Exception ^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	//Add New Buttonn
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		sqlConn->ConnectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=MyFirst;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;

		try {
			sqlCmd->CommandText = "INSERT into members (RefNo, Firstname, Surname, Adress, Mobile, RegDate," +
				"Prove, DateOFBirth, MemberType, MemberFees )"
				"values('" + textBox_RefNo->Text + "','" + textBox_FirstName->Text + "','" + textBox_Surname->Text + "','" + textBox_Address->Text + "','" + 
				textBox_Mobile->Text + "','" + textBox_DateReg->Text + "','" + comboBox_Prove->Text + "','" + dateTimePicker1->Text + "','" + 
				comboBox_MemberType->Text + "','" + comboBox_MemberFees->Text + "')" ;
			
			sqlCmd->ExecuteNonQuery();
			sqlConn->Close();			
			MembersDB();
			RefreshDB();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		RefreshDB();
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}

	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	
	private: System::Void btn_Exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iExit;

		try
		{
			iExit = MessageBox::Show("Confirm if you want to exit", "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	private: System::Void btn_Reset_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			textBox_RefNo->Text = "";
			textBox_FirstName->Text = "";
			textBox_Surname->Text = "";
			textBox_Address->Text = "";
			textBox_Search->Text = "";
			textBox_Mobile->Text = "";
			textBox_DateReg->Text = "";
			comboBox_Prove->Text = "";
			comboBox_MemberType->Text = "";
			comboBox_MemberFees->Text = "";
			dateTimePicker1->ResetText();


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		try
		{
			textBox_RefNo->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
			textBox_FirstName->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			textBox_Surname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			textBox_Address->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
			textBox_Mobile->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
			textBox_DateReg->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
			comboBox_Prove->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
			dateTimePicker1->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
			comboBox_MemberType->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
			comboBox_MemberFees->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}

	private: System::Void comboBox_MemberFees_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void textBox_Search_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{

		try
		{
			if (e->KeyChar == (Char)13)
			{
				DataView^ dv = sqlData->DefaultView;
				dv->RowFilter = String::Format("Firstname like '%{0}%", textBox_Search->Text);
				dataGridView1->DataSource = dv->ToTable();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) 
	{

		try
		{
			DataView^ dv = sqlData->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%", textBox_Search->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
		catch (Exception^ ex)
		{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=MyFirst;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			String^ RefNo = textBox_RefNo->Text;
			String^ Firstname = textBox_FirstName->Text;
			String^ Surname = textBox_Surname->Text;
			String^ Address = textBox_Address->Text;
			String^ Mobile = textBox_Mobile->Text;
			String^ RegDate = textBox_DateReg->Text;
			String^ Prove = comboBox_Prove->Text;
			String^ DateofBirth= dateTimePicker1->Text;
			String^ MemberType = comboBox_MemberType->Text;
			String^ MemberFees = comboBox_MemberFees->Text;

			sqlCmd->CommandText = "UPDATE members set RefNo = '" + RefNo +
				"', Firstname = '" + Firstname +
				"', Surname = '" + Surname +
				"', Adress = '" + Address +
				"', Mobile = '" + Mobile +
				"', RegDate = '" + RegDate +
				"', Prove = '" + Prove +
				"', DateOFBirth = '" + DateofBirth +
				"', MemberType = '" + MemberType +
				"', MemberFees = '" + MemberFees + "' WHERE RefNo = " + RefNo + "", sqlConn;

			sqlConn->Open();
			sqlReader = sqlCmd->ExecuteReader();
			sqlConn->Close();
			MembersDB();
			RefreshDB();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}

	private: System::Void btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		try
		{
			sqlConn->ConnectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=MyFirst;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			String^ RefNo = textBox_RefNo->Text;
			SqlCommand^ sqlCmd = gcnew SqlCommand ("delete from members where RefNo = " + RefNo + "", sqlConn);
			sqlConn->Open();

			sqlReader = sqlCmd->ExecuteReader();
			MessageBox::Show("Record Deleted", "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		RefreshDB();
	}
};
}
