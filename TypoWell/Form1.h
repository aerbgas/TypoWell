#pragma once

namespace TypoWell {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Form1 の概要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  READY;
	protected: 

	private: System::Windows::Forms::Label^  TimeLabel;
	private: System::Windows::Forms::Label^  SpeedLabel;
	private: System::Windows::Forms::Label^  SpeedLabel2;

	protected: 

	private: System::Windows::Forms::Label^  MissLabel;
	private: System::Windows::Forms::Label^  MissLabel2;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  UsingTextFile;
	private: System::Windows::Forms::Label^  Lap1;
	private: System::Windows::Forms::Label^  Lap2;
	private: System::Windows::Forms::Label^  Lap4;
	private: System::Windows::Forms::Label^  Lap3;
	private: System::Windows::Forms::Label^  Lap6;
	private: System::Windows::Forms::Label^  Lap5;
	private: System::Windows::Forms::Label^  Lap8;
	private: System::Windows::Forms::Label^  Lap7;
	private: System::Windows::Forms::Label^  TimeLabel2;
	private: System::Windows::Forms::Label^  CountDown;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuFile;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuHiraku;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuSyuuryou;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuKiroku;

	private: System::Windows::Forms::ToolStripMenuItem^  MenuKirokuOpen;

	private: System::Windows::Forms::ToolStripMenuItem^  MenuCountDown;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu3Seconds;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu2Seconds;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu1Second;

	private: System::Windows::Forms::Label^  KPM8;
	private: System::Windows::Forms::Label^  KPM7;
	private: System::Windows::Forms::Label^  KPM6;
	private: System::Windows::Forms::Label^  KPM5;
	private: System::Windows::Forms::Label^  KPM4;
	private: System::Windows::Forms::Label^  KPM3;
	private: System::Windows::Forms::Label^  KPM2;
	private: System::Windows::Forms::Label^  KPM1;
	private: System::Windows::Forms::TextBox^  Hide2;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  Hide1;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuMojisuu;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu50;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu100;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu200;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu400;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu300;
	private: System::Windows::Forms::RichTextBox^  textNihongo;
	private: System::Windows::Forms::TextBox^  textRomaji;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuMissSound;

	private: System::Windows::Forms::ToolStripMenuItem^  MenuMissON;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuMissOFF;
	private: System::Windows::Forms::Label^  LevelLabel;
	private: System::Windows::Forms::Label^  LevelLabel2;
	private: System::Windows::Forms::Label^  Level1;
	private: System::Windows::Forms::Label^  Level2;
	private: System::Windows::Forms::Label^  Level3;
	private: System::Windows::Forms::Label^  Level4;
	private: System::Windows::Forms::Label^  Level5;
	private: System::Windows::Forms::Label^  Level6;
	private: System::Windows::Forms::Label^  Level7;
	private: System::Windows::Forms::Label^  Level8;
	private: System::Windows::Forms::ToolStripMenuItem^  ヘルプHToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  readMeRToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->READY = (gcnew System::Windows::Forms::Button());
			this->TimeLabel = (gcnew System::Windows::Forms::Label());
			this->SpeedLabel = (gcnew System::Windows::Forms::Label());
			this->SpeedLabel2 = (gcnew System::Windows::Forms::Label());
			this->MissLabel = (gcnew System::Windows::Forms::Label());
			this->MissLabel2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UsingTextFile = (gcnew System::Windows::Forms::Label());
			this->Lap1 = (gcnew System::Windows::Forms::Label());
			this->Lap2 = (gcnew System::Windows::Forms::Label());
			this->Lap4 = (gcnew System::Windows::Forms::Label());
			this->Lap3 = (gcnew System::Windows::Forms::Label());
			this->Lap6 = (gcnew System::Windows::Forms::Label());
			this->Lap5 = (gcnew System::Windows::Forms::Label());
			this->Lap8 = (gcnew System::Windows::Forms::Label());
			this->Lap7 = (gcnew System::Windows::Forms::Label());
			this->TimeLabel2 = (gcnew System::Windows::Forms::Label());
			this->CountDown = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->MenuFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuHiraku = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->MenuSyuuryou = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuMojisuu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu50 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu100 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu200 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu300 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu400 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuCountDown = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu3Seconds = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu2Seconds = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu1Second = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuMissSound = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuMissON = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuMissOFF = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuKiroku = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuKirokuOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ヘルプHToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readMeRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->KPM8 = (gcnew System::Windows::Forms::Label());
			this->KPM7 = (gcnew System::Windows::Forms::Label());
			this->KPM6 = (gcnew System::Windows::Forms::Label());
			this->KPM5 = (gcnew System::Windows::Forms::Label());
			this->KPM4 = (gcnew System::Windows::Forms::Label());
			this->KPM3 = (gcnew System::Windows::Forms::Label());
			this->KPM2 = (gcnew System::Windows::Forms::Label());
			this->KPM1 = (gcnew System::Windows::Forms::Label());
			this->Hide2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Hide1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textNihongo = (gcnew System::Windows::Forms::RichTextBox());
			this->textRomaji = (gcnew System::Windows::Forms::TextBox());
			this->LevelLabel = (gcnew System::Windows::Forms::Label());
			this->LevelLabel2 = (gcnew System::Windows::Forms::Label());
			this->Level1 = (gcnew System::Windows::Forms::Label());
			this->Level2 = (gcnew System::Windows::Forms::Label());
			this->Level3 = (gcnew System::Windows::Forms::Label());
			this->Level4 = (gcnew System::Windows::Forms::Label());
			this->Level5 = (gcnew System::Windows::Forms::Label());
			this->Level6 = (gcnew System::Windows::Forms::Label());
			this->Level7 = (gcnew System::Windows::Forms::Label());
			this->Level8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// READY
			// 
			this->READY->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->READY->Location = System::Drawing::Point(143, 44);
			this->READY->Name = L"READY";
			this->READY->Size = System::Drawing::Size(149, 35);
			this->READY->TabIndex = 0;
			this->READY->Text = L"READY";
			this->READY->UseVisualStyleBackColor = true;
			this->READY->Click += gcnew System::EventHandler(this, &Form1::READY_Click);
			// 
			// TimeLabel
			// 
			this->TimeLabel->AutoSize = true;
			this->TimeLabel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->TimeLabel->Location = System::Drawing::Point(676, 49);
			this->TimeLabel->Name = L"TimeLabel";
			this->TimeLabel->Size = System::Drawing::Size(62, 24);
			this->TimeLabel->TabIndex = 3;
			this->TimeLabel->Text = L"Time";
			// 
			// SpeedLabel
			// 
			this->SpeedLabel->AutoSize = true;
			this->SpeedLabel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->SpeedLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SpeedLabel->Location = System::Drawing::Point(657, 255);
			this->SpeedLabel->Name = L"SpeedLabel";
			this->SpeedLabel->Size = System::Drawing::Size(59, 19);
			this->SpeedLabel->TabIndex = 4;
			this->SpeedLabel->Text = L"Speed";
			// 
			// SpeedLabel2
			// 
			this->SpeedLabel2->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->SpeedLabel2->Location = System::Drawing::Point(715, 255);
			this->SpeedLabel2->Name = L"SpeedLabel2";
			this->SpeedLabel2->Size = System::Drawing::Size(56, 16);
			this->SpeedLabel2->TabIndex = 5;
			this->SpeedLabel2->Text = L"-";
			this->SpeedLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MissLabel
			// 
			this->MissLabel->AutoSize = true;
			this->MissLabel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->MissLabel->Location = System::Drawing::Point(774, 255);
			this->MissLabel->Name = L"MissLabel";
			this->MissLabel->Size = System::Drawing::Size(49, 19);
			this->MissLabel->TabIndex = 6;
			this->MissLabel->Text = L"Miss";
			// 
			// MissLabel2
			// 
			this->MissLabel2->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->MissLabel2->Location = System::Drawing::Point(820, 255);
			this->MissLabel2->Name = L"MissLabel2";
			this->MissLabel2->Size = System::Drawing::Size(43, 16);
			this->MissLabel2->TabIndex = 7;
			this->MissLabel2->Text = L"0";
			this->MissLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(722, 491);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"ver1.0.0  Dec. 27.2012";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(-3, 483);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(896, 2);
			this->label1->TabIndex = 17;
			// 
			// UsingTextFile
			// 
			this->UsingTextFile->AutoSize = true;
			this->UsingTextFile->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->UsingTextFile->Location = System::Drawing::Point(384, 49);
			this->UsingTextFile->Name = L"UsingTextFile";
			this->UsingTextFile->Size = System::Drawing::Size(127, 24);
			this->UsingTextFile->TabIndex = 20;
			this->UsingTextFile->Text = L"kihon.txt";
			// 
			// Lap1
			// 
			this->Lap1->BackColor = System::Drawing::Color::White;
			this->Lap1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap1->Location = System::Drawing::Point(694, 286);
			this->Lap1->Name = L"Lap1";
			this->Lap1->Size = System::Drawing::Size(57, 21);
			this->Lap1->TabIndex = 21;
			this->Lap1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap2
			// 
			this->Lap2->BackColor = System::Drawing::Color::White;
			this->Lap2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap2->Location = System::Drawing::Point(694, 309);
			this->Lap2->Name = L"Lap2";
			this->Lap2->Size = System::Drawing::Size(57, 21);
			this->Lap2->TabIndex = 22;
			this->Lap2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap4
			// 
			this->Lap4->BackColor = System::Drawing::Color::White;
			this->Lap4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap4->Location = System::Drawing::Point(694, 355);
			this->Lap4->Name = L"Lap4";
			this->Lap4->Size = System::Drawing::Size(57, 21);
			this->Lap4->TabIndex = 24;
			this->Lap4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap3
			// 
			this->Lap3->BackColor = System::Drawing::Color::White;
			this->Lap3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap3->Location = System::Drawing::Point(694, 332);
			this->Lap3->Name = L"Lap3";
			this->Lap3->Size = System::Drawing::Size(57, 21);
			this->Lap3->TabIndex = 23;
			this->Lap3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap6
			// 
			this->Lap6->BackColor = System::Drawing::Color::White;
			this->Lap6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap6->Location = System::Drawing::Point(694, 401);
			this->Lap6->Name = L"Lap6";
			this->Lap6->Size = System::Drawing::Size(57, 21);
			this->Lap6->TabIndex = 26;
			this->Lap6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap5
			// 
			this->Lap5->BackColor = System::Drawing::Color::White;
			this->Lap5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap5->Location = System::Drawing::Point(694, 378);
			this->Lap5->Name = L"Lap5";
			this->Lap5->Size = System::Drawing::Size(57, 21);
			this->Lap5->TabIndex = 25;
			this->Lap5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap8
			// 
			this->Lap8->BackColor = System::Drawing::Color::White;
			this->Lap8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap8->Location = System::Drawing::Point(694, 447);
			this->Lap8->Name = L"Lap8";
			this->Lap8->Size = System::Drawing::Size(57, 21);
			this->Lap8->TabIndex = 28;
			this->Lap8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Lap7
			// 
			this->Lap7->BackColor = System::Drawing::Color::White;
			this->Lap7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Lap7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Lap7->Location = System::Drawing::Point(694, 424);
			this->Lap7->Name = L"Lap7";
			this->Lap7->Size = System::Drawing::Size(57, 21);
			this->Lap7->TabIndex = 27;
			this->Lap7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// TimeLabel2
			// 
			this->TimeLabel2->BackColor = System::Drawing::Color::White;
			this->TimeLabel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TimeLabel2->Location = System::Drawing::Point(749, 49);
			this->TimeLabel2->Name = L"TimeLabel2";
			this->TimeLabel2->Size = System::Drawing::Size(98, 28);
			this->TimeLabel2->TabIndex = 29;
			this->TimeLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// CountDown
			// 
			this->CountDown->BackColor = System::Drawing::Color::White;
			this->CountDown->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CountDown->Location = System::Drawing::Point(45, 48);
			this->CountDown->Name = L"CountDown";
			this->CountDown->Size = System::Drawing::Size(66, 28);
			this->CountDown->TabIndex = 30;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->MenuFile, this->MenuMojisuu, 
				this->MenuCountDown, this->MenuMissSound, this->MenuKiroku, this->ヘルプHToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(888, 24);
			this->menuStrip1->TabIndex = 31;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MenuFile
			// 
			this->MenuFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->MenuHiraku, 
				this->toolStripSeparator1, this->MenuSyuuryou});
			this->MenuFile->Name = L"MenuFile";
			this->MenuFile->Size = System::Drawing::Size(70, 20);
			this->MenuFile->Text = L"ファイル(&F)";
			// 
			// MenuHiraku
			// 
			this->MenuHiraku->Name = L"MenuHiraku";
			this->MenuHiraku->Size = System::Drawing::Size(116, 22);
			this->MenuHiraku->Text = L"開く(&O)";
			this->MenuHiraku->Click += gcnew System::EventHandler(this, &Form1::MenuHiraku_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(113, 6);
			// 
			// MenuSyuuryou
			// 
			this->MenuSyuuryou->Name = L"MenuSyuuryou";
			this->MenuSyuuryou->Size = System::Drawing::Size(116, 22);
			this->MenuSyuuryou->Text = L"終了(&X)";
			this->MenuSyuuryou->Click += gcnew System::EventHandler(this, &Form1::MenuSyuuryou_Click);
			// 
			// MenuMojisuu
			// 
			this->MenuMojisuu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->Menu50, 
				this->Menu100, this->Menu200, this->Menu300, this->Menu400});
			this->MenuMojisuu->Name = L"MenuMojisuu";
			this->MenuMojisuu->Size = System::Drawing::Size(99, 20);
			this->MenuMojisuu->Text = L"文字数設定(&M)";
			// 
			// Menu50
			// 
			this->Menu50->Name = L"Menu50";
			this->Menu50->Size = System::Drawing::Size(112, 22);
			this->Menu50->Text = L"50(&5)";
			this->Menu50->Click += gcnew System::EventHandler(this, &Form1::Menu50_Click);
			// 
			// Menu100
			// 
			this->Menu100->Name = L"Menu100";
			this->Menu100->Size = System::Drawing::Size(112, 22);
			this->Menu100->Text = L"100(&1)";
			this->Menu100->Click += gcnew System::EventHandler(this, &Form1::Menu100_Click);
			// 
			// Menu200
			// 
			this->Menu200->Name = L"Menu200";
			this->Menu200->Size = System::Drawing::Size(112, 22);
			this->Menu200->Text = L"200(&2)";
			this->Menu200->Click += gcnew System::EventHandler(this, &Form1::Menu200_Click);
			// 
			// Menu300
			// 
			this->Menu300->Name = L"Menu300";
			this->Menu300->Size = System::Drawing::Size(112, 22);
			this->Menu300->Text = L"300(&3)";
			this->Menu300->Click += gcnew System::EventHandler(this, &Form1::Menu300_Click);
			// 
			// Menu400
			// 
			this->Menu400->Name = L"Menu400";
			this->Menu400->Size = System::Drawing::Size(112, 22);
			this->Menu400->Text = L"400(&4)";
			this->Menu400->Click += gcnew System::EventHandler(this, &Form1::Menu400_Click);
			// 
			// MenuCountDown
			// 
			this->MenuCountDown->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->Menu3Seconds, 
				this->Menu2Seconds, this->Menu1Second});
			this->MenuCountDown->Name = L"MenuCountDown";
			this->MenuCountDown->Size = System::Drawing::Size(99, 20);
			this->MenuCountDown->Text = L"カウントダウン(&C)";
			// 
			// Menu3Seconds
			// 
			this->Menu3Seconds->Name = L"Menu3Seconds";
			this->Menu3Seconds->Size = System::Drawing::Size(155, 22);
			this->Menu3Seconds->Text = L"3秒後に開始(&3)";
			this->Menu3Seconds->Click += gcnew System::EventHandler(this, &Form1::Menu3Seconds_Click);
			// 
			// Menu2Seconds
			// 
			this->Menu2Seconds->Name = L"Menu2Seconds";
			this->Menu2Seconds->Size = System::Drawing::Size(155, 22);
			this->Menu2Seconds->Text = L"2秒後に開始(&2)";
			this->Menu2Seconds->Click += gcnew System::EventHandler(this, &Form1::Menu2Seconds_Click);
			// 
			// Menu1Second
			// 
			this->Menu1Second->Name = L"Menu1Second";
			this->Menu1Second->Size = System::Drawing::Size(155, 22);
			this->Menu1Second->Text = L"1秒後に開始(&1)";
			this->Menu1Second->Click += gcnew System::EventHandler(this, &Form1::Menu1Second_Click);
			// 
			// MenuMissSound
			// 
			this->MenuMissSound->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->MenuMissON, 
				this->MenuMissOFF});
			this->MenuMissSound->Name = L"MenuMissSound";
			this->MenuMissSound->Size = System::Drawing::Size(65, 20);
			this->MenuMissSound->Text = L"ミス音(&B)";
			// 
			// MenuMissON
			// 
			this->MenuMissON->Name = L"MenuMissON";
			this->MenuMissON->Size = System::Drawing::Size(139, 22);
			this->MenuMissON->Text = L"鳴らす(&1)";
			this->MenuMissON->Click += gcnew System::EventHandler(this, &Form1::MenuMissON_Click);
			// 
			// MenuMissOFF
			// 
			this->MenuMissOFF->Name = L"MenuMissOFF";
			this->MenuMissOFF->Size = System::Drawing::Size(139, 22);
			this->MenuMissOFF->Text = L"鳴らさない(&2)";
			this->MenuMissOFF->Click += gcnew System::EventHandler(this, &Form1::MenuMissOFF_Click);
			// 
			// MenuKiroku
			// 
			this->MenuKiroku->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->MenuKirokuOpen});
			this->MenuKiroku->Name = L"MenuKiroku";
			this->MenuKiroku->Size = System::Drawing::Size(61, 20);
			this->MenuKiroku->Text = L"記録(&K)";
			// 
			// MenuKirokuOpen
			// 
			this->MenuKirokuOpen->Name = L"MenuKirokuOpen";
			this->MenuKirokuOpen->Size = System::Drawing::Size(178, 22);
			this->MenuKirokuOpen->Text = L"kiroku.csvを開く(&K)";
			this->MenuKirokuOpen->Click += gcnew System::EventHandler(this, &Form1::MenuKirokuOpen_Click);
			// 
			// ヘルプHToolStripMenuItem
			// 
			this->ヘルプHToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->readMeRToolStripMenuItem});
			this->ヘルプHToolStripMenuItem->Name = L"ヘルプHToolStripMenuItem";
			this->ヘルプHToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->ヘルプHToolStripMenuItem->Text = L"ヘルプ(&H)";
			// 
			// readMeRToolStripMenuItem
			// 
			this->readMeRToolStripMenuItem->Name = L"readMeRToolStripMenuItem";
			this->readMeRToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->readMeRToolStripMenuItem->Text = L"ReadMe(&R)";
			this->readMeRToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::readMeRToolStripMenuItem_Click);
			// 
			// KPM8
			// 
			this->KPM8->BackColor = System::Drawing::Color::White;
			this->KPM8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM8->Location = System::Drawing::Point(756, 447);
			this->KPM8->Name = L"KPM8";
			this->KPM8->Size = System::Drawing::Size(57, 21);
			this->KPM8->TabIndex = 41;
			this->KPM8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM7
			// 
			this->KPM7->BackColor = System::Drawing::Color::White;
			this->KPM7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM7->Location = System::Drawing::Point(756, 424);
			this->KPM7->Name = L"KPM7";
			this->KPM7->Size = System::Drawing::Size(57, 21);
			this->KPM7->TabIndex = 40;
			this->KPM7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM6
			// 
			this->KPM6->BackColor = System::Drawing::Color::White;
			this->KPM6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM6->Location = System::Drawing::Point(756, 401);
			this->KPM6->Name = L"KPM6";
			this->KPM6->Size = System::Drawing::Size(57, 21);
			this->KPM6->TabIndex = 39;
			this->KPM6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM5
			// 
			this->KPM5->BackColor = System::Drawing::Color::White;
			this->KPM5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM5->Location = System::Drawing::Point(756, 378);
			this->KPM5->Name = L"KPM5";
			this->KPM5->Size = System::Drawing::Size(57, 21);
			this->KPM5->TabIndex = 38;
			this->KPM5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM4
			// 
			this->KPM4->BackColor = System::Drawing::Color::White;
			this->KPM4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM4->Location = System::Drawing::Point(756, 355);
			this->KPM4->Name = L"KPM4";
			this->KPM4->Size = System::Drawing::Size(57, 21);
			this->KPM4->TabIndex = 37;
			this->KPM4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM3
			// 
			this->KPM3->BackColor = System::Drawing::Color::White;
			this->KPM3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM3->Location = System::Drawing::Point(756, 332);
			this->KPM3->Name = L"KPM3";
			this->KPM3->Size = System::Drawing::Size(57, 21);
			this->KPM3->TabIndex = 36;
			this->KPM3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM2
			// 
			this->KPM2->BackColor = System::Drawing::Color::White;
			this->KPM2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM2->Location = System::Drawing::Point(756, 309);
			this->KPM2->Name = L"KPM2";
			this->KPM2->Size = System::Drawing::Size(57, 21);
			this->KPM2->TabIndex = 35;
			this->KPM2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KPM1
			// 
			this->KPM1->BackColor = System::Drawing::Color::White;
			this->KPM1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->KPM1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->KPM1->Location = System::Drawing::Point(756, 286);
			this->KPM1->Name = L"KPM1";
			this->KPM1->Size = System::Drawing::Size(57, 21);
			this->KPM1->TabIndex = 34;
			this->KPM1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Hide2
			// 
			this->Hide2->BackColor = System::Drawing::Color::Navy;
			this->Hide2->Cursor = System::Windows::Forms::Cursors::Default;
			this->Hide2->Enabled = false;
			this->Hide2->Location = System::Drawing::Point(25, 286);
			this->Hide2->Multiline = true;
			this->Hide2->Name = L"Hide2";
			this->Hide2->Size = System::Drawing::Size(838, 182);
			this->Hide2->TabIndex = 42;
			this->Hide2->TabStop = false;
			// 
			// Hide1
			// 
			this->Hide1->BackColor = System::Drawing::Color::White;
			this->Hide1->Cursor = System::Windows::Forms::Cursors::Default;
			this->Hide1->Enabled = false;
			this->Hide1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Hide1->Location = System::Drawing::Point(25, 95);
			this->Hide1->Multiline = true;
			this->Hide1->Name = L"Hide1";
			this->Hide1->Size = System::Drawing::Size(838, 149);
			this->Hide1->TabIndex = 43;
			this->Hide1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// textNihongo
			// 
			this->textNihongo->BackColor = System::Drawing::Color::White;
			this->textNihongo->Cursor = System::Windows::Forms::Cursors::Default;
			this->textNihongo->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 13.5F));
			this->textNihongo->Location = System::Drawing::Point(25, 95);
			this->textNihongo->Name = L"textNihongo";
			this->textNihongo->ReadOnly = true;
			this->textNihongo->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->textNihongo->Size = System::Drawing::Size(838, 149);
			this->textNihongo->TabIndex = 44;
			this->textNihongo->TabStop = false;
			this->textNihongo->Text = L"";
			this->textNihongo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textNihongo_KeyDown);
			// 
			// textRomaji
			// 
			this->textRomaji->BackColor = System::Drawing::SystemColors::Control;
			this->textRomaji->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->textRomaji->Location = System::Drawing::Point(25, 286);
			this->textRomaji->Multiline = true;
			this->textRomaji->Name = L"textRomaji";
			this->textRomaji->ReadOnly = true;
			this->textRomaji->Size = System::Drawing::Size(663, 182);
			this->textRomaji->TabIndex = 1;
			this->textRomaji->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textRomaji_KeyDown);
			// 
			// LevelLabel
			// 
			this->LevelLabel->AutoSize = true;
			this->LevelLabel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->LevelLabel->Location = System::Drawing::Point(543, 255);
			this->LevelLabel->Name = L"LevelLabel";
			this->LevelLabel->Size = System::Drawing::Size(59, 19);
			this->LevelLabel->TabIndex = 45;
			this->LevelLabel->Text = L"Level";
			// 
			// LevelLabel2
			// 
			this->LevelLabel2->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->LevelLabel2->Location = System::Drawing::Point(608, 255);
			this->LevelLabel2->Name = L"LevelLabel2";
			this->LevelLabel2->Size = System::Drawing::Size(43, 19);
			this->LevelLabel2->TabIndex = 46;
			this->LevelLabel2->Text = L"-";
			this->LevelLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level1
			// 
			this->Level1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level1->Location = System::Drawing::Point(825, 286);
			this->Level1->Name = L"Level1";
			this->Level1->Size = System::Drawing::Size(33, 19);
			this->Level1->TabIndex = 48;
			this->Level1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level2
			// 
			this->Level2->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level2->Location = System::Drawing::Point(825, 309);
			this->Level2->Name = L"Level2";
			this->Level2->Size = System::Drawing::Size(33, 19);
			this->Level2->TabIndex = 49;
			this->Level2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level3
			// 
			this->Level3->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level3->Location = System::Drawing::Point(825, 332);
			this->Level3->Name = L"Level3";
			this->Level3->Size = System::Drawing::Size(33, 19);
			this->Level3->TabIndex = 50;
			this->Level3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level4
			// 
			this->Level4->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level4->Location = System::Drawing::Point(825, 355);
			this->Level4->Name = L"Level4";
			this->Level4->Size = System::Drawing::Size(33, 19);
			this->Level4->TabIndex = 51;
			this->Level4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level5
			// 
			this->Level5->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level5->Location = System::Drawing::Point(825, 378);
			this->Level5->Name = L"Level5";
			this->Level5->Size = System::Drawing::Size(33, 19);
			this->Level5->TabIndex = 52;
			this->Level5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level6
			// 
			this->Level6->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level6->Location = System::Drawing::Point(825, 401);
			this->Level6->Name = L"Level6";
			this->Level6->Size = System::Drawing::Size(33, 19);
			this->Level6->TabIndex = 53;
			this->Level6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level7
			// 
			this->Level7->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level7->Location = System::Drawing::Point(825, 424);
			this->Level7->Name = L"Level7";
			this->Level7->Size = System::Drawing::Size(33, 19);
			this->Level7->TabIndex = 54;
			this->Level7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Level8
			// 
			this->Level8->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Level8->Location = System::Drawing::Point(825, 447);
			this->Level8->Name = L"Level8";
			this->Level8->Size = System::Drawing::Size(33, 19);
			this->Level8->TabIndex = 55;
			this->Level8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 514);
			this->Controls->Add(this->Hide2);
			this->Controls->Add(this->Level8);
			this->Controls->Add(this->Level7);
			this->Controls->Add(this->Level6);
			this->Controls->Add(this->Level5);
			this->Controls->Add(this->Level4);
			this->Controls->Add(this->Level3);
			this->Controls->Add(this->Level2);
			this->Controls->Add(this->Level1);
			this->Controls->Add(this->LevelLabel2);
			this->Controls->Add(this->LevelLabel);
			this->Controls->Add(this->KPM8);
			this->Controls->Add(this->KPM7);
			this->Controls->Add(this->KPM6);
			this->Controls->Add(this->KPM5);
			this->Controls->Add(this->KPM4);
			this->Controls->Add(this->KPM3);
			this->Controls->Add(this->KPM2);
			this->Controls->Add(this->KPM1);
			this->Controls->Add(this->CountDown);
			this->Controls->Add(this->TimeLabel2);
			this->Controls->Add(this->Lap8);
			this->Controls->Add(this->Lap7);
			this->Controls->Add(this->Lap6);
			this->Controls->Add(this->Lap5);
			this->Controls->Add(this->Lap4);
			this->Controls->Add(this->Lap3);
			this->Controls->Add(this->Lap2);
			this->Controls->Add(this->Lap1);
			this->Controls->Add(this->UsingTextFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->MissLabel2);
			this->Controls->Add(this->MissLabel);
			this->Controls->Add(this->SpeedLabel2);
			this->Controls->Add(this->SpeedLabel);
			this->Controls->Add(this->TimeLabel);
			this->Controls->Add(this->READY);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textRomaji);
			this->Controls->Add(this->Hide1);
			this->Controls->Add(this->textNihongo);
			this->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"タイポウェル";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



#define OKExc MessageBoxButtons::OK, MessageBoxIcon::Exclamation
#define ENCODE System::Text::Encoding::GetEncoding("Shift-Jis")

private: array<String^>^ Word; // テキストファイルの内容を保存する
		 int wb; // 現在打っているワードの文字番号 wordbangou
		 int miss; // ミス数
		 double keika; // GO!からの経過時間
		 int wordlen; // 出題するワードの長さ

#pragma region メイン処理
// READYボタンクリック（ワード生成＆カウントダウン）
	private: System::Void READY_Click(System::Object^  sender, System::EventArgs^  e) {
				 // ワード生成
				 // Wordの中からランダムで行を選び、400文字になるまで足していく
				 int len = Word->Length;
				 Random^ rand = gcnew Random();
				 static bool furiwake;
				 furiwake = false;

				 while (textRomaji->Text->Length < wordlen) {
					 // Wordの要素数を超えない範囲でランダムに取り出す 
					 for each (String^ s in Word[rand->Next(len)]->Split(',')) {
						 if (furiwake == false) {
							 textNihongo->Text += s;
							 textNihongo->Text += "　";
							 furiwake = true;
						 } else {
							 textRomaji->Text += s;
							 textRomaji->Text += " ";
							 furiwake = false;
						 }
					 }
				 }

				 // textRomajiの長さがwordlenを超えているなら、ここで超えた分を削り落とす
				 int len2 = textRomaji->Text->Length;
				 if (len2 > wordlen) {
					 textRomaji->Text = textRomaji->Text->Remove(wordlen, len2 - wordlen);
				 }

				 for (int i=0; i<wordlen; ++i) {
					 // 改行を付加することで文字列の長さが2増えてしまうためこのように書く
					 if (i==50 || i==102 || i==154 || i==206 || i==258 || i==310 || i==362 || i==414) {
						 textRomaji->Text = textRomaji->Text->Insert(i, "\r\n");
					 }
				 }

				 // カウントダウン処理
				 CountDown->ForeColor = Color::Black;
				 // 最初のカウントはすぐに表示
				 if (Menu3Seconds->Checked == true) {
					 CountDown->Text = "3";
				 } else if (Menu2Seconds->Checked == true) {
					 CountDown->Text = "   2";
				 } else {
					 CountDown->Text = "      1";
				 }

				 // 2番目以降のカウントはtimer2を利用して1秒ごとに進行
				 timer2->Enabled = true;
				 while (timer2->Enabled == true) {
					 Application::DoEvents();
				 }

				 CountDown->ForeColor = Color::Red;
				 CountDown->Text = " GO!";
				 READY->Enabled = false;
				 MenuHiraku->Enabled = false;
				 Hide1->Visible = false;
				 Hide2->Visible = false;
				 timer1->Enabled = true;
			
				 // フォーカスをtextRomajiに合わせる
				 ProcessTabKey(true);
				 // 勝手にテキストボックスの内容を選択した状態になるので、それを解除
				 textRomaji->SelectionLength = 0;
			 }



// 打鍵処理＆打ち切り処理
private: System::Void textRomaji_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 // GO!と表示されていないときは、キーを入力しても何もせずreturn
			 if (CountDown->Text != " GO!") {
				 return;
			 }

			 // 打たれた文字が正しければ++wb、間違っていれば++miss
			 if (e->KeyValue == textRomaji->Text[wb].ToUpper(textRomaji->Text[wb])) {
				 ++wb;
			 } else if (textRomaji->Text[wb] == '-' && e->KeyValue == 189) {
				 // ハイフン用、e->KeyValue == '-'ではダメで、デバッグすると文字コードが189になっているためこのように書いている
				 ++wb;
			 } else if (e->KeyValue == 27) {
				 // Esc
				 Shokika();
				 ProcessTabKey(true);
				 return;
			 } else {
				 // ミス
				 if (MenuMissON->Checked == true) {
					 System::Media::SystemSounds::Beep->Play();
				 }
				 ++miss;
				 if (miss <= 999) {
					 MissLabel2->Text = miss.ToString();
				 }
			 }

			 // 改行が来たらwbを+2することで飛ばす
			 if (wb != textRomaji->Text->Length && textRomaji->Text[wb] == '\r') {
				 // 一つ目の条件を書かないと、最後の文字を打ったときに
				 // インデックスの外を参照するエラーが発生する
				 wb += 2;
			 }
			 // 最後の文字まで打ったときもwbを+2（ラップタイム・ラップスピードを表示させるため）
			 if (wb == textRomaji->Text->Length) {
				 wb += 2;
			 }

			 // 50文字ごとにラップタイム・ラップスピードを表示する
			 switch (wb) {
				 case 52:
					 Lap1->Text = TimeLabel2->Text;
					 KPM1->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap1->Text)).ToString();
					 Level1->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap1->Text)));
					 break;
				 case 104:
					 Lap2->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)).ToString("f1");
					 KPM2->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap2->Text)).ToString();
					 Level2->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap2->Text)));
					 break;
				 case 156:
					 Lap3->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)
						 - Convert::ToDouble(Lap2->Text)).ToString("f1");
					 KPM3->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap3->Text)).ToString();
					 Level3->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap3->Text)));
					 break;
				 case 208:
					 Lap4->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)
						 - Convert::ToDouble(Lap2->Text) - Convert::ToDouble(Lap3->Text)).ToString("f1");
					 KPM4->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap4->Text)).ToString();
					 Level4->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap4->Text)));
					 break;
				 case 260:
					 Lap5->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)
						 - Convert::ToDouble(Lap2->Text) - Convert::ToDouble(Lap3->Text)
						 - Convert::ToDouble(Lap4->Text)).ToString("f1");
					 KPM5->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap5->Text)).ToString();
					 Level5->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap5->Text)));
					 break;
				 case 312:
					 Lap6->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)
						 - Convert::ToDouble(Lap2->Text) - Convert::ToDouble(Lap3->Text)
						 - Convert::ToDouble(Lap4->Text) - Convert::ToDouble(Lap5->Text)).ToString("f1");
					 KPM6->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap6->Text)).ToString();
					 Level6->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap6->Text)));
					 break;
				 case 364:
					 Lap7->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)
						 - Convert::ToDouble(Lap2->Text) - Convert::ToDouble(Lap3->Text)
						 - Convert::ToDouble(Lap4->Text) - Convert::ToDouble(Lap5->Text)
						 - Convert::ToDouble(Lap6->Text)).ToString("f1");
					 KPM7->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap7->Text)).ToString();
					 Level7->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap7->Text)));
					 break;
				 case 416:
					 Lap8->Text = (Convert::ToDouble(TimeLabel2->Text) - Convert::ToDouble(Lap1->Text)
						 - Convert::ToDouble(Lap2->Text) - Convert::ToDouble(Lap3->Text)
						 - Convert::ToDouble(Lap4->Text) - Convert::ToDouble(Lap5->Text)
						 - Convert::ToDouble(Lap6->Text) - Convert::ToDouble(Lap7->Text)).ToString("f1");
					 KPM8->Text = Convert::ToInt32(3000 / Convert::ToDouble(Lap8->Text)).ToString();
					 Level8->Text = TWLevel(Convert::ToInt32(3000 / Convert::ToDouble(Lap8->Text)));
					 break;
			 }

			 // 打ち切り後の処理
			 if (wb == textRomaji->Text->Length + 2) {
				 // wbの値を改行の数だけ差し引く
				 wb -= wb/50 * 2;

				 // TimeとSpeedの更新を止める
				 timer1->Enabled = false;
				 SpeedLabel2->Text = (Convert::ToInt32(wb / keika * 60)).ToString();
				 LevelLabel2->Text = TWLevel(Convert::ToInt32(wb / keika * 60));

				 // 1.MessageBoxの表示
				 MessageBox::Show(SpeedLabel2->Text+"KPM、ミス"+miss.ToString()+"回、レベル"+LevelLabel2->Text+"、タイム"+TimeLabel2->Text+"秒でした。", "打ち切り");

				 // 2.kiroku.csvに書き込み
				 RETRY:
				 try {
					 if (System::IO::File::Exists("kiroku.csv") == false ||
						 System::IO::File::ReadAllText("kiroku.csv", ENCODE) == "") {
						System::IO::File::WriteAllText("kiroku.csv",
							"打鍵速度,ミス,タイム,文字数,使用ワード,日付,時刻,ラップ1,ラップ2,ラップ3,ラップ4,ラップ5,ラップ6,ラップ7,ラップ8\r\n", ENCODE);
					 }

					 String^ str = System::IO::File::ReadAllText("kiroku.csv", ENCODE);
					 str += SpeedLabel2->Text+","+miss.ToString()+","+TimeLabel2->Text+
						 ","+wb.ToString()+","+UsingTextFile->Text+
						 ","+DateTime::Now.ToString("yyyy/MM/dd")+
						 ","+DateTime::Now.ToString("HH:mm:ss");

					 // Lapの中身が空なら空白が書き込まれるため、文字数による場合分けは不要
					 str += ","+Lap1->Text+","+Lap2->Text+","+Lap3->Text+","+Lap4->Text+
							","+Lap5->Text+","+Lap6->Text+","+Lap7->Text+","+Lap8->Text+"\r\n";

					 System::IO::File::WriteAllText("kiroku.csv", str, ENCODE);
				 } catch (Exception^ ex) {
					 ex;
					 if (MessageBox::Show("記録の書き込み中にエラーが発生しました。\r\ncsvファイルを開いている場合は閉じてから再試行してください。", "エラー",
						 MessageBoxButtons::RetryCancel, MessageBoxIcon::Exclamation)
						 == System::Windows::Forms::DialogResult::Retry) {
						 goto RETRY;
					 }
				 }

				 // 3.コントロール初期化
				 Shokika();
				 ProcessTabKey(true); // READYのEnabledがtrueになってから書く
			 }
		 }
#pragma endregion


#pragma region timer系
// timer系
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 // 経過時間をTimeLabel2に表示 ＆ SpeedをSpeedLabel2に表示
			 keika += 0.1;
			 TimeLabel2->Text = keika.ToString("f1");
			 int buf = wb - wb/50 * 2; // wbには改行が含まれているため、それを差し引く
			 buf = Convert::ToInt32(buf / keika * 60);
			 SpeedLabel2->Text = buf.ToString();
			 LevelLabel2->Text = TWLevel(buf);
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 // カウントダウン
			 static int cntflg = 0;

			 if (Menu3Seconds->Checked == true) {
				 if (cntflg == 0) {
					 CountDown->Text = "   2";
					 ++cntflg;
				 } else if (cntflg == 1) {
					 CountDown->Text = "      1";
					 ++cntflg;
				 } else {
					 cntflg = 0;
					 timer2->Enabled = false;
				 }
			 } else if (Menu2Seconds->Checked == true) {
				 if (cntflg == 0) {
					 CountDown->Text = "      1";
					 ++cntflg;
				 } else if (cntflg == 1) {
					 cntflg = 0;
					 timer2->Enabled = false;
				 }
			 } else {
				 cntflg = 0;
				 timer2->Enabled = false;
			 }
		 }
#pragma endregion


#pragma region その他の主要処理
// その他の主要処理
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 // kihon.txtを読み込んでWordに代入
			 if (System::IO::File::Exists("kihon.txt") == false) {
				 MessageBox::Show("kihon.txtが存在しません。", "エラー", OKExc);
				 READY->Enabled = false;
				 UsingTextFile->Text = "未選択";
				 return;
			 }

			 array<String^>^ buf = System::IO::File::ReadAllLines("kihon.txt", ENCODE);
			 // 中身が空なら弾く
			 if (buf->Length == 0) {
				 MessageBox::Show("kihon.txtの内容が正しくありません。", "エラー", OKExc);
				 READY->Enabled = false;
				 UsingTextFile->Text = "未選択";
				 return;
			 }
			 for (int i=0; i<buf->Length; ++i) {
				 // bufの中に , が無い行が一つでもあれば弾く
				 if (buf[i]->IndexOf(',') == -1) {
					 MessageBox::Show("kihon.txtの内容が正しくありません。", "エラー", OKExc);
					 READY->Enabled = false;
					 UsingTextFile->Text = "未選択";
					 return;
				 }
			 }

			 Word = System::IO::File::ReadAllLines("kihon.txt", ENCODE);

			 // 各種変数の初期化
			 wb = 0;
			 miss = 0;
			 keika = 0.0;

			 // settings.txtが存在する場合は、その内容を読み込んで前回終了時の
			 // 「文字数設定」「カウントダウン」「ミス音」の設定を復活させる
			 if (System::IO::File::Exists("settings.txt") == false) {
				 // 存在しない場合はデフォルト値として「400, 3秒後, 鳴らす」を設定
				 Menu400->Checked = true;
				 wordlen = 400;
				 Menu3Seconds->Checked = true;
				 MenuMissON->Checked = true;
				 return;
			 }

			 StreamReader^ r = gcnew StreamReader("settings.txt", ENCODE);
			 try {
				 String^ buf1 = r->ReadLine();
				 String^ buf2 = r->ReadLine();
				 String^ buf3 = r->ReadLine();

				 if (buf1 == "1") {
					 Menu50->Checked = true;
					 wordlen = 50;
				 } else if (buf1 == "2") {
					 Menu100->Checked = true;
					 wordlen = 100;
				 } else if (buf1 == "3") {
					 Menu200->Checked = true;
					 wordlen = 200;
				 } else if (buf1 == "4") {
					 Menu300->Checked = true;
					 wordlen = 300;
				 } else {
					 Menu400->Checked = true;
					 wordlen = 400;
				 }

				 if (buf2 == "3")
					 Menu1Second->Checked = true;
				 else if (buf2 == "2")
					 Menu2Seconds->Checked = true;
				 else
					 Menu3Seconds->Checked = true;

				 if (buf3 == "2")
					 MenuMissOFF->Checked = true;
				 else
					 MenuMissON->Checked = true;
			 } catch (Exception^ ex) {
				 ex;
				 Menu400->Checked = true;
				 wordlen = 400;
				 Menu3Seconds->Checked = true;
				 MenuMissON->Checked = true;
			 }

			 r->Close();
		 }
private: System::Void MenuHiraku_Click(System::Object^  sender, System::EventArgs^  e) {
			 // .txtを選ぶためのダイアログを表示
			 openFileDialog1->Filter = "txt形式(*.txt)|*.txt|すべてのファイル(*.*)|*.*";
			 if (openFileDialog1->ShowDialog() !=
				 System::Windows::Forms::DialogResult::OK) {
				 return;
			 }
			 
			 // .txt以外が選ばれたらメッセージボックスを表示してreturn
			 if (System::IO::Path::GetExtension(openFileDialog1->FileName) != ".txt") {
				 MessageBox::Show("選択されたファイルはテキストファイルではありません。", "エラー", OKExc);
				 return;
			 }

			 // .txtの形式が正しいか確認
			 array<String^>^ buf = System::IO::File::ReadAllLines(openFileDialog1->FileName, ENCODE);
			 // 中身が空なら弾く
			 if (buf->Length == 0) {
				 MessageBox::Show("テキストファイルの内容が正しくありません。", "エラー", OKExc);
				 return;
			 }
			 for (int i=0; i<buf->Length; ++i) {
				 // bufの中に , が無い行が一つでもあれば弾く
				 if (buf[i]->IndexOf(',') == -1) {
					 MessageBox::Show("テキストファイルの内容が正しくありません。", "エラー", OKExc);
					 return;
				 }
			 }

			 // 正しければWordの内容を更新
			 Word = buf;
			 UsingTextFile->Text = System::IO::Path::GetFileName(openFileDialog1->FileName);
			 if (READY->Enabled == false) {
				 READY->Enabled = true;
			 }
		 }
private: System::Void MenuKirokuOpen_Click(System::Object^  sender, System::EventArgs^  e) {
			 // kiroku.csvを紐付くソフトで開く
			 if (System::IO::File::Exists("kiroku.csv") == false) {
				 MessageBox::Show("kiroku.csvが存在しません。", "エラー", OKExc);
				 return;
			 }

			 System::Diagnostics::Process::Start("kiroku.csv");
		 }
private: void Shokika(void) {
			 CountDown->Text = "";
			 textNihongo->Text = "";
			 textRomaji->Text = "";
			 Hide1->Visible = true;
			 Hide2->Visible = true;
			 TimeLabel2->Text = "";
			 SpeedLabel2->Text = "-";
			 MissLabel2->Text = "0";
			 Lap1->Text = ""; Lap2->Text = "";
			 Lap3->Text = ""; Lap4->Text = "";
			 Lap5->Text = ""; Lap6->Text = "";
			 Lap7->Text = ""; Lap8->Text = "";
			 KPM1->Text = ""; KPM2->Text = "";
			 KPM3->Text = ""; KPM4->Text = "";
			 KPM5->Text = ""; KPM6->Text = "";
			 KPM7->Text = ""; KPM8->Text = "";
			 wb = 0;
			 miss = 0;

			 timer1->Enabled = false;
			 keika = 0.0;

			 READY->Enabled = true;
			 MenuHiraku->Enabled = true;

			 LevelLabel2->Text = "-";
			 Level1->Text = ""; Level2->Text = "";
			 Level3->Text = ""; Level4->Text = "";
			 Level5->Text = ""; Level6->Text = "";
			 Level7->Text = ""; Level8->Text = "";
		 }
#pragma endregion


#pragma region 細かい処理
// 細かい処理
private: System::Void MenuSyuuryou_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 // 文字数・カウントダウン・ミス音の設定をsettings.txtに保存
			 if (System::IO::File::Exists("settings.txt") == false) {
				 // settings.txtが存在しない場合はここで作成しておく
				 System::IO::File::WriteAllText("settings.txt", "", ENCODE);
			 }

			 StreamWriter^ w = gcnew StreamWriter("settings.txt", false, ENCODE);

			 if (Menu50->Checked == true)
				 w->WriteLine("1");
			 else if (Menu100->Checked == true)
				 w->WriteLine("2");
			 else if (Menu200->Checked == true)
				 w->WriteLine("3");
			 else if (Menu300->Checked == true)
				 w->WriteLine("4");
			 else
				 w->WriteLine("5");

			 if (Menu3Seconds->Checked == true)
				 w->WriteLine("1");
			 else if (Menu2Seconds->Checked == true)
				 w->WriteLine("2");
			 else
				 w->WriteLine("3");

			 if (MenuMissON->Checked == true)
				 w->WriteLine("1");
			 else
				 w->WriteLine("2");

			 w->Close();
		 }
private: System::Void Menu3Seconds_Click(System::Object^  sender, System::EventArgs^  e) {
			 Menu3Seconds->Checked = true;
			 Menu2Seconds->Checked = false;
			 Menu1Second->Checked = false;
		 }
private: System::Void Menu2Seconds_Click(System::Object^  sender, System::EventArgs^  e) {
			 Menu3Seconds->Checked = false;
			 Menu2Seconds->Checked = true;
			 Menu1Second->Checked = false;
		 }
private: System::Void Menu1Second_Click(System::Object^  sender, System::EventArgs^  e) {
			 Menu3Seconds->Checked = false;
			 Menu2Seconds->Checked = false;
			 Menu1Second->Checked = true;
		 }
private: System::Void Menu50_Click(System::Object^  sender, System::EventArgs^  e) {
			 wordlen = 50;
			 Menu50->Checked = true;
			 Menu100->Checked = false;
			 Menu200->Checked = false;
			 Menu300->Checked = false;
			 Menu400->Checked = false;
		 }
private: System::Void Menu100_Click(System::Object^  sender, System::EventArgs^  e) {
			 wordlen = 100;
			 Menu50->Checked = false;
			 Menu100->Checked = true;
			 Menu200->Checked = false;
			 Menu300->Checked = false;
			 Menu400->Checked = false;
		 }
private: System::Void Menu200_Click(System::Object^  sender, System::EventArgs^  e) {
			 wordlen = 200;
			 Menu50->Checked = false;
			 Menu100->Checked = false;
			 Menu200->Checked = true;
			 Menu300->Checked = false;
			 Menu400->Checked = false;
		 }
private: System::Void Menu300_Click(System::Object^  sender, System::EventArgs^  e) {
			 wordlen = 300;
			 Menu50->Checked = false;
			 Menu100->Checked = false;
			 Menu200->Checked = false;
			 Menu300->Checked = true;
			 Menu400->Checked = false;
		 }
private: System::Void Menu400_Click(System::Object^  sender, System::EventArgs^  e) {
			 wordlen = 400;
			 Menu50->Checked = false;
			 Menu100->Checked = false;
			 Menu200->Checked = false;
			 Menu300->Checked = false;
			 Menu400->Checked = true;
		 }
private: System::Void MenuMissON_Click(System::Object^  sender, System::EventArgs^  e) {
			 MenuMissON->Checked = true;
			 MenuMissOFF->Checked = false;
		 }
private: System::Void MenuMissOFF_Click(System::Object^  sender, System::EventArgs^  e) {
			 MenuMissON->Checked = false;
			 MenuMissOFF->Checked = true;
		 }
private: System::Void textNihongo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 // 日本語部分にフォーカスが合っている場合はEscキーのみ受け付ける
			 if (e->KeyValue == 27) {
				 // Esc
				 Shokika();
				 ProcessTabKey(true);
				 return;
			 }
		 }
private: System::Void readMeRToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // ReadMe.txtを紐付くソフトで開く
			 if (System::IO::File::Exists("ReadMe.txt") == false) {
				 MessageBox::Show("ReadMe.txtが存在しません。", "エラー", OKExc);
				 return;
			 }

			 System::Diagnostics::Process::Start("ReadMe.txt");
		 }
#pragma endregion


#pragma region タイプウェル
// タイプウェルと同様のレベル表記を返す関数
private: String^ TWLevel(int n) {
			 if (n < 116)
				 return "-";
			 if (n >= 800 && n < 857)
				 return "ZJ";
			 if (n >= 857 && n < 923)
				 return "ZI";
			 if (n >= 857 && n < 923)
				 return "ZI";
			 if (n >= 923 && n < 1000)
				 return "ZH";
			 if (n >= 1000 && n < 1090)
				 return "ZG";
			 if (n >= 1090 && n < 1200)
				 return "ZF";
			 if (n >= 1200 && n < 1333)
				 return "ZE";
			 if (n >= 1333 && n < 1500)
				 return "ZD";
			 if (n >= 1500 && n < 1714)
				 return "ZC";
			 if (n >= 1714 && n < 2000)
				 return "ZB";
			 if (n >= 2000 && n < 2400)
				 return "ZA";
			 if (n >= 2400 && n < 3000)
				 return "ZS";
			 if (n >= 3000 && n < 4000)
				 return "ZX";
			 if (n >= 4000 && n < 6000)
				 return "ZZ";
			 if (n >= 6000 && n < 12000)
				 return "M1";
			 if (n >= 12000)
				 return "M2";

			 if (n >= 444 && n < 461)
				 return "XJ";
			 if (n >= 461 && n < 480)
				 return "XI";
			 if (n >= 480 && n < 500)
				 return "XH";
			 if (n >= 500 && n < 521)
				 return "XG";
			 if (n >= 521 && n < 545)
				 return "XF";
			 if (n >= 545 && n < 571)
				 return "XE";
			 if (n >= 571 && n < 600)
				 return "XD";
			 if (n >= 600 && n < 631)
				 return "XC";
			 if (n >= 631 && n < 666)
				 return "XB";
			 if (n >= 666 && n < 706)
				 return "XA";
			 if (n >= 706 && n < 750)
				 return "XS";
			 if (n >= 750 && n < 800)
				 return "XX";

			 if (n >= 315 && n < 324)
				 return "SJ";
			 if (n >= 324 && n < 333)
				 return "SI";
			 if (n >= 333 && n < 342)
				 return "SH";
			 if (n >= 342 && n < 352)
				 return "SG";
			 if (n >= 352 && n < 363)
				 return "SF";
			 if (n >= 363 && n < 375)
				 return "SE";
			 if (n >= 375 && n < 387)
				 return "SD";
			 if (n >= 387 && n < 400)
				 return "SC";
			 if (n >= 400 && n < 413)
				 return "SB";
			 if (n >= 413 && n < 428)
				 return "SA";
			 if (n >= 428 && n < 444)
				 return "SS";

			 if (n >= 116 && n < 130)
				 return "J";
			 if (n >= 130 && n < 146)
				 return "I";
			 if (n >= 146 && n < 164)
				 return "H";
			 if (n >= 164 && n < 184)
				 return "G";
			 if (n >= 184 && n < 206)
				 return "F";
			 if (n >= 206 && n < 230)
				 return "E";
			 if (n >= 230 && n < 255)
				 return "D";
			 if (n >= 255 && n < 279)
				 return "C";
			 if (n >= 279 && n < 300)
				 return "B";
			 if (n >= 300 && n < 315)
				 return "A";

			 return "-";
		 }
#pragma endregion
};
}

