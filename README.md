# Banking-system
This helps to create a banking system using c++ (object oriented programming)
add stg useful  from your pov....
thanks for watching :)
owner: Sujan Shrestha : St. Lawrence KTM....
 Source code below:
 

#include <iostream>
using namespace std;
class bank
{
public:
    int age, id;
    string name, gender;

    void getinfo()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your age: " << endl;
        cin >> age;
        cout << "Enter your gender: " << endl;
        cin >> gender;
        cout << "Enter your id: " << endl;
        cin >> id;
    }
    void printdetails()
    {
        cout << "......Printing Details.... " << endl;
        cout << "Account name:" << name << endl;
        cout << "Account number:" << 123456 << endl;
        cout << "Age:" << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "ID:" << id << endl;
    }
};
void menu();
int main()
{
    bank ktm;
    int a;
    for (a = 0; a <= 3; a++)
    {
        menu();
        cout << "Enter your choice: " << endl;
        cin >> a;

        if (a == 1)
        {
            ktm.getinfo();
        }
        else if (a == 2)
        {
            ktm.printdetails();
        }
    }
    return 0;
}
void menu()
{
    cout << "1. Open a account ." << endl;
    cout << "2. Show account details." << endl;
    // Add this on version 2.0 hehehe
    // cout << "3. Deposit amount." << endl;
    // cout << "4. Withdraw money." << endl;
    cout << "3. exit." << endl;
}
