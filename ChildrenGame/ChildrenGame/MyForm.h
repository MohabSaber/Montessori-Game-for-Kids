#pragma once

#include <filesystem>
#include<fstream>
#include<iostream>
#include<cstdlib>
#include<sstream>

namespace ChildrenGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:

		String^ RandImg;
		//constructor
		MyForm(void)
		{
			InitializeComponent();

			Level->Hide();
			panel1->Hide();
			panel2->Hide();
			panel3->Hide();
			ParentFollowUp->Hide();
			About->Hide();

			sad->Hide();
			smile->Hide();
			pictureBox4->Hide();
			pictureBox3->Hide();

			right->Hide();
			wrong->Hide();


			array<String^>^ AnimalArr = gcnew array<String^>{ "Cow", "Donky", "Goat", "Goose", "Hen", "Horse", "Pig", "Rabbit", "Sheap"};
			srand(2);
			RandImg = AnimalArr[rand() % 9];
			label6->Text = RandImg;

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


	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::OpenFileDialog^ Openfile;
	private: System::Windows::Forms::Button^ Level1;
	private: System::Windows::Forms::Button^ Level2;
	private: System::Windows::Forms::Button^ Level3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ Level;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ sad;
	private: System::Windows::Forms::PictureBox^ smile;
	private: System::Windows::Forms::PictureBox^ Emotion;
	private: System::Windows::Forms::Label^ scor;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ Equal;
	private: System::Windows::Forms::PictureBox^ Num2;
	private: System::Windows::Forms::PictureBox^ Operation;
	private: System::Windows::Forms::PictureBox^ Num1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Zoo;
	private: System::Windows::Forms::PictureBox^ wrong;
	private: System::Windows::Forms::PictureBox^ right;
	private: System::Windows::Forms::Button^ againBtn;
	private: System::Windows::Forms::Button^ checkBtn;
	private: System::Windows::Forms::PictureBox^ animal;
	private: System::Windows::Forms::Panel^ LoginForm;
	private: System::Windows::Forms::Panel^ About;
	private: System::Windows::Forms::Panel^ ParentFollowUp;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Report;

	private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summar	y>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Openfile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Level1 = (gcnew System::Windows::Forms::Button());
			this->Level2 = (gcnew System::Windows::Forms::Button());
			this->Level3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Level = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sad = (gcnew System::Windows::Forms::PictureBox());
			this->smile = (gcnew System::Windows::Forms::PictureBox());
			this->Emotion = (gcnew System::Windows::Forms::PictureBox());
			this->scor = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Equal = (gcnew System::Windows::Forms::PictureBox());
			this->Num2 = (gcnew System::Windows::Forms::PictureBox());
			this->Operation = (gcnew System::Windows::Forms::PictureBox());
			this->Num1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Zoo = (gcnew System::Windows::Forms::Label());
			this->wrong = (gcnew System::Windows::Forms::PictureBox());
			this->right = (gcnew System::Windows::Forms::PictureBox());
			this->againBtn = (gcnew System::Windows::Forms::Button());
			this->checkBtn = (gcnew System::Windows::Forms::Button());
			this->animal = (gcnew System::Windows::Forms::PictureBox());
			this->LoginForm = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->About = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->ParentFollowUp = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Report = (gcnew System::Windows::Forms::TextBox());
			this->Level->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sad))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Emotion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Equal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Num2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Operation))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Num1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->animal))->BeginInit();
			this->LoginForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->About->SuspendLayout();
			this->ParentFollowUp->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(750, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 38);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::RoyalBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(429, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 37);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(420, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 37);
			this->label1->TabIndex = 8;
			this->label1->Text = L"User Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(600, 264);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(257, 33);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox1->Location = System::Drawing::Point(600, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 33);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Openfile
			// 
			this->Openfile->FileName = L"openFileDialog1";
			// 
			// Level1
			// 
			this->Level1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->Level1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Level1->Location = System::Drawing::Point(330, 104);
			this->Level1->Margin = System::Windows::Forms::Padding(2);
			this->Level1->Name = L"Level1";
			this->Level1->Size = System::Drawing::Size(112, 66);
			this->Level1->TabIndex = 0;
			this->Level1->Text = L"Level-1";
			this->Level1->UseVisualStyleBackColor = false;
			this->Level1->Click += gcnew System::EventHandler(this, &MyForm::Level1_Click);
			// 
			// Level2
			// 
			this->Level2->BackColor = System::Drawing::Color::Olive;
			this->Level2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Level2->Location = System::Drawing::Point(455, 104);
			this->Level2->Margin = System::Windows::Forms::Padding(2);
			this->Level2->Name = L"Level2";
			this->Level2->Size = System::Drawing::Size(108, 66);
			this->Level2->TabIndex = 1;
			this->Level2->Text = L"Level-2";
			this->Level2->UseVisualStyleBackColor = false;
			this->Level2->Click += gcnew System::EventHandler(this, &MyForm::Level2_Click);
			// 
			// Level3
			// 
			this->Level3->BackColor = System::Drawing::Color::Yellow;
			this->Level3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Level3->Location = System::Drawing::Point(576, 106);
			this->Level3->Margin = System::Windows::Forms::Padding(2);
			this->Level3->Name = L"Level3";
			this->Level3->Size = System::Drawing::Size(111, 68);
			this->Level3->TabIndex = 2;
			this->Level3->Text = L"Level-3";
			this->Level3->UseVisualStyleBackColor = false;
			this->Level3->Click += gcnew System::EventHandler(this, &MyForm::Level3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(686, 223);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 60);
			this->button4->TabIndex = 15;
			this->button4->Text = L"About";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Level
			// 
			this->Level->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Level->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Level.BackgroundImage")));
			this->Level->Controls->Add(this->button4);
			this->Level->Controls->Add(this->Level3);
			this->Level->Controls->Add(this->Level2);
			this->Level->Controls->Add(this->Level1);
			this->Level->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Level->Location = System::Drawing::Point(0, 0);
			this->Level->Margin = System::Windows::Forms::Padding(2);
			this->Level->Name = L"Level";
			this->Level->Size = System::Drawing::Size(1250, 642);
			this->Level->TabIndex = 11;
			this->Level->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Level_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1250, 642);
			this->panel3->TabIndex = 20;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1056, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 41);
			this->button8->TabIndex = 32;
			this->button8->Text = L"Back";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(733, 222);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(231, 235);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox10->TabIndex = 31;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(994, 222);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(231, 235);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(35, 18);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(36, 18);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 28;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(36, 18);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 100);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 27;
			this->pictureBox5->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1046, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 37);
			this->label7->TabIndex = 26;
			this->label7->Text = L"0";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(1030, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 37);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Score";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(388, 515);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(380, 110);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Check";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(610, 284);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(96, 83);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 23;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(364, 222);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(231, 235);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 22;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click_1);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(247, 284);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(99, 110);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox8->TabIndex = 21;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click_1);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			this->pictureBox9->Location = System::Drawing::Point(2, 221);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(231, 235);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox9->TabIndex = 20;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Jokerman", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(219, 1);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(696, 117);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Hard Calculator";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(340, 29);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"label10";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->sad);
			this->panel1->Controls->Add(this->smile);
			this->panel1->Controls->Add(this->Emotion);
			this->panel1->Controls->Add(this->scor);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->Equal);
			this->panel1->Controls->Add(this->Num2);
			this->panel1->Controls->Add(this->Operation);
			this->panel1->Controls->Add(this->Num1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1250, 642);
			this->panel1->TabIndex = 21;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1116, 88);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 51);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(884, 221);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(231, 235);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// sad
			// 
			this->sad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sad.Image")));
			this->sad->Location = System::Drawing::Point(33, 17);
			this->sad->Name = L"sad";
			this->sad->Size = System::Drawing::Size(100, 100);
			this->sad->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->sad->TabIndex = 13;
			this->sad->TabStop = false;
			this->sad->Click += gcnew System::EventHandler(this, &MyForm::sad_Click);
			// 
			// smile
			// 
			this->smile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"smile.Image")));
			this->smile->Location = System::Drawing::Point(34, 17);
			this->smile->Name = L"smile";
			this->smile->Size = System::Drawing::Size(100, 100);
			this->smile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->smile->TabIndex = 12;
			this->smile->TabStop = false;
			// 
			// Emotion
			// 
			this->Emotion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Emotion.Image")));
			this->Emotion->Location = System::Drawing::Point(34, 17);
			this->Emotion->Name = L"Emotion";
			this->Emotion->Size = System::Drawing::Size(100, 100);
			this->Emotion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Emotion->TabIndex = 11;
			this->Emotion->TabStop = false;
			// 
			// scor
			// 
			this->scor->AutoSize = true;
			this->scor->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scor->ForeColor = System::Drawing::Color::Black;
			this->scor->Location = System::Drawing::Point(1044, 53);
			this->scor->Name = L"scor";
			this->scor->Size = System::Drawing::Size(32, 37);
			this->scor->TabIndex = 10;
			this->scor->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(1028, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 37);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Score";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(386, 514);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(380, 110);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Check";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// Equal
			// 
			this->Equal->BackColor = System::Drawing::Color::White;
			this->Equal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Equal.Image")));
			this->Equal->Location = System::Drawing::Point(739, 284);
			this->Equal->Margin = System::Windows::Forms::Padding(2);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(96, 83);
			this->Equal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Equal->TabIndex = 6;
			this->Equal->TabStop = false;
			// 
			// Num2
			// 
			this->Num2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num2.Image")));
			this->Num2->Location = System::Drawing::Point(450, 221);
			this->Num2->Margin = System::Windows::Forms::Padding(2);
			this->Num2->Name = L"Num2";
			this->Num2->Size = System::Drawing::Size(231, 235);
			this->Num2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Num2->TabIndex = 4;
			this->Num2->TabStop = false;
			this->Num2->Click += gcnew System::EventHandler(this, &MyForm::Num2_Click_1);
			// 
			// Operation
			// 
			this->Operation->BackColor = System::Drawing::Color::White;
			this->Operation->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Operation.Image")));
			this->Operation->Location = System::Drawing::Point(315, 284);
			this->Operation->Margin = System::Windows::Forms::Padding(2);
			this->Operation->Name = L"Operation";
			this->Operation->Size = System::Drawing::Size(99, 110);
			this->Operation->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Operation->TabIndex = 3;
			this->Operation->TabStop = false;
			this->Operation->Click += gcnew System::EventHandler(this, &MyForm::Operation_Click_1);
			// 
			// Num1
			// 
			this->Num1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num1.Image")));
			this->Num1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num1.InitialImage")));
			this->Num1->Location = System::Drawing::Point(37, 221);
			this->Num1->Margin = System::Windows::Forms::Padding(2);
			this->Num1->Name = L"Num1";
			this->Num1->Size = System::Drawing::Size(231, 235);
			this->Num1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Num1->TabIndex = 2;
			this->Num1->TabStop = false;
			this->Num1->Click += gcnew System::EventHandler(this, &MyForm::Num1_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Jokerman", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(217, 0);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(744, 117);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Crazy Calculator";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(338, 28);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->Zoo);
			this->panel2->Controls->Add(this->wrong);
			this->panel2->Controls->Add(this->right);
			this->panel2->Controls->Add(this->againBtn);
			this->panel2->Controls->Add(this->checkBtn);
			this->panel2->Controls->Add(this->animal);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1250, 642);
			this->panel2->TabIndex = 21;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Location = System::Drawing::Point(899, 57);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 60);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(303, 481);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 39);
			this->label6->TabIndex = 7;
			this->label6->Text = L"label6";
			// 
			// Zoo
			// 
			this->Zoo->AutoSize = true;
			this->Zoo->BackColor = System::Drawing::Color::LightSkyBlue;
			this->Zoo->Font = (gcnew System::Drawing::Font(L"Jokerman", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Zoo->Location = System::Drawing::Point(342, 0);
			this->Zoo->Name = L"Zoo";
			this->Zoo->Size = System::Drawing::Size(433, 140);
			this->Zoo->TabIndex = 6;
			this->Zoo->Text = L"Zooooo";
			// 
			// wrong
			// 
			this->wrong->BackColor = System::Drawing::Color::White;
			this->wrong->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wrong.BackgroundImage")));
			this->wrong->Location = System::Drawing::Point(627, 420);
			this->wrong->Name = L"wrong";
			this->wrong->Size = System::Drawing::Size(150, 150);
			this->wrong->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->wrong->TabIndex = 4;
			this->wrong->TabStop = false;
			// 
			// right
			// 
			this->right->BackColor = System::Drawing::Color::White;
			this->right->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right.BackgroundImage")));
			this->right->Location = System::Drawing::Point(627, 420);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(150, 150);
			this->right->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->right->TabIndex = 3;
			this->right->TabStop = false;
			// 
			// againBtn
			// 
			this->againBtn->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->againBtn->Location = System::Drawing::Point(600, 289);
			this->againBtn->Name = L"againBtn";
			this->againBtn->Size = System::Drawing::Size(128, 92);
			this->againBtn->TabIndex = 2;
			this->againBtn->Text = L"Again";
			this->againBtn->UseVisualStyleBackColor = true;
			this->againBtn->Click += gcnew System::EventHandler(this, &MyForm::againBtn_Click);
			// 
			// checkBtn
			// 
			this->checkBtn->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBtn->Location = System::Drawing::Point(600, 179);
			this->checkBtn->Name = L"checkBtn";
			this->checkBtn->Size = System::Drawing::Size(128, 92);
			this->checkBtn->TabIndex = 1;
			this->checkBtn->Text = L"Check";
			this->checkBtn->UseVisualStyleBackColor = true;
			this->checkBtn->Click += gcnew System::EventHandler(this, &MyForm::checkBtn_Click);
			// 
			// animal
			// 
			this->animal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"animal.BackgroundImage")));
			this->animal->Location = System::Drawing::Point(273, 177);
			this->animal->Name = L"animal";
			this->animal->Size = System::Drawing::Size(245, 255);
			this->animal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->animal->TabIndex = 0;
			this->animal->TabStop = false;
			this->animal->Click += gcnew System::EventHandler(this, &MyForm::animal_Click_1);
			// 
			// LoginForm
			// 
			this->LoginForm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginForm.BackgroundImage")));
			this->LoginForm->Controls->Add(this->pictureBox11);
			this->LoginForm->Controls->Add(this->button1);
			this->LoginForm->Controls->Add(this->label2);
			this->LoginForm->Controls->Add(this->label1);
			this->LoginForm->Controls->Add(this->textBox2);
			this->LoginForm->Controls->Add(this->textBox1);
			this->LoginForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginForm->Location = System::Drawing::Point(0, 0);
			this->LoginForm->Name = L"LoginForm";
			this->LoginForm->Size = System::Drawing::Size(1250, 642);
			this->LoginForm->TabIndex = 18;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(217, 5);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(688, 106);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 3;
			this->pictureBox11->TabStop = false;
			// 
			// About
			// 
			this->About->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"About.BackgroundImage")));
			this->About->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->About->Controls->Add(this->button9);
			this->About->Controls->Add(this->textBox3);
			this->About->Dock = System::Windows::Forms::DockStyle::Fill;
			this->About->Location = System::Drawing::Point(0, 0);
			this->About->Name = L"About";
			this->About->Size = System::Drawing::Size(1250, 642);
			this->About->TabIndex = 18;
			this->About->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::About_Paint);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(1129, 76);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(76, 62);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Back";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Wheat;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Palace Script MT", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(12, 5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(583, 199);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"This is a simple game for children from 4-7 years that can improve their mathemat"
				L"ical skills ";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// ParentFollowUp
			// 
			this->ParentFollowUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ParentFollowUp.BackgroundImage")));
			this->ParentFollowUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ParentFollowUp->Controls->Add(this->button5);
			this->ParentFollowUp->Controls->Add(this->label11);
			this->ParentFollowUp->Controls->Add(this->Report);
			this->ParentFollowUp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ParentFollowUp->Location = System::Drawing::Point(0, 0);
			this->ParentFollowUp->Name = L"ParentFollowUp";
			this->ParentFollowUp->Size = System::Drawing::Size(1250, 642);
			this->ParentFollowUp->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PeachPuff;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(641, 121);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 69);
			this->button5->TabIndex = 2;
			this->button5->Text = L"View";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 44.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(643, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(582, 70);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Parent Follow up Report";
			// 
			// Report
			// 
			this->Report->BackColor = System::Drawing::Color::Black;
			this->Report->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Report->ForeColor = System::Drawing::Color::White;
			this->Report->Location = System::Drawing::Point(0, 1);
			this->Report->Multiline = true;
			this->Report->Name = L"Report";
			this->Report->Size = System::Drawing::Size(621, 638);
			this->Report->TabIndex = 0;
			this->Report->TextChanged += gcnew System::EventHandler(this, &MyForm::Report_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1250, 642);
			this->Controls->Add(this->ParentFollowUp);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->Level);
			this->Controls->Add(this->About);
			this->Controls->Add(this->LoginForm);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Level->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sad))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Emotion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Equal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Num2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Operation))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Num1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->animal))->EndInit();
			this->LoginForm->ResumeLayout(false);
			this->LoginForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->About->ResumeLayout(false);
			this->About->PerformLayout();
			this->ParentFollowUp->ResumeLayout(false);
			this->ParentFollowUp->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ name;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		// user name
		name = textBox1->Text;

		// check password validity
		if (textBox1->Text == "mohab" && textBox2->Text == "mohab123")
		{
			// message box
			MessageBox::Show("Login Succesfully", "Login Alert");

			// calling next panel (Level panel choice)
			Level->Show();
		}
		else if (textBox1->Text == "admin" && textBox2->Text == "admin")
		{
			MessageBox::Show("Admin Login granted", "Login Alert");
			// call parent panel
			ParentFollowUp->Show();
		}
		else
		{
			MessageBox::Show("Wrong User or Password", "Login Alert");
			textBox1->Text = "";
			textBox2->Text = "";
		}
	}
	private: System::Void Level_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   // call level 1 event
	private: System::Void Level1_Click(System::Object^ sender, System::EventArgs^ e) {
		//LoginForm->Hide();
		Level->Hide();

		panel1->Show();

	}
	private: System::Void Level2_Click(System::Object^ sender, System::EventArgs^ e) {

		Level->Hide();
		panel2->Show();

	}
	private: System::Void Level3_Click(System::Object^ sender, System::EventArgs^ e) {


		Level->Hide();
		panel3->Show();

	}

		   String^ path;
		   int number1 = 0;
		   int number2 = 0;
		   int result1 = 0, result2 = 0;
		   String^ res;
		   String^ oper;
		   int score = 0;
		   bool good = false;


	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			   About->Hide();
			   Level->Show();
		   }
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		Level->Hide();
		About->Show();
	}

		   // handle picture box for number one  in level 1
	private: System::Void Num1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//load number image 
			Num1->ImageLocation = Openfile->FileName;

			//convert picture name (string) to int 
			number1 = int::Parse(System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName));

		}


	}
		   // handle picture box for number one level 1
	private: System::Void Num2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		// check if user choose the  number image and click ok
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//load number image to picture box
			Num2->ImageLocation = Openfile->FileName;

			//convert picture name (string) to int  for number two
			number2 = int::Parse(System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName));

		}
	}
		   // handle picture box for result number  level 1
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

		// check if user choose the  number image and click ok
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//load number image to picture box
			pictureBox1->ImageLocation = Openfile->FileName;

			//convert picture name (string) to int  for number two
			result1 = int::Parse(System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName));
		}
	}
		   // handle picture box for result number  level 1
	private: System::Void Operation_Click_1(System::Object^ sender, System::EventArgs^ e) {

		// check if user choose the  number image and click ok
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//load number image to picture box
			Operation->ImageLocation = Openfile->FileName;

			// picture name
			oper = System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName);


		}
	}
		   // function to convert from system string to string
		   void MarshalString(String^ s, std::string& os) {
			   using namespace Runtime::InteropServices;
			   // ready made function
			   const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
		   }
		   private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			   panel1->Hide();
			   Level->Show();
		   }
		   // check button , check for result
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (oper == gcnew String("+"))
		{
			if (number1 + number2 == result1)
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;

				score++;
				// convert from int to string
				scor->Text = score + "";
				sad->Hide();
				smile->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;

				smile->Hide();
				sad->Show();

			}

		}
		else if (oper == gcnew String("-"))
		{
			if (number1 - number2 == result1)
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;

				score++;
				scor->Text = score + "";
				sad->Hide();
				smile->Show();

			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;

				smile->Hide();
				sad->Show();
			}
		}
		else if (oper == gcnew String("x"))
		{
			if (number1 * number2 == result1)
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;

				score++;
				scor->Text = score + "";
				sad->Hide();
				smile->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;

				smile->Hide();
				sad->Show();
			}
		}
		else if (oper == gcnew String("d"))
		{
			if (number1 / number2 == result1)
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;

				score++;
				scor->Text = score + "";
				sad->Hide();
				smile->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;

				smile->Hide();
				sad->Show();

			}
		}



		time_t now = time(0);
		char* date = ctime(&now);
		std::ofstream settings("Report.txt", std::ofstream::out | std::ofstream::app);
		std::string ss;
		MarshalString(name, ss);

		if (good == true)
		{

			settings << ("your child : ") << ss << (" Solve a question in Crazy Calculator level in a right way ^_^ ") << (" at : ") << (date) << std::endl;
			settings.close();
		}
		else
		{
			settings << ("your child : ") << ss << (" Solve a question in Crazy Calculator level in a wrong way ") << (" at : ") << (date) << std::endl;
			settings.close();
		}




	}
		   // Choose animal image
	private: System::Void animal_Click_1(System::Object^ sender, System::EventArgs^ e) {

		array<String^>^ AnimalArr = gcnew array<String^>{ "Cow", "Donky", "Goat", "Goose", "Hen", "Horse", "Pig", "Rabbit", "Sheap"};

		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			animal->ImageLocation = Openfile->FileName;

		}
	}
	private: System::Void againBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		array<String^>^ AnimalArr = gcnew array<String^>{ "Cow", "Donky", "Goat", "Goose", "Hen", "Horse", "Pig", "Rabbit", "Sheap"};
		RandImg = AnimalArr[rand() % 9];
		label6->Text = RandImg;
		right->Hide();
		wrong->Hide();
	}
		   private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			   panel2->Hide();
			   Level->Show();
		   }
	private: System::Void checkBtn_Click(System::Object^ sender, System::EventArgs^ e) {



		if (RandImg == System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName))
		{
			right->Show();
			good = true;
		}
		else if (true)
		{
			wrong->Show();
			good = false;
		}

		time_t now = time(0);
		char* date = ctime(&now);
		std::ofstream settings("Report.txt", std::ofstream::out | std::ofstream::app);
		std::string ss;

		// convert from system string to normal string
		MarshalString(name, ss);

		if (good == true)
		{

			settings << ("your child : ") << ss << (" Solve a question in Zooooo level in a right way ^_^ ") << (" at : ") << (date) << std::endl;
			settings.close();
		}
		else
		{
			settings << ("your child : ") << ss << (" Solve a question in Zooooo level in a wrong way ") << (" at : ") << (date) << std::endl;
			
			settings.close();
		}



	}
	private: System::Void pictureBox9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox9->ImageLocation = Openfile->FileName;
			number1 = int::Parse(System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName));

		}
	}
	private: System::Void pictureBox8_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox8->ImageLocation = Openfile->FileName;
			oper = System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName);


		}

	}
	private: System::Void pictureBox7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox7->ImageLocation = Openfile->FileName;
			number2 = int::Parse(System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName));

		}
	}
	private: System::Void pictureBox10_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox10->ImageLocation = Openfile->FileName;

			res += System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName);
		}
	}
	private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Openfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox2->ImageLocation = Openfile->FileName;

			res += System::IO::Path::GetFileNameWithoutExtension(Openfile->FileName);
		}
	}
		   private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			   panel3->Hide();
			   Level->Show();
		   }
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		if (oper == gcnew String("+"))
		{
			if (number1 + number2 == int::Parse(res))
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;
				score++;
				label7->Text = score + "";
				pictureBox3->Hide();
				pictureBox4->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;
				pictureBox4->Hide();
				pictureBox3->Show();
			}
			res = "";
		}
		
		else if (oper == gcnew String("-"))
		{
			if (number1 - number2 == int::Parse(res))
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;
				score++;
				label7->Text = score + "";
				pictureBox3->Hide();
				pictureBox4->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;
				pictureBox4->Hide();
				pictureBox3->Show();
			}
			res = "";
		}
		else if (oper == gcnew String("x"))
		{
			if (number1 * number2 == int::Parse(res))
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;
				score++;
				label7->Text = score + "";
				pictureBox3->Hide();
				pictureBox4->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;
				pictureBox4->Hide();
				pictureBox3->Show();
			}
			res = "";
		}
		else if (oper == gcnew String("d"))
		{
			if (number1 / number2 == int::Parse(res))
			{
				MessageBox::Show("Good JOB", "Answer");
				bool good = true;
				score++;
				label7->Text = score + "";
				pictureBox3->Hide();
				pictureBox4->Show();
			}
			else
			{
				MessageBox::Show("Try Again", "Answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
				bool good = false;
				pictureBox4->Hide();
				pictureBox3->Show();
			}
			res = "";
		}
		// calculating time
		time_t now = time(0);
		char* date = ctime(&now);
		std::ofstream settings("Report.txt", std::ofstream::out | std::ofstream::app);
		std::string ss;
		MarshalString(name, ss);

		if (good == true)
		{

			settings << ("your child : ") << ss << (" Solve a question in Hard Calculator level in a right way ^_^ ") << (" at : ") << (date) << std::endl;
			settings.close();
		}
		else
		{
			settings << ("your child : ") << ss << (" Solve a question in Hard Calculator level in a wrong way ") << (" at : ") << (date) << std::endl;
			settings.close();
		}


	}
		   // View Report
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		// read the log file 
		std::ifstream file("Report.txt");
		if (file.is_open()) {
			std::string line;

			// while end of file not reached
			while (!file.eof()) {
				// get line by line from file
				std::getline(file, line);
				// ready func convert from string to system string
				Report->Text += gcnew String(line.c_str());
				Report->Text += "\n";
			}
			file.close();
		}

	}
	private: System::Void Report_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sad_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void About_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
