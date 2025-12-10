#pragma once

namespace Laba34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:


		String^ mode;

		EditForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		void SetMode(String^ m)
		{
			mode = m;

			if (mode == "Client")
			{
				this->Text = "Edit Client";

				txtName->Visible = true;
				txtPhone->Visible = true;
				lblName->Visible = true;
				lblPhone->Visible = true;

				Combotype->Visible = false;
				txtPrice->Visible = false;
				lblType->Visible = false;
				lblPrice->Visible = false;
			}
			else if (mode == "Tariff")
			{
				this->Text = "Edit Tariff";

				txtName->Visible = false;
				txtPhone->Visible = false;
				lblName->Visible = false;
				lblPhone->Visible = false;

				Combotype->Visible = true;
				txtPrice->Visible = true;
				lblType->Visible = true;
				lblPrice->Visible = true;


				// Установим варианты типов
				Combotype->Items->Clear();
				Combotype->Items->Add("General");
				Combotype->Items->Add("Fragile");
				Combotype->Items->Add("Hazardous");
				Combotype->Items->Add("Refrigerated");
				Combotype->SelectedIndex = 0;
			}
		}

	public:
		// Для клиента
		property String^ ClientName{
	String ^ get() { return txtName->Text; }
	void set(String ^ value) { txtName->Text = value; }
		}
			property String^ ClientPhone{
				String ^ get() { return txtPhone->Text; }
				void set(String ^ value) { txtPhone->Text = value; }
		}

			// Для тарифа
			property String^ TariffTypeString{
				String ^ get() { return Combotype->SelectedItem->ToString(); }
				void set(String ^ value) { Combotype->SelectedItem = value; }
		}
			property double TariffPrice{
				double get() { return Convert::ToDouble(txtPrice->Text); }
				void set(double value) { txtPrice->Text = value.ToString(); }
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::ComboBox^ Combotype;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lblType;
	private: System::Windows::Forms::Label^ lblPrice;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->Combotype = (gcnew System::Windows::Forms::ComboBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(100, 180);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 0;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditForm::button1_Click);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(100, 30);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 1;
			this->toolTip1->SetToolTip(this->txtName, L"Введите имя клиента");
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(100, 70);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(100, 20);
			this->txtPhone->TabIndex = 2;
			this->toolTip1->SetToolTip(this->txtPhone, L"Введите номер клиента");
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(100, 70);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 20);
			this->txtPrice->TabIndex = 4;
			this->toolTip1->SetToolTip(this->txtPrice, L"Введите цену за единицу");
			this->txtPrice->Visible = false;
			this->txtPrice->TextChanged += gcnew System::EventHandler(this, &EditForm::txtPrice_TextChanged);
			// 
			// Combotype
			// 
			this->Combotype->FormattingEnabled = true;
			this->Combotype->Location = System::Drawing::Point(100, 30);
			this->Combotype->Name = L"Combotype";
			this->Combotype->Size = System::Drawing::Size(121, 21);
			this->Combotype->TabIndex = 3;
			this->Combotype->Visible = false;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(12, 33);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(32, 13);
			this->lblName->TabIndex = 5;
			this->lblName->Text = L"Имя:";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Location = System::Drawing::Point(18, 73);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(55, 13);
			this->lblPhone->TabIndex = 6;
			this->lblPhone->Text = L"Телефон:";
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->Location = System::Drawing::Point(13, 32);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(60, 13);
			this->lblType->TabIndex = 7;
			this->lblType->Text = L"Тип груза:";
			this->lblType->Visible = false;
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(18, 73);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(36, 13);
			this->lblPrice->TabIndex = 8;
			this->lblPrice->Text = L"Цена:";
			this->lblPrice->Visible = false;
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 211);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblType);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->Combotype);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->btnSave);
			this->Name = L"EditForm";
			this->Text = L"Edit";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ActiveControl = nullptr;

		// Проверка режима
		if (mode == "Client") {
			// Проверяем имя и телефон
			if (String::IsNullOrWhiteSpace(txtName->Text)) {
				MessageBox::Show("Пожалуйста, введите имя клиента.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (String::IsNullOrWhiteSpace(txtPhone->Text)) {
				MessageBox::Show("Пожалуйста, введите телефон клиента.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		else if (mode == "Tariff") {
			// Проверяем цену
			if (String::IsNullOrWhiteSpace(txtPrice->Text)) {
				MessageBox::Show("Пожалуйста, введите цену тарифа.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Проверяем, что цена — число
			double price;
			if (!Double::TryParse(txtPrice->Text, price)) {
				MessageBox::Show("Цена тарифа должна быть числом.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		// Всё корректно — закрываем форму с OK
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void txtPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EditForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
