#pragma once

namespace Hotelmanagementsystemv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;

		Double SingleRoom = 45.5;
		Double DoubleRoom = 75.5;
		Double FamilyRoom = 125.5;

		Double OneMeal = 7.5;
		Double TwoMeal = 12.5;
		Double ThreeMeal = 18.5; 

		Double iTax;
	private: System::Windows::Forms::Timer^ timer1;

		   Double Total;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Exit;


	private: System::Windows::Forms::Button^ txtCustomerRef;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ CustomerID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Firstname;
	private: System::Windows::Forms::TextBox^ Surname;
	private: System::Windows::Forms::TextBox^ Address;
	private: System::Windows::Forms::TextBox^ Postcode;
	private: System::Windows::Forms::TextBox^ Mobile;
	private: System::Windows::Forms::TextBox^ Email;










	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtSearch;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ Nationality;
	private: System::Windows::Forms::ComboBox^ Gender;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::ComboBox^ TypeofID;
private: System::Windows::Forms::ComboBox^ Meal;
private: System::Windows::Forms::ComboBox^ Roomty;
private: System::Windows::Forms::ComboBox^ Roomno;




	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::Label^ lblTime;


	private: System::Windows::Forms::Button^ button7;


private: System::Windows::Forms::Label^ lblDate;


	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->txtCustomerRef = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CustomerID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Firstname = (gcnew System::Windows::Forms::TextBox());
			this->Surname = (gcnew System::Windows::Forms::TextBox());
			this->Address = (gcnew System::Windows::Forms::TextBox());
			this->Postcode = (gcnew System::Windows::Forms::TextBox());
			this->Mobile = (gcnew System::Windows::Forms::TextBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Nationality = (gcnew System::Windows::Forms::ComboBox());
			this->Gender = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TypeofID = (gcnew System::Windows::Forms::ComboBox());
			this->Meal = (gcnew System::Windows::Forms::ComboBox());
			this->Roomty = (gcnew System::Windows::Forms::ComboBox());
			this->Roomno = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(308, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(962, 606);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(429, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->lblDate);
			this->panel1->Controls->Add(this->lblTime);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->txtSearch);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->txtCustomerRef);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(2, 624);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1268, 126);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->lblDate->Location = System::Drawing::Point(1065, 61);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(48, 20);
			this->lblDate->TabIndex = 51;
			this->lblDate->Text = L"Date";
			this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::Date_Click);
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->lblTime->Location = System::Drawing::Point(1065, 17);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(47, 20);
			this->lblTime->TabIndex = 41;
			this->lblTime->Text = L"Time";
			this->lblTime->Click += gcnew System::EventHandler(this, &MyForm::label20_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(749, 9);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 35);
			this->button7->TabIndex = 50;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label21->Location = System::Drawing::Point(314, 17);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(99, 20);
			this->label21->TabIndex = 49;
			this->label21->Text = L"No. of days";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(421, 17);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(152, 20);
			this->textBox12->TabIndex = 48;
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(589, 17);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(152, 20);
			this->txtSearch->TabIndex = 46;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			this->txtSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(107, 70);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(152, 20);
			this->textBox10->TabIndex = 45;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(107, 44);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(152, 20);
			this->textBox9->TabIndex = 44;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(107, 17);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(152, 20);
			this->textBox8->TabIndex = 39;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label19->Location = System::Drawing::Point(9, 17);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 20);
			this->label19->TabIndex = 43;
			this->label19->Text = L"Tax";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label18->Location = System::Drawing::Point(9, 44);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(77, 20);
			this->label18->TabIndex = 42;
			this->label18->Text = L"Subtotal";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label17->Location = System::Drawing::Point(9, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 20);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Total";
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(899, 55);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(144, 35);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// txtCustomerRef
			// 
			this->txtCustomerRef->Location = System::Drawing::Point(899, 11);
			this->txtCustomerRef->Name = L"txtCustomerRef";
			this->txtCustomerRef->Size = System::Drawing::Size(144, 35);
			this->txtCustomerRef->TabIndex = 5;
			this->txtCustomerRef->Text = L"Refresh";
			this->txtCustomerRef->UseVisualStyleBackColor = true;
			this->txtCustomerRef->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(269, 55);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Total/Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(589, 55);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(749, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// CustomerID
			// 
			this->CustomerID->Location = System::Drawing::Point(127, 15);
			this->CustomerID->Name = L"CustomerID";
			this->CustomerID->Size = System::Drawing::Size(175, 20);
			this->CustomerID->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(13, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"CustomerID";
			// 
			// Firstname
			// 
			this->Firstname->Location = System::Drawing::Point(127, 41);
			this->Firstname->Name = L"Firstname";
			this->Firstname->Size = System::Drawing::Size(175, 20);
			this->Firstname->TabIndex = 5;
			// 
			// Surname
			// 
			this->Surname->Location = System::Drawing::Point(127, 67);
			this->Surname->Name = L"Surname";
			this->Surname->Size = System::Drawing::Size(175, 20);
			this->Surname->TabIndex = 6;
			// 
			// Address
			// 
			this->Address->Location = System::Drawing::Point(127, 93);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(175, 20);
			this->Address->TabIndex = 7;
			// 
			// Postcode
			// 
			this->Postcode->Location = System::Drawing::Point(127, 119);
			this->Postcode->Name = L"Postcode";
			this->Postcode->Size = System::Drawing::Size(175, 20);
			this->Postcode->TabIndex = 8;
			// 
			// Mobile
			// 
			this->Mobile->Location = System::Drawing::Point(127, 145);
			this->Mobile->Name = L"Mobile";
			this->Mobile->Size = System::Drawing::Size(175, 20);
			this->Mobile->TabIndex = 9;
			// 
			// Email
			// 
			this->Email->Location = System::Drawing::Point(127, 171);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(175, 20);
			this->Email->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(13, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Firstname";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(13, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(13, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Surname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(13, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Nationality";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(13, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Email";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(13, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Mobile";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label8->Location = System::Drawing::Point(13, 119);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Post code";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label9->Location = System::Drawing::Point(13, 253);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Gender";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label10->Location = System::Drawing::Point(13, 279);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Type of ID";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label11->Location = System::Drawing::Point(12, 305);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 20);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Date in";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label12->Location = System::Drawing::Point(13, 227);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 20);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Date of birth";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(127, 226);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(175, 20);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// Nationality
			// 
			this->Nationality->FormattingEnabled = true;
			this->Nationality->Items->AddRange(gcnew cli::array< System::Object^  >(192) {
				L"Afghan", L"Albanian", L"Algerian", L"American",
					L"Andorran", L"Angolan", L"Antiguan and Barbudan", L"Argentine", L"Armenian", L"Australian", L"Austrian", L"Azerbaijani", L"Bahamian",
					L"Bahraini", L"Bangladeshi", L"Barbadian", L"Belarusian", L"Belgian", L"Belizean", L"Beninese", L"Bhutanese", L"Bolivian", L"Bosnian and Herzegovinian",
					L"Botswanan", L"Brazilian", L"British", L"Bruneian", L"Bulgarian", L"Burkinabé", L"Burmese", L"Burundian", L"Cabo Verdean", L"Cambodian",
					L"Cameroonian", L"Canadian", L"Central African", L"Chadian", L"Chilean", L"Chinese", L"Colombian", L"Comorian", L"Congolese (Congo-Brazzaville)",
					L"Congolese (Congo-Kinshasa)", L"Costa Rican", L"Croatian", L"Cuban", L"Cypriot", L"Czech", L"Danish", L"Djiboutian", L"Dominican (Dominican Republic)",
					L"Dominican (Dominica)", L"East Timorese", L"Ecuadorian", L"Egyptian", L"Emirati", L"Equatorial Guinean", L"Eritrean", L"Estonian",
					L"Ethiopian", L"Fijian", L"Finnish", L"French", L"Gabonese", L"Gambian", L"Georgian", L"German", L"Ghanaian", L"Greek", L"Grenadian",
					L"Guatemalan", L"Guinean", L"Guinean-Bissauan", L"Guyanese", L"Haitian", L"Honduran", L"Hungarian", L"Icelandic", L"Indian",
					L"Indonesian", L"Iranian", L"Iraqi", L"Irish", L"Israeli", L"Italian", L"Ivorian", L"Jamaican", L"Japanese", L"Jordanian", L"Kazakhstani",
					L"Kenyan", L"Kiribati", L"Kuwaiti", L"Kyrgyz", L"Laotian", L"Latvian", L"Lebanese", L"Liberian", L"Libyan", L"Liechtenstein",
					L"Lithuanian", L"Luxembourgish", L"Macedonian", L"Malagasy", L"Malawian", L"Malaysian", L"Maldivian", L"Malian", L"Maltese",
					L"Marshallese", L"Mauritanian", L"Mauritian", L"Mexican", L"Micronesian", L"Moldovan", L"Monacan", L"Mongolian", L"Montenegrin",
					L"Moroccan", L"Mozambican", L"Namibian", L"Nauruan", L"Nepalese", L"New Zealander", L"Nicaraguan", L"Nigerien", L"Nigerian",
					L"North Korean", L"Norwegian", L"Omani", L"Pakistani", L"Palauan", L"Palestinian", L"Panamanian", L"Papua New Guinean", L"Paraguayan",
					L"Peruvian", L"Philippine", L"Polish", L"Portuguese", L"Qatari", L"Romanian", L"Russian", L"Rwandan", L"Saint Kitts and Nevis",
					L"Saint Lucian", L"Saint Vincentian", L"Samoan", L"San Marinese", L"Sao Tomean", L"Saudi Arabian", L"Senegalese", L"Serbian",
					L"Seychellois", L"Sierra Leonean", L"Singaporean", L"Slovak", L"Slovenian", L"Solomon Islander", L"Somali", L"South African",
					L"South Korean", L"South Sudanese", L"Spanish", L"Sri Lankan", L"Sudanese", L"Surinamese", L"Swazi", L"Swedish", L"Swiss", L"Syrian",
					L"Taiwanese", L"Tajikistani", L"Tanzanian", L"Thai", L"Togolese", L"Tongan", L"Trinidadian and Tobagonian", L"Tunisian", L"Turkish",
					L"Turkmen", L"Tuvaluan", L"Ugandan", L"Ukrainian", L"Uruguayan", L"Uzbekistani", L"Vanuatuan", L"Venezuelan", L"Vietnamese",
					L"Yemeni", L"Zambian", L"Zimbabwean"
			});
			this->Nationality->Location = System::Drawing::Point(127, 197);
			this->Nationality->Name = L"Nationality";
			this->Nationality->Size = System::Drawing::Size(175, 21);
			this->Nationality->TabIndex = 27;
			// 
			// Gender
			// 
			this->Gender->FormattingEnabled = true;
			this->Gender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->Gender->Location = System::Drawing::Point(127, 252);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(175, 21);
			this->Gender->TabIndex = 28;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(127, 331);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(175, 20);
			this->dateTimePicker2->TabIndex = 29;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(127, 305);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(175, 20);
			this->dateTimePicker3->TabIndex = 30;
			// 
			// TypeofID
			// 
			this->TypeofID->FormattingEnabled = true;
			this->TypeofID->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Student ID", L"Pilot license", L"Driving license",
					L"Passport"
			});
			this->TypeofID->Location = System::Drawing::Point(127, 278);
			this->TypeofID->Name = L"TypeofID";
			this->TypeofID->Size = System::Drawing::Size(175, 21);
			this->TypeofID->TabIndex = 31;
			// 
			// Meal
			// 
			this->Meal->FormattingEnabled = true;
			this->Meal->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Breakfeast", L"Lunch", L"Dinner" });
			this->Meal->Location = System::Drawing::Point(127, 358);
			this->Meal->Name = L"Meal";
			this->Meal->Size = System::Drawing::Size(175, 21);
			this->Meal->TabIndex = 32;
			// 
			// Roomty
			// 
			this->Roomty->FormattingEnabled = true;
			this->Roomty->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Single", L"Double", L"Family" });
			this->Roomty->Location = System::Drawing::Point(127, 385);
			this->Roomty->Name = L"Roomty";
			this->Roomty->Size = System::Drawing::Size(175, 21);
			this->Roomty->TabIndex = 33;
			// 
			// Roomno
			// 
			this->Roomno->FormattingEnabled = true;
			this->Roomno->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"001", L"002", L"003", L"004", L"005", L"006", L"007",
					L"008", L"009", L"010", L"011", L"012", L"013", L"014", L"015", L"016", L"017", L"018", L"019", L"020", L"021", L"022", L"023",
					L"024", L"025", L"026", L"027", L"028", L"029", L"030", L"031", L"032", L"033", L"034", L"035", L"036", L"037", L"038", L"039",
					L"040", L"041", L"042", L"043", L"044", L"045", L"046", L"047", L"048", L"049", L"050"
			});
			this->Roomno->Location = System::Drawing::Point(140, 412);
			this->Roomno->Name = L"Roomno";
			this->Roomno->Size = System::Drawing::Size(162, 21);
			this->Roomno->TabIndex = 34;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label13->Location = System::Drawing::Point(13, 332);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 20);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Date out";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label14->Location = System::Drawing::Point(13, 359);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 20);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Meal";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label15->Location = System::Drawing::Point(13, 386);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 20);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Room type";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label16->Location = System::Drawing::Point(13, 412);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(121, 20);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Room number";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1270, 749);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Roomno);
			this->Controls->Add(this->Roomty);
			this->Controls->Add(this->Meal);
			this->Controls->Add(this->TypeofID);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->Nationality);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->Mobile);
			this->Controls->Add(this->Postcode);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->Surname);
			this->Controls->Add(this->Firstname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CustomerID);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//=========Start=====Functions==========================================//
		private: System::Void HotelConnected()
		{
			sqlConn->ConnectionString = "datasource = localhost;port = 3306;username=root;password = 504Bca73*; database = hoteldb";

			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "Select * from hoteldb";
			sqlRd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlRd);
			sqlRd->Close();
			sqlConn->Close();
			dataGridView1->DataSource = sqlDt;
		}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	HotelConnected();
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	lblTime->Text = dt.Now.ToLongTimeString();
	lblDate->Text = dt.Now.ToLongDateString();

}
private: System::Void Date_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlConn->ConnectionString = "datasource = localhost;port = 3306;username=root;password = 504Bca73*; database = hoteldb";
			sqlCmd->Connection = sqlConn;

			String^ ID = txtCustomerRef->Text;
			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from hoteldb", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
	try
	{
		System::Windows::Forms::DialogResult iExit;

		iExit = MessageBox::Show("Confirm if you want to exit", "Hotel System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}

	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlConn->ConnectionString = "datasource=localhost;port=3306;username=root;password=504Bca73*;database=hoteldb";

		// Open the connection
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;

		// Corrected SQL syntax: "INSERT INTO"
		sqlCmd->CommandText = "INSERT INTO hoteldb (ID, Firstname, Surname, Address, Postcode, Mobile, Email, Nationality, DOB, Gender, Prove, DateIn, DateOut, Meal, Roomty, Roomno) " +
			"VALUES ('" + CustomerID->Text + "','" + Firstname->Text + "','" +
			Surname->Text + "','" + Address->Text + "','" + Postcode->Text + "','" +
			Mobile->Text + "','" + Email->Text + "','" + Nationality->Text + "','" +
			dateTimePicker1->Text + "','" + Gender->Text + "','" + TypeofID->Text + "','" +
			dateTimePicker2->Text + "','" + dateTimePicker3->Text + "','" + Meal->Text + "','" +
			Roomty->Text + "','" + Roomno->Text + "')";

		// Execute the command
		sqlCmd->ExecuteNonQuery();

		// Close the connection
		sqlConn->Close();

		// Refresh the data grid view
		HotelConnected();
	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

		// Ensure the connection is closed in case of an error
		if (sqlConn->State == System::Data::ConnectionState::Open)
		{
			sqlConn->Close();
		}
	}
}
};
}
