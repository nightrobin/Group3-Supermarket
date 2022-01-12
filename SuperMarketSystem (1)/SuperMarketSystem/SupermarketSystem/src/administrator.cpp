#include "administrator.h"

administrator::administrator()
{
	//ctor
}

administrator::~administrator()
{
	//dtor
}
void administrator::administrators()
{
    #include <iostream>
#include "Supermarket.h"

using namespace std;
{
    cout << endl;
        cout << "\t\t================================================ " <<endl;
        cout << "\t\t||\t   Welcome to J&R Supermarket         ||" <<endl;
        cout << "\t\t================================================ " <<endl;
        cout << endl;
    int ch = -1;

    Supermarket sms;

    while (ch!=0){
        cout << "\n\t AVAILABLE NUMBER FOR CUSTOMER = 2, 3, 6, and 0" <<endl;
        cout << endl;
        cout << "\t {1} Add 5 Products" <<endl;
        cout << "\t {2} Display All Products" <<endl;
        cout << "\t {3} Show Product Informations" <<endl;
        cout << "\t {4} Modify Product Informations" <<endl;
        cout << "\t {5} Delete Product" <<endl;
        cout << "\t {6} Buy Products" <<endl;
        cout << "\t {0} Exit Supermarket" <<endl;
        cout << endl;
        cout << "\t Enter a number to proceed: ";
        cin >> ch;
        system("cls");

        cin.clear();
        fflush(stdin);

        int productID;

        switch (ch){
        case 1:
            sms.addProducts();
            break;
            system ("cls");
        case 2:
            system("cls");
            sms.displayProducts ();
            break;

        case 3:
            cout << endl;
            cout << "\n Please enter the Product ID to show the product details:" << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.showProductInfo(productID);
            break;
        case 4:
            cout << "\n Please enter the Product ID to modify the product details:" << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.modifyProductInfo(productID);
            break;

        case 5:
            cout << "\n Enter the Product ID to delete the product: " << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.deleteProduct(productID);
            break;
        case 6:
            cout << "\n Please enter the Product ID you want to buy : " << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            int quantity;
            cout << "\n Please enter the quantity you want to buy   : " << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.buyproducts(productID, quantity);
            break;

        case 0:
            cout << "\n Thankyou for buying at J&R Supermarket! Please visit us again nextime.";
            break;


        }

    }

}
