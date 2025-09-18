#include "seller.h"

void Seller::addItem(const Item& item) {
    stock.push_back(item);
}

void Seller::updateItem(int itemId, const std::string& newName, int newQuantity, double newPrice) {
    for (auto& item : stock) {
        if (item.getId() == itemId) {
            item.updateItem(newName, newQuantity, newPrice);
            return;
        }
    }
}

bool Seller::removeItem(int itemId) {
    for (size_t i = 0; i < stock.size(); ++i) {
        if (stock[i].getId() == itemId) {
            stock.erase(stock.begin() + i);
            return true;
        }
    }
    return false;
}