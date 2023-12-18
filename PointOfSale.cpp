#pragma once
#include "Product.h"
#include <vector>

class pointOfSale{
    private:
    std::vector<Product> products;
    std::vector<std::pair<std::string, int>>cart;

    public:
    void addProduct(const Product& product);
    void displayMenu() const;
    void getUserChoice() const;
    void displayProducts() const;
    void addToCart();
    void displayCart() const;
    void checkOut();
};
