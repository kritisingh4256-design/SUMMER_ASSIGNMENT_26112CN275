#include <iostream>
#include <string>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Item item[100];
    int n = 0, choice, id, i, j;
    bool found;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Item ID: ";
            cin >> item[n].id;
            cin.ignore();

            cout << "Enter Item Name: ";
            getline(cin, item[n].name);

            cout << "Enter Quantity: ";
            cin >> item[n].quantity;

            cout << "Enter Price: ";
            cin >> item[n].price;

            n++;
            cout << "Item Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Items Available!\n";
            }
            else
            {
                cout << "\nID\tName\tQuantity\tPrice\n";
                for (i = 0; i < n; i++)
                {
                    cout << item[i].id << "\t"
                         << item[i].name << "\t"
                         << item[i].quantity << "\t\t"
                         << item[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Item ID to Search: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (item[i].id == id)
                {
                    cout << "\nItem Found\n";
                    cout << "ID: " << item[i].id << endl;
                    cout << "Name: " << item[i].name << endl;
                    cout << "Quantity: " << item[i].quantity << endl;
                    cout << "Price: " << item[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item Not Found!\n";
            break;

        case 4:
            cout << "Enter Item ID to Update: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (item[i].id == id)
                {
                    cin.ignore();
                    cout << "Enter New Name: ";
                    getline(cin, item[i].name);

                    cout << "Enter New Quantity: ";
                    cin >> item[i].quantity;

                    cout << "Enter New Price: ";
                    cin >> item[i].price;

                    cout << "Item Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item Not Found!\n";
            break;

        case 5:
            cout << "Enter Item ID to Delete: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (item[i].id == id)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        item[j] = item[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "Item Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Item Not Found!\n";
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}