#include <iostream>
#include <string>
using namespace std;
// creating bank similar to ATM
class Bank
{
public:
    string name;
    int ATMpin;
    string password;
    int a;
    int choice;
    int b;
    int c;
    int d;
    int e;
    // first creating an account
    Bank()
    {
        cout << "creating account!!" << endl;
        cout << "enter your name: " << endl;
        cin >> name;
        cout << "enter your login password: " << endl;
        cin >> password;
        cout << "enter your four digit ATM pin: " << endl;
        cin >> ATMpin;
        cout << "your account is created!!" << endl;
    }
    // depositing money in the account
    void deposit()
    {
        cout << "amount of money to be deposited in account at an interest rate of 10% per annum: " << endl;
        cin >> a;
    }
    void display()
    {
        cout << "if you want to check balance - 1" << endl;
        cout << "if you want to withdraw money - 2" << endl;
        cout << "if you want to tranfer money - 3" << endl;
        cout << "what is your choice - " << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "your main account balance is " << a << endl;
        }
        if (choice == 2)
        {
            cout << "amount of money to withdraw: " << endl;
            cin >> b;
            if (a - b < 0)
            {
                cout << "you can not withdraw that much amount." << endl;
            }
            else
            {

                cout << "now your main account balance is: " << a - b << endl;
            }
        }
        if (choice == 3)
        {
            cout << "account number is which money has to be transfer: " << endl;
            cin >> c;
            cout << "amount of money to transfer: " << endl;
            cin >> d;
            if (a - d < 0)
            {
                cout << "you cannot transfer this amount." << endl;
            }
            else
            {
                cout << "now your main account balance is: " << a - d << endl;
            }
        }
    }
    // time to check transaction history
    void transaction()
    {
        cout << "lets check transaction history!!" << endl;
        cout << "what is your ATM pin: " << endl;
        cin >> e;
        if (e == ATMpin)
        {
            if (choice == 1)
            {
                cout << "You have checked your main balance" << endl;
            }
            if (choice == 2)
            {
                if (a - b < 0)
                {
                    cout << "no transaction history" << endl;
                }
                else
                {
                    cout << "withdraw has been done and final balance is: " << a - b << endl;
                }
            }
            if (choice == 3)
            {
                if (a - d < 0)
                {
                    cout << "no transaction history" << endl;
                }
                else
                {
                    cout << "transfer of money has been done and final balance is: " << a - d << endl;
                }
            }
            if (choice != 1 && choice != 2 && choice != 3)
            {
                cout << "no transaction history!!" << endl;
            }
        }
        else
        {
            cout << "your account does not exist !!" << endl;
        }
    }
};
int main()
{
    // used constructor in above class
    Bank accholder1;
    accholder1.deposit();
    accholder1.display();
    accholder1.transaction();
    cout << "process finished" << endl;
    Bank accholder2;
    accholder2.deposit();
    accholder2.display();
    accholder2.transaction();
    cout << "process finished" << endl;
    Bank accholder3;
    accholder3.deposit();
    accholder3.display();
    accholder3.transaction();
    cout << "process finished" << endl;
    return 0;
}
