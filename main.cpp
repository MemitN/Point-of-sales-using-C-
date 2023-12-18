#include <iostream>
#include "PointOfSale.h"

int main(){
    pointOfSale pos;
    //adding products to the inventory
    pos.addProduct(Product("product1", 10.99,20));
    pos.addProduct(Product("product2", 5.99,15));
    pos.addProduct(Product("product3", 11.99,12));


    while(true){
        pos.displayMenu();
        int choice = pos.getUserChoice();

        switch(choice){
            case 1:
            pos.displayProducts();
            break;
            case 2:
            pos.addToCart();
            break;
            case 3:
            pos.displayCart();
            break;
            case 4:
            pos.checkOut();
            break;
            case 5:
            std:: cout<<"Exiting the program. \n";
            return 0;
            default:
            std:: cout<<"invalid choice! please try again. \n";

        }
    }
        return 0;
    }
