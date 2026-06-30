#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    bool issued;
};

int main()
{
    int n;

    cout << "===== Library Management System =====" << endl;
    cout << "Enter the number of books: ";
    cin >> n;

    Book book[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> book[i].bookId;

        cout << "Book Title: ";
        cin >> book[i].title;

        cout << "Author Name: ";
        cin >> book[i].author;

        cout << "Is the book issued? (1 = Yes, 0 = No): ";
        cin >> book[i].issued;
    }

    cout << "\n===== Library Records =====" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID     : " << book[i].bookId << endl;
        cout << "Book Title  : " << book[i].title << endl;
        cout << "Author      : " << book[i].author << endl;

        if (book[i].issued)
            cout << "Status      : Issued" << endl;
        else
            cout << "Status      : Available" << endl;
    }

    return 0;
}