#include "Supermarket.h"

Supermarket::Supermarket()
{
    //ctor
}

Supermarket::~Supermarket()
{
    //dtor
}

void Supermarket::addProducts()
{
        for (int ctr = 0; ctr < numberOfProducts; ctr++){

        string category;
        string name;
        float price;
        float expiration;
        int quantity;
        bool isAvailable;

        cout << "  Category (Foods, Beverages, Non-food items): ";
        getline (cin, category);

        cout << "  Name of the Product: ";
        getline (cin, name);

        cout << "  Price: ";
        cin>> price;

        cout << "  Expiration Date (MM.YYYY): ";
        cin >> expiration;

        cout << "  Quantity: ";
        cin >> quantity;

        cout << endl;

        products[ctr].category = category;
        products[ctr].name = name;
        products[ctr].price = price;
        products[ctr].expiration = expiration;
        products[ctr].quantity = quantity;
        products[ctr].isAvailable = true;

        cin.clear();
        fflush (stdin);

        }
}

void Supermarket::displayProducts(){
    cout << " List of Available Products:" << endl;
    for (int ctr = 0; ctr < numberOfProducts; ctr++){
        if (products[ctr].isAvailable){
            cout << "Product ID:" << ctr + 1 << ":" << products [ctr].name << endl;
        }
    }
}

void Supermarket::showProductInfo(int productID){
    productID--;

    if (productID <= 0){
        productID = 0;
    }
    else if (productID > numberOfProducts){
        productID = numberOfProducts - 1;
    }


    cout << "  ===================================================== " << endl;
    cout << "  |||              Product Informations             |||   " << endl;
    cout << "  ===================================================== " << endl;

    cout << "  Category: " << products[productID].category << endl;
    cout << "  Name of the Product: " << products[productID].name << endl;
    cout << "  Price: " << products[productID].price << endl;
    cout << "  Expiration Date (MM.YYYY): " << products[productID].expiration << endl;
    cout << "  Quantity: " << products[productID].quantity << endl;

    string stocks;
    if (products[productID].isAvailable){
        stocks = "Available";
    }
    else {
        stocks = " Out of Stock";
    }
    cout << "  Stocks: " << stocks << endl;
}

void Supermarket::modifyProductInfo (int productID){
    productID--;

    if (productID <= 0){
        productID = 0;
    }
    else if (productID > numberOfProducts){
        productID = numberOfProducts - 1;
    }

    cout << "\n  Category (Foods, Beverages, Non-food items)(" << products[productID].category <<"):";
    getline (cin, products[productID].category);

    cout << "  Name of the Product: (" << products[productID].name <<")";
    getline (cin, products[productID].name);

    cout << "  Price: (" << products[productID].price << ")";
    cin>> products[productID].price;

    cout << "  Expiration Date (MM.YYYY):(" << products[productID].expiration << ")";
    cin >> products[productID].expiration;

    cout << "  Quantity:(" << products[productID].quantity << ")";
    cin >> products[productID].quantity;

    cin.clear();
    fflush (stdin);

    cout << endl;

}

void Supermarket::deleteProduct (int productID){
    productID--;

    if (productID <= 0){
        productID = 0;
    }
    else if (productID > numberOfProducts){
        productID = numberOfProducts - 1;
    }

    cout << " Are you sure you want to remove this product from the inventory? Y for YES and N is for NO (Y/N):" << endl;

    char removeProduct;
    if (removeProduct == 'Y'){
    {products[productID].isAvailable = false;}
        cout << "\n  Succesfully removed the product" << productID + 1 <<endl;
    }
    else if (removeProduct == 'N'){
        cout << "\n Deletion Cancelled."<< endl;
    }

}

void Supermarket::buyproducts (int productID, int quantity){
    productID--;

    if (productID <= 0){
        productID = 0;
    }
    else if (productID > numberOfProducts){
        productID = numberOfProducts - 1;
    }
    int existingQuantity = products[productID].quantity;

    if (!products[productID].isAvailable) {
        cout << "\n  The product is out of stock." << endl;
    }
    else if (quantity <= 0){
        cout << "\n  The quantity must be atleast 1." << endl;
    }
    else if (quantity > existingQuantity){
        cout << "\n  Your order quantity which is:" << quantity << "have exceeded the available quantity:" << existingQuantity << "." << endl;
    }
    else {
        products[productID].quantity = existingQuantity - quantity;
        cout << "You have succesfully bought" << quantity << "items of" << products[productID].name << "succesfully." << endl;
    }

}






