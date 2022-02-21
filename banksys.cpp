#include <iostream>
using namespace std;
#include <cstdio>
class Bank
{
    string name;
    int age;
    int id;
    int phone;
    int amt;

public:
    void open()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your age: " << endl;
        cin >> age;
        cout << "Enter  your id number: " << endl;
        cin >> id;
        cout << "Enter your phone number: " << endl;
        cin >> phone;
        cout << "Your info has been sent to bank database:" << endl;
    }
    void showDetails()
    {
        cout << "..............Printing details............." << endl;
        cout << "Account name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID:" << id << endl;
        cout << "Phone number:" << phone << endl;
        cout << ".............................\n";
    }
    void sent()
    {
        cout << "Enter the amount in Rs you want to debit: " << endl;
        cin >> amt;
        cout << "Rs" << amt << " has been added to  your  account." << endl;
    }
    void check()
    {
    	cout <<".................." << endl;
        cout << "Account name: " << name << endl;
        cout << "Phone number:" << phone << endl;
        cout << "Balance = RS:" << amt << endl;
    }
};
void menu();
int main()
{
    Bank s1;
    int x;
    menu();
    for (int i = 0; i < 5; i++)
    {
    	cout << "...................."<< endl;
        cout << "Enter your choice: " << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            s1.open();
            break;
        case 2:
            s1.showDetails();
            break;
        case 3:
            s1.sent();
            break;
        case 4:
            s1.check();
            break;

        default:
            goto help;
        }
    }
help:
    return 0;
}
void menu()
{
    cout << "1. Open a account ." << endl;
    cout << "2. Show account details." << endl;
    // Add this on version 2.0 hehehe1
    cout << "3. Deposit amount." << endl;
    cout << "4. Balance enquiry." << endl;
    cout << "5. exit." << endl;
}
