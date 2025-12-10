#pragma once
#include "TransportCompany.h"
#include "EditForm.h"
#include "OrdersForm.h"





namespace Laba34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

	private:
		TransportCompany^ company;

	public:
		MainForm(TransportCompany^ c)
		{
			InitializeComponent();
			company = c;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ clientsGrid;
	private: System::Windows::Forms::DataGridView^ tariffsGrid;
	private: System::Windows::Forms::BindingSource^ clientsBindingSource;
	private: System::Windows::Forms::BindingSource^ tariffsBindingSource;
	private: System::Windows::Forms::Button^ btnAddClient;
	private: System::Windows::Forms::Button^ btnAddTariff;
	private: System::Windows::Forms::Button^ btnOpenOrders;
	private: System::Windows::Forms::Button^ btnDeleteClient;
	private: System::Windows::Forms::Button^ btnDeleteTariff;
	private: System::Windows::Forms::Button^ editData;

	private: System::ComponentModel::IContainer^ components;
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
			this->clientsGrid = (gcnew System::Windows::Forms::DataGridView());
			this->clientsBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tariffsGrid = (gcnew System::Windows::Forms::DataGridView());
			this->tariffsBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->btnAddClient = (gcnew System::Windows::Forms::Button());
			this->btnAddTariff = (gcnew System::Windows::Forms::Button());
			this->btnOpenOrders = (gcnew System::Windows::Forms::Button());
			this->btnDeleteClient = (gcnew System::Windows::Forms::Button());
			this->btnDeleteTariff = (gcnew System::Windows::Forms::Button());
			this->editData = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientsGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientsBindingSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tariffsGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tariffsBindingSource))->BeginInit();
			this->SuspendLayout();
			// 
			// clientsGrid
			// 
			this->clientsGrid->AutoGenerateColumns = true;
			this->clientsGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->clientsGrid->DataSource = this->clientsBindingSource;
			this->clientsGrid->Location = System::Drawing::Point(20, 20);
			this->clientsGrid->Name = L"clientsGrid";
			this->clientsGrid->ReadOnly = true;
			this->clientsGrid->RowHeadersWidth = 51;
			this->clientsGrid->Size = System::Drawing::Size(250, 200);
			this->clientsGrid->TabIndex = 0;
			this->clientsGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::clientsGrid_CellContentClick);
			this->clientsGrid->DataError += gcnew System::Windows::Forms::DataGridViewDataErrorEventHandler(this, &MainForm::clientsGrid_DataError);
			this->clientsGrid->Enter += gcnew System::EventHandler(this, &MainForm::clientsGrid_Enter);
			// 
			// tariffsGrid
			// 
			this->tariffsGrid->AutoGenerateColumns = true;
			this->tariffsGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tariffsGrid->DataSource = this->tariffsBindingSource;
			this->tariffsGrid->Location = System::Drawing::Point(300, 20);
			this->tariffsGrid->Name = L"tariffsGrid";
			this->tariffsGrid->ReadOnly = true;
			this->tariffsGrid->RowHeadersWidth = 51;
			this->tariffsGrid->Size = System::Drawing::Size(250, 200);
			this->tariffsGrid->TabIndex = 1;
			this->tariffsGrid->DataError += gcnew System::Windows::Forms::DataGridViewDataErrorEventHandler(this, &MainForm::tariffsGrid_DataError);
			this->tariffsGrid->Enter += gcnew System::EventHandler(this, &MainForm::tariffsGrid_Enter);
			// 
			// btnAddClient
			// 
			this->btnAddClient->Location = System::Drawing::Point(50, 240);
			this->btnAddClient->Name = L"btnAddClient";
			this->btnAddClient->Size = System::Drawing::Size(82, 32);
			this->btnAddClient->TabIndex = 2;
			this->btnAddClient->Text = L"Add Client";
			this->btnAddClient->UseVisualStyleBackColor = true;
			this->btnAddClient->Click += gcnew System::EventHandler(this, &MainForm::btnAddClient_Click);
			// 
			// btnAddTariff
			// 
			this->btnAddTariff->Location = System::Drawing::Point(350, 240);
			this->btnAddTariff->Name = L"btnAddTariff";
			this->btnAddTariff->Size = System::Drawing::Size(82, 32);
			this->btnAddTariff->TabIndex = 3;
			this->btnAddTariff->Text = L"Add Tariff";
			this->btnAddTariff->UseVisualStyleBackColor = true;
			this->btnAddTariff->Click += gcnew System::EventHandler(this, &MainForm::btnAddTariff_Click);
			// 
			// btnOpenOrders
			// 
			this->btnOpenOrders->Location = System::Drawing::Point(200, 300);
			this->btnOpenOrders->Name = L"btnOpenOrders";
			this->btnOpenOrders->Size = System::Drawing::Size(82, 32);
			this->btnOpenOrders->TabIndex = 4;
			this->btnOpenOrders->Text = L"Open Orders Window";
			this->btnOpenOrders->UseVisualStyleBackColor = true;
			this->btnOpenOrders->Click += gcnew System::EventHandler(this, &MainForm::btnOpenOrders_Click);
			// 
			// btnDeleteClient
			// 
			this->btnDeleteClient->Location = System::Drawing::Point(148, 240);
			this->btnDeleteClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDeleteClient->Name = L"btnDeleteClient";
			this->btnDeleteClient->Size = System::Drawing::Size(82, 32);
			this->btnDeleteClient->TabIndex = 5;
			this->btnDeleteClient->Text = L"Delete Client";
			this->btnDeleteClient->UseVisualStyleBackColor = true;
			this->btnDeleteClient->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteClient_Click);
			// 
			// btnDeleteTariff
			// 
			this->btnDeleteTariff->Location = System::Drawing::Point(446, 240);
			this->btnDeleteTariff->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDeleteTariff->Name = L"btnDeleteTariff";
			this->btnDeleteTariff->Size = System::Drawing::Size(82, 32);
			this->btnDeleteTariff->TabIndex = 6;
			this->btnDeleteTariff->Text = L"Delete Tariff";
			this->btnDeleteTariff->UseVisualStyleBackColor = true;
			this->btnDeleteTariff->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteTariff_Click);
			// 
			// editData
			// 
			this->editData->Location = System::Drawing::Point(253, 240);
			this->editData->Name = L"editData";
			this->editData->Size = System::Drawing::Size(62, 32);
			this->editData->TabIndex = 7;
			this->editData->Text = L"Edit";
			this->editData->UseVisualStyleBackColor = true;
			this->editData->Click += gcnew System::EventHandler(this, &MainForm::editData_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 420);
			this->Controls->Add(this->editData);
			this->Controls->Add(this->btnDeleteTariff);
			this->Controls->Add(this->btnDeleteClient);
			this->Controls->Add(this->btnOpenOrders);
			this->Controls->Add(this->btnAddTariff);
			this->Controls->Add(this->btnAddClient);
			this->Controls->Add(this->tariffsGrid);
			this->Controls->Add(this->clientsGrid);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientsGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clientsBindingSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tariffsGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tariffsBindingSource))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		clientsBindingSource->DataSource = company->GetClients();
		tariffsBindingSource->DataSource = company->GetTariffs();
	}
	private: System::Void clientsGrid_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e) {
	}
	private: System::Void tariffsGrid_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e) {
	}
	private: System::Void clientsGrid_Enter(System::Object^ sender, System::EventArgs^ e) {
		tariffsGrid->ClearSelection();
	}

	private: System::Void tariffsGrid_Enter(System::Object^ sender, System::EventArgs^ e) {
	clientsGrid->ClearSelection();
	}
	private: System::Void btnAddClient_Click(System::Object^ sender, System::EventArgs^ e) {
		EditForm^ form = gcnew EditForm();
		form->SetMode("Client");

		if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Client^ c = gcnew Client(form->ClientName, form->ClientPhone);
			company->AddClient(c);
			clientsBindingSource->ResetBindings(false);
			MessageBox::Show("Клиент сохранён!");
		}

	}
	private: System::Void btnAddTariff_Click(System::Object^ sender, System::EventArgs^ e) {
		EditForm^ form = gcnew EditForm(); // <-- передаем company
		form->SetMode("Tariff");

		if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			CargoType type;
			String^ t = form->TariffTypeString;
			if (t == "General") type = CargoType::General;
			else if (t == "Fragile") type = CargoType::Fragile;
			else if (t == "Hazardous") type = CargoType::Hazardous;
			else type = CargoType::Refrigerated;

			Tariff^ tariff = gcnew Tariff(type, form->TariffPrice);
			if (!company->AddTariff(tariff)) {  // проверка уникальности
				MessageBox::Show("Тариф с таким типом уже существует!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				tariffsBindingSource->ResetBindings(false);
				MessageBox::Show("Тариф сохранён!");
			}
		}
	}
	private: System::Void btnOpenOrders_Click(System::Object^ sender, System::EventArgs^ e) {
		if (company == nullptr) {
			MessageBox::Show("company == nullptr");
			return;
		}

		OrdersForm^ ordersForm = gcnew OrdersForm(company);
		ordersForm->ShowDialog();
	}
	private: System::Void clientsGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnDeleteClient_Click(System::Object^ sender, System::EventArgs^ e) {
		if (clientsGrid->CurrentRow == nullptr) return;

		Client^ selected = (Client^)clientsGrid->CurrentRow->DataBoundItem;

		if (MessageBox::Show("Удалить выбранного клиента и все его заказы?",
			"Подтверждение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			// Удаляем все заказы клиента
			auto orders = company->GetOrders();
			for (int i = orders->Count - 1; i >= 0; i--) {
				if (orders[i]->ClientData == selected) {
					orders->RemoveAt(i);
				}
			}

			// Удаляем клиента
			company->RemoveClient(selected);
			clientsBindingSource->ResetBindings(false);

			// Обновляем таблицу заказов, если она открыта
			for each (Form ^ f in Application::OpenForms) {
				OrdersForm^ ordersForm = dynamic_cast<OrdersForm^>(f);
				if (ordersForm != nullptr) {
					ordersForm->RefreshOrdersTable();
				}
			}
		}
	}
private: System::Void btnDeleteTariff_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (tariffsGrid->CurrentRow == nullptr) return;

    Tariff^ selected = (Tariff^)tariffsGrid->CurrentRow->DataBoundItem;

    if (MessageBox::Show("Удалить выбранный тариф и все связанные с ним заказы?",
        "Подтверждение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
    {
        // Удаляем все заказы с этим тарифом
        auto orders = company->GetOrders();
        for (int i = orders->Count - 1; i >= 0; i--) {
            if (orders[i]->TariffData == selected) {
                orders->RemoveAt(i);
            }
        }

        // Удаляем тариф
        company->RemoveTariff(selected);
        tariffsBindingSource->ResetBindings(false);

        // Обновляем таблицу заказов
        for each (Form^ f in Application::OpenForms) {
            OrdersForm^ ordersForm = dynamic_cast<OrdersForm^>(f);
            if (ordersForm != nullptr) {
                ordersForm->RefreshOrdersTable();
            }
        }
    }
}
private: System::Void editData_Click(System::Object^ sender, System::EventArgs^ e) {
	// Если выбран клиент
	if (clientsGrid->SelectedRows->Count > 0) {
		Client^ selectedClient = (Client^)clientsGrid->SelectedRows[0]->DataBoundItem;
		EditForm^ form = gcnew EditForm();
		form->SetMode("Client");

		form->ClientName = selectedClient->Name;
		form->ClientPhone = selectedClient->Phone;

		if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			selectedClient->Name = form->ClientName;
			selectedClient->Phone = form->ClientPhone;
			clientsBindingSource->ResetBindings(false);
			MessageBox::Show("Данные клиента обновлены!");
		}
		return;
	}

	// Если выбран тариф
	if (tariffsGrid->SelectedRows->Count > 0) {
    Tariff^ selectedTariff = (Tariff^)tariffsGrid->SelectedRows[0]->DataBoundItem;
    EditForm^ form = gcnew EditForm();
    form->SetMode("Tariff");

    switch (selectedTariff->Type) {
    case CargoType::General: form->TariffTypeString = "General"; break;
    case CargoType::Fragile: form->TariffTypeString = "Fragile"; break;
    case CargoType::Hazardous: form->TariffTypeString = "Hazardous"; break;
    case CargoType::Refrigerated: form->TariffTypeString = "Refrigerated"; break;
    }
    form->TariffPrice = selectedTariff->PricePerUnit;

    if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        CargoType newType;
        String^ t = form->TariffTypeString;
        if (t == "General") newType = CargoType::General;
        else if (t == "Fragile") newType = CargoType::Fragile;
        else if (t == "Hazardous") newType = CargoType::Hazardous;
        else newType = CargoType::Refrigerated;

        // Проверка на дублирование типа
        for each (Tariff ^ tr in company->GetTariffs()) {
            if (tr != selectedTariff && tr->Type == newType) {
                MessageBox::Show("Тариф с таким типом уже существует!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
        }

        selectedTariff->Type = newType;
        selectedTariff->PricePerUnit = form->TariffPrice;
        tariffsBindingSource->ResetBindings(false);
        MessageBox::Show("Данные тарифа обновлены!");
    }
    return;
}

	MessageBox::Show("Выберите клиента или тариф для редактирования.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
