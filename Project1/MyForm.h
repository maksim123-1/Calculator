#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ um;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ min;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ plus;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ ravno;

	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: float num1;
	private: char sumb =' ';
	private: bool a = false;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->um = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Name = L"label1";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::Color::Orange;
			this->del->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->del, L"del");
			this->del->Name = L"del";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// um
			// 
			this->um->BackColor = System::Drawing::Color::Orange;
			this->um->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->um, L"um");
			this->um->Name = L"um";
			this->um->UseVisualStyleBackColor = false;
			this->um->Click += gcnew System::EventHandler(this, &MyForm::um_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// min
			// 
			this->min->BackColor = System::Drawing::Color::Orange;
			this->min->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->min, L"min");
			this->min->Name = L"min";
			this->min->UseVisualStyleBackColor = false;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::min_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button11, L"button11");
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button12, L"button12");
			this->button12->Name = L"button12";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gray;
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button13, L"button13");
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Orange;
			this->plus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->plus, L"plus");
			this->plus->Name = L"plus";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button15, L"button15");
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button16, L"button16");
			this->button16->Name = L"button16";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gray;
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button17, L"button17");
			this->button17->Name = L"button17";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::Color::Orange;
			this->ravno->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->ravno, L"ravno");
			this->ravno->Name = L"ravno";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::ravno_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Gray;
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button19, L"button19");
			this->button19->Name = L"button19";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gray;
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			resources->ApplyResources(this->button20, L"button20");
			this->button20->Name = L"button20";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->min);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->um);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->del);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		
		if (this->label1->Text == "0" || a)
		{
			this->label1->Text = button->Text;
			a = false;
		}
		else {
			this->label1->Text = this->label1->Text + button->Text;
		}
	}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math('+');
}
private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) {
	math('-');
}
private: System::Void um_Click(System::Object^ sender, System::EventArgs^ e) {
	math('*');
}
private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
	math('/');
}

	   private: System::Void math(char sumbol) {
		   this->num1 = System::Convert::ToDouble(this->label1->Text);
		   this->sumb = sumbol;
		   this->label1->Text = "0";
	   }
private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {
	float num2 = System::Convert::ToDouble (this->label1->Text);
	float res;
	if (sumb == ' '){
		return;
	}
	else
	{

	
	switch ( this->sumb){
	case '+': res = this->num1 + num2; break;
	case '-': res = this->num1 - num2; break;
	case '/': res = this->num1 / num2; break;
	case '*': res = this->num1 * num2; break;
	}
	this->a = true;
	num2 = '0';
	this->label1->Text = System::Convert::ToString(res);
	}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = "0";
	num1 = '0';
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
float nu = System::Convert::ToDouble(this->label1->Text);
nu *= -1;
this->label1->Text = System::Convert::ToString(nu);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->label1->Text;
	if (!text->Contains(","))
	{
		this->label1->Text = text + ",";
	}

}
};
}
  