#include <iostream>
#include "customer.h"
#include "administrator.h"
#include "Supermarket.h"
using namespace std;

int main()
{
    cout << endl;
        cout << "\t\t================================================ " <<endl;
        cout << "\t\t||\t   Welcome to J&R Supermarket         ||" <<endl;
        cout << "\t\t================================================ " <<endl;
        cout << endl;
    int ch = -1;

    Supermarket sms;

    while (ch!=0){
        cout << endl;
        cout << "\t {1} CUSTOMER" <<endl;
        cout << "\t {2} ADMINISTRATOR" <<endl;
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
            sms.customer();
            break;
            system ("cls");
        case 2:
            system("cls");
            sms.administrator ();
            break;

        case 0:
            cout << "\n Thankyou for buying at J&R Supermarket! Please visit us again nextime.";
            break;


        }

    }
    return 0;

}
