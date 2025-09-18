#include "item.h"

void Item::updateItem(const std::string& newName, int newQuantity, double newPrice) {
    if (!newName.empty()) {
        name = newName;
    }
    if (newQuantity != -1) {
        quantity = newQuantity;
    }
    if (newPrice != -1.0) {
        price = newPrice;
    }
}