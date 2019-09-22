#pragma once
#include <math.h>
#include "Table.h"

namespace TestPlots {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;



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

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;









	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			zedGraphControl1->GraphPane->XAxis->Title = "Ось X";
			zedGraphControl1->GraphPane->YAxis->Title = "Ось U";
			zedGraphControl1->GraphPane->Title = "Зависимость температуры от времени";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 18);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Задача";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Максимальное число шагов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(8, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 24);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(8, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 24);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(8, 243);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(86, 24);
			this->textBox5->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(80, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->IsShowPointValues = false;
			this->zedGraphControl1->Location = System::Drawing::Point(284, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->PointValueFormat = L"G";
			this->zedGraphControl1->Size = System::Drawing::Size(738, 570);
			this->zedGraphControl1->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 544);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 24);
			this->textBox1->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 544);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 18);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Прошло итераций ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 18);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Начальные условия";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(77, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 18);
			this->label7->TabIndex = 21;
			this->label7->Text = L"du/dx=0.25(Q1-Q2)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Значение регулятора";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(8, 327);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 24);
			this->textBox2->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(80, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 33);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Показать таблицу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1066, 638);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f(double x, double u, int Q1)
		{
			return (0.25 * (Q1 - 500 * u));
		}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		double xmin = 0;
		double xmax = Convert::ToDouble(textBox4->Text);
		double h = Convert::ToDouble(textBox3->Text);
		double up = Convert::ToDouble(textBox2->Text);
		double u0 = Convert::ToDouble(textBox5->Text);
		double v[2] = { u0,u0 };
		double k1, k2, k3, k4;
		int Q1;
		int i = 0;
		if (u0 < up + 1)
			Q1 = 30000;
		else Q1 = 0;
		for (double x = xmin; x < xmax * h; x += h)
		{
			k1 = f(x, v[0], Q1);
			k2 = f(x + h / 2, v[0] + h / 2 * k1, Q1);
			k3 = f(x + h / 2, v[0] + h / 2 * k2, Q1);
			k4 = f(x + h, v[0] + h * k3, Q1);
			v[1] = v[0] + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
			f1_list->Add(x, v[0]);
			v[0] = v[1];
			if (v[0] > up + 1)
				Q1 = 0;
			if (v[0] < up - 1)
				Q1 = 30000;
			i++;
		}
		/*ZedGraph::*/LineItem Curve = panel->AddCurve("F1", f1_list, Color::Red, SymbolType::None);
		Curve.Line->Width = 0.05f;
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		textBox1->Text = Convert::ToString(i);
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Table^ form = gcnew Table();
		form->Show();
	}
};
}
