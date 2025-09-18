#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    Item(int id, const std::string& name, int quantity, double price)
        : id(id), name(name), quantity(quantity), price(price) {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }

    void updateItem(const std::string& newName = "", int newQuantity = -1, double newPrice = -1.0);
};

#endif // ITEM_H