#ifndef SELLER_H
#define SELLER_H

#include <string>
#include <vector>
#include "bank.customer.h"
#include "item.h"

class Seller {
private:
    int id;
    std::string name;
    BankCustomer& account;
    std::vector<Item> stock;

public:
    Seller(int id, const std::string& name, BankCustomer& account)
        : id(id), name(name), account(account) {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    const std::vector<Item>& getStock() const { return stock; }
    BankCustomer& getAccount() const { return account; }

    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }

    void addItem(const Item& item);
    void updateItem(int itemId, const std::string& newName = "", int newQuantity = -1, double newPrice = -1.0);
    bool removeItem(int itemId);
};

#endif // SELLER_H