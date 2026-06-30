#include <iostream>
#include <string>
using namespace std;

int main()
{
    int bookID[100];
    string title[100], author[100];
    bool issued[100];

    int n = 0, choice, id;
    bool found;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Book ID: ";
                cin >> bookID[n];
                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                issued[n] = false;
                n++;

                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Books Available!\n";
                }
                else
                {
                    cout << "\nID\tTitle\t\tAuthor\t\tStatus\n";
                    cout << "----------------------------------------------------\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << bookID[i] << "\t"
                             << title[i] << "\t"
                             << author[i] << "\t"
                             << (issued[i] ? "Issued" : "Available") << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Book ID to Search: ";
                cin >> id;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(bookID[i] == id)
                    {
                        cout << "\nBook Found\n";
                        cout << "Book ID : " << bookID[i] << endl;
                        cout << "Title   : " << title[i] << endl;
                        cout << "Author  : " << author[i] << endl;
                        cout << "Status  : " << (issued[i] ? "Issued" : "Available") << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";
                break;

            case 4:
                cout << "Enter Book ID to Issue: ";
                cin >> id;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(bookID[i] == id)
                    {
                        if(!issued[i])
                        {
                            issued[i] = true;
                            cout << "Book Issued Successfully!\n";
                        }
                        else
                        {
                            cout << "Book is Already Issued!\n";
                        }
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";
                break;

            case 5:
                cout << "Enter Book ID to Return: ";
                cin >> id;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(bookID[i] == id)
                    {
                        if(issued[i])
                        {
                            issued[i] = false;
                            cout << "Book Returned Successfully!\n";
                        }
                        else
                        {
                            cout << "Book is Already Available!\n";
                        }
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}