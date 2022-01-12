#include "customer.h"
#include "Supermarket.h"
customer::customer()
{
	//ctor
}

customer::~customer()
{
	//dtor
}
void customer::customers()
{
    int main()
        cout << "\t\t================================================ " <<endl;
        cout << "\t\t||\t   Welcome to J&R Supermarket         ||" <<endl;
        cout << "\t\t================================================ " <<endl;
        cout << endl;
    int ch = -1;

    Supermarket sms;

    while (ch!=0){

        cout << "\t {1} Display All Products" <<endl;
        cout << "\t {2} Show Product Informations" <<endl;
        cout << "\t {3} Buy Products" <<endl;
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
        case 3:
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
