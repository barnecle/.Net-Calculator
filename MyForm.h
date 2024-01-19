#pragma once


#include <msclr\marshal_cppstd.h>
#include <string>
struct Node {
	int value;
	struct Node* next;
};

class List
{
public:
	int List::LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}

	int pop() {
		int retval = 0;
		Node* next_node = nullptr;

		next_node = head->next;
		retval = head->value;
		delete head;
		head = next_node;

		return retval;
	}

	void createNode(int data)
	{
		Node* temp = new Node;
		temp->value = data;
		temp->next = nullptr;

		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
private:
	Node* head;
	Node* tail;
};

struct charNode {
	char value;
	struct charNode* next;
};

class charList
{
public:
	int charList::LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}

	char pop() {
		char retval = ' ';
		charNode* next_node = nullptr;

		next_node = head->next;
		retval = head->value;
		delete head;
		head = next_node;

		return retval;
	}

	void createNode(char data)
	{
		charNode* temp = new charNode;
		temp->value = data;
		temp->next = nullptr;

		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
private:
	charNode* head;
	charNode* tail;
};

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::TextBox^ screen_out;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ minus_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ enter_button;




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
			this->screen_out = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->minus_button = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->enter_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// screen_out
			// 
			this->screen_out->Location = System::Drawing::Point(12, 24);
			this->screen_out->Name = L"screen_out";
			this->screen_out->Size = System::Drawing::Size(260, 20);
			this->screen_out->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(147, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(79, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 34);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(147, 115);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 34);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 169);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 34);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(79, 169);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 34);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(147, 169);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(51, 34);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(214, 65);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(58, 34);
			this->add_button->TabIndex = 10;
			this->add_button->Text = L"+";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// minus_button
			// 
			this->minus_button->Location = System::Drawing::Point(214, 115);
			this->minus_button->Name = L"minus_button";
			this->minus_button->Size = System::Drawing::Size(58, 34);
			this->minus_button->TabIndex = 11;
			this->minus_button->Text = L"-";
			this->minus_button->UseVisualStyleBackColor = true;
			this->minus_button->Click += gcnew System::EventHandler(this, &MyForm::minus_button_Click);
			// 
			// clear_button
			// 
			this->clear_button->Location = System::Drawing::Point(214, 169);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(58, 34);
			this->clear_button->TabIndex = 12;
			this->clear_button->Text = L"C";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &MyForm::clear_button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(79, 215);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(51, 34);
			this->button10->TabIndex = 13;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// enter_button
			// 
			this->enter_button->Location = System::Drawing::Point(214, 215);
			this->enter_button->Name = L"enter_button";
			this->enter_button->Size = System::Drawing::Size(58, 34);
			this->enter_button->TabIndex = 14;
			this->enter_button->Text = L"Enter";
			this->enter_button->UseVisualStyleBackColor = true;
			this->enter_button->Click += gcnew System::EventHandler(this, &MyForm::enter_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->enter_button);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->minus_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->screen_out);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("1");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("2");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("3");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("4");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("5");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("6");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("7");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("8");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("9");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("0");
}
private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("+");
}

private: System::Void minus_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->AppendText("-");
}
private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->screen_out->Clear();
}
private: System::Void enter_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String ^ equation = this->screen_out->Text;

	 std::string arg_equation = msclr::interop::marshal_as<std::string>(equation);
	 if (arg_equation[0].Equals('+') || arg_equation[0].Equals('-')) {
		this->screen_out->Text = "ERROR";
	}
	else {
		arg_equation += ']';
		std::string temp;
		int nums[2] = { 0,0 };
		int numctr = 0;
		char op, prev_op;
		for (int i = 0; i < arg_equation.length(); i++) {
			if (arg_equation[i].Equals('+') || arg_equation[i].Equals('-') || arg_equation[i].Equals(']')) {
				nums[numctr] = stoi(temp);
				temp = "";
				numctr++;
				prev_op = op;
				op = arg_equation[i];

				
			}
			else {
				temp += arg_equation[i];

			}
			if (numctr == 2) {
				numctr = 1;
				switch (prev_op) {
				case '+':
					nums[0] += nums[1];
					break;
				case '-':
					nums[0] -= nums[1];
					break;
				default:
					break;
				}
			}
		}
		
		this->screen_out->Text = nums[0].ToString();
	}
}
};
}
