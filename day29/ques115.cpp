#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2, temp;
    int choice;

    cout << "Enter First String: ";
    getline(cin, str1);

    cout << "Enter Second String: ";
    getline(cin, str2);

    do
    {
        cout << "\n===== Menu Driven String Operations =====\n";
        cout << "1. Display Strings\n";
        cout << "2. Find Length\n";
        cout << "3. Concatenate Strings\n";
        cout << "4. Compare Strings\n";
        cout << "5. Reverse First String\n";
        cout << "6. Copy First String\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "First String  : " << str1 << endl;
                cout << "Second String : " << str2 << endl;
                break;

            case 2:
                cout << "Length of First String  = " << str1.length() << endl;
                cout << "Length of Second String = " << str2.length() << endl;
                break;

            case 3:
                cout << "Concatenated String = " << str1 + " " + str2 << endl;
                break;

            case 4:
                if(str1 == str2)
                    cout << "Both strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 5:
                temp = str1;
                reverse(temp.begin(), temp.end());
                cout << "Reversed First String = " << temp << endl;
                break;

            case 6:
                temp = str1;
                cout << "Copied String = " << temp << endl;
                break;

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}