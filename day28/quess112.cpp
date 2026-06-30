#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact contacts[100];
    int count = 0, choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                cout << "Enter Name: ";
                getline(cin, contacts[count].name);

                cout << "Enter Phone Number: ";
                getline(cin, contacts[count].phone);

                count++;
                cout << "Contact added successfully!\n";
                break;

            case 2:
                if(count == 0)
                {
                    cout << "No contacts available.\n";
                }
                else
                {
                    cout << "\n----- Contact List -----\n";
                    for(int i = 0; i < count; i++)
                    {
                        cout << "Contact " << i + 1 << endl;
                        cout << "Name : " << contacts[i].name << endl;
                        cout << "Phone: " << contacts[i].phone << endl;
                        cout << "------------------------\n";
                    }
                }
                break;

            case 3:
                cout << "Thank you for using the Contact Management System!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 3);

    return 0;
}