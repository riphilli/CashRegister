#pragma once

namespace CashRegister {

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
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Login_Btn;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^  user_id_txt;
	private: System::Windows::Forms::TextBox^  password_txt;


	private: System::Windows::Forms::Label^  User_ID_lbl;
	private: System::Windows::Forms::Label^  Password_lbl;
	private: System::Windows::Forms::Button^  Card_Swipe_Btn;
	private: System::Windows::Forms::Button^  Thumb_Print_Btn;





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
			this->Login_Btn = (gcnew System::Windows::Forms::Button());
			this->user_id_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->User_ID_lbl = (gcnew System::Windows::Forms::Label());
			this->Password_lbl = (gcnew System::Windows::Forms::Label());
			this->Card_Swipe_Btn = (gcnew System::Windows::Forms::Button());
			this->Thumb_Print_Btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Login_Btn
			// 
			this->Login_Btn->AllowDrop = true;
			this->Login_Btn->Location = System::Drawing::Point(167, 98);
			this->Login_Btn->Name = L"Login_Btn";
			this->Login_Btn->Size = System::Drawing::Size(46, 27);
			this->Login_Btn->TabIndex = 0;
			this->Login_Btn->Text = L"Login";
			this->Login_Btn->UseVisualStyleBackColor = true;
			this->Login_Btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// user_id_txt
			// 
			this->user_id_txt->Location = System::Drawing::Point(86, 23);
			this->user_id_txt->Name = L"user_id_txt";
			this->user_id_txt->Size = System::Drawing::Size(127, 20);
			this->user_id_txt->TabIndex = 1;
			this->user_id_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::user_id_txt_TextChanged);
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(86, 49);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(126, 20);
			this->password_txt->TabIndex = 2;
			// 
			// User_ID_lbl
			// 
			this->User_ID_lbl->AutoSize = true;
			this->User_ID_lbl->Location = System::Drawing::Point(2, 26);
			this->User_ID_lbl->Name = L"User_ID_lbl";
			this->User_ID_lbl->Size = System::Drawing::Size(43, 13);
			this->User_ID_lbl->TabIndex = 3;
			this->User_ID_lbl->Text = L"User ID";
			this->User_ID_lbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->Location = System::Drawing::Point(2, 56);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(53, 13);
			this->Password_lbl->TabIndex = 4;
			this->Password_lbl->Text = L"Password";
			// 
			// Card_Swipe_Btn
			// 
			this->Card_Swipe_Btn->Location = System::Drawing::Point(86, 98);
			this->Card_Swipe_Btn->Name = L"Card_Swipe_Btn";
			this->Card_Swipe_Btn->Size = System::Drawing::Size(75, 27);
			this->Card_Swipe_Btn->TabIndex = 5;
			this->Card_Swipe_Btn->Text = L"Card Swipe";
			this->Card_Swipe_Btn->UseVisualStyleBackColor = true;
			this->Card_Swipe_Btn->Click += gcnew System::EventHandler(this, &MyForm::Card_Swipe_Btn_Click);
			// 
			// Thumb_Print_Btn
			// 
			this->Thumb_Print_Btn->Location = System::Drawing::Point(5, 98);
			this->Thumb_Print_Btn->Name = L"Thumb_Print_Btn";
			this->Thumb_Print_Btn->Size = System::Drawing::Size(75, 27);
			this->Thumb_Print_Btn->TabIndex = 6;
			this->Thumb_Print_Btn->Text = L"Thumb Print";
			this->Thumb_Print_Btn->UseVisualStyleBackColor = true;
			this->Thumb_Print_Btn->Click += gcnew System::EventHandler(this, &MyForm::Thumb_Print_Btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(225, 139);
			this->Controls->Add(this->Thumb_Print_Btn);
			this->Controls->Add(this->Card_Swipe_Btn);
			this->Controls->Add(this->Password_lbl);
			this->Controls->Add(this->User_ID_lbl);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->user_id_txt);
			this->Controls->Add(this->Login_Btn);
			this->Name = L"MyForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void user_id_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Card_Swipe_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 PopupForm popup = new PopupForm();
			 ShowDialog();
}
private: System::Void Thumb_Print_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
