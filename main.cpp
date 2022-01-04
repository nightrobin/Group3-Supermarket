#include <iostream>
#include "Supermarket.h"

using namespace std;

int main()
{
    int ch = -1;

    Supermarket sms;

    while (ch!=0){
        cout << "  ===================================================== " <<endl;
        cout << " ||            Welcome to J&R Supermarket             ||" <<endl;
        cout << "  ===================================================== " <<endl;
        cout << " ||            {1} Add 5 Products                     ||" <<endl;
        cout << " ||            {2} Display All Products               ||" <<endl;
        cout << " ||            {3} Show Product Informations          ||" <<endl;
        cout << " ||            {4} Modify Product Informations        ||" <<endl;
        cout << " ||            {5} Delete Product                     ||" <<endl;
        cout << " ||            {6} Buy Products                       ||" <<endl;
        cout << " ||            {0} Exit Supermarket                   ||" <<endl;
        cout << "  ===================================================== " <<endl;

        cout << " \n  Enter a number to proceed: ";
        cin >> ch;

        cin.clear();
        fflush(stdin);

        int productID;

        switch (ch){
        case 1:
            sms.addProducts();
            break;
        case 2:
            sms.displayProducts ();
            break;
        case 3:
            cout << " Please enter the Product ID to show the product details:" << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.showProductInfo(productID);
            break;
        case 4:
            cout << " Please enter the Product ID to modify the product details:" << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.modifyProductInfo(productID);
            break;

        case 5:
            cout << " Enter the Product ID to delete the product: " << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.deleteProduct(productID);
            break;
        case 6:
            cout << " Please enter the Product ID you want to buy : " << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            int quantity;
            cout << " Please enter the Product ID you want to buy : " << endl;
            cin >> productID;
            cin.clear();
            fflush(stdin);

            sms.buyproducts(productID, quantity);
            break;

        case 0:
            cout << "\n Thankyou for buying at J&R Supermarket! Please visit us again nextime.";
            break;

        system("cls");
        }


    return 0;
}
}
