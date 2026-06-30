#include <iostream>
using namespace std;

struct BankAccount
{
    int accountNumber;
    string name;
    float balance;
};

int main()
{
    BankAccount acc;
    int choice;
    float amount;

    cout << "===== Bank Account Management System =====" << endl;

  
    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;

    cout << "Enter Account Holder Name: ";
    cin >> acc.name;

    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.balance += amount;
                cout << "Deposit Successful!" << endl;
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= acc.balance)
                {
                    acc.balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                }
                else
                {
                    cout << "Insufficient Balance!" << endl;
                }
                break;

            case 3:
                cout << "Current Balance: Rs. " << acc.balance << endl;
                break;

            case 4:
                cout << "\n===== Account Details =====" << endl;
                cout << "Account Number : " << acc.accountNumber << endl;
                cout << "Account Holder : " << acc.name << endl;
                cout << "Balance        : Rs. " << acc.balance << endl;
                break;

            case 5:
                cout << "Thank you for using the Bank Account System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}