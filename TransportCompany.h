#pragma once
#include "Client.h"
#include "Tariff.h"
#include "Order.h"
using namespace System::Collections::Generic;
using namespace System::ComponentModel;

ref class TransportCompany {
private:
    BindingList<Client^>^ clients;
    BindingList<Tariff^>^ tariffs;
    BindingList<Order^>^ orders;

public:
    TransportCompany() {
        clients = gcnew BindingList<Client^>();
        tariffs = gcnew BindingList<Tariff^>();
        orders = gcnew BindingList<Order^>();
    }

    void AddClient(Client^ client) { clients->Add(client); }
    bool AddTariff(Tariff^ tariff) {
    // Проверяем, есть ли уже тариф с таким типом
    for each (Tariff^ t in tariffs) {
        if (t->Type == tariff->Type) {
            // Тариф с таким типом уже есть
            return false;
        }
    }

    tariffs->Add(tariff);
    return true;
}
    void CreateOrder(Client^ client, Tariff^ tariff, double volume) {
        orders->Add(gcnew Order(client, tariff, volume));
    }

    void RemoveClient(Client^ client) { clients->Remove(client); }
    void RemoveTariff(Tariff^ tariff) { tariffs->Remove(tariff); }
    void RemoveOrder(Order^ order) { orders->Remove(order); }

    BindingList<Client^>^ GetClients() { return clients; }
    BindingList<Tariff^>^ GetTariffs() { return tariffs; }
    BindingList<Order^>^ GetOrders() { return orders; }
};

