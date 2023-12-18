#pragma once
#include <iostream>
#include <string>
class Product{
    public:
    std::string name;
    double price;
    int stock;

    Product(const std::string& n, double p, int s);
};
