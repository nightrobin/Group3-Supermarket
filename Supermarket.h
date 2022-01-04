#ifndef SUPERMARKET_H
#define SUPERMARKET_H
#include <iostream>
#include <string>

#include "Product.h"

using namespace std;

class Supermarket
{
    public:
        Supermarket();
        virtual ~Supermarket();

        static const int numberOfProducts = 5;
        Product products [numberOfProducts];

        void addProducts();
        void displayProducts();
        void showProductInfo(int ProductID);
        void modifyProductInfo(int ProductID);
        void deleteProduct(int ProductID);
        void buyproducts(int ProductID, int quantity);


    protected:

    private:
};

#endif // SUPERMARKET_H
