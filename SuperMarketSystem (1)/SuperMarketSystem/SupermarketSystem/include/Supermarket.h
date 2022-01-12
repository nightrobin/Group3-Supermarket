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

        static const int numberOfProducts = 2;
        Product products [numberOfProducts];

        void addProducts();
        void administrator();
        void buyproducts(int ProductID, int quantity);
        void customers();
        void deleteProduct(int ProductID);
        void displayProducts();
        void modifyProductInfo(int ProductID);
        void showProductInfo(int ProductID);



    protected:

    private:
};

#endif // SUPERMARKET_H
