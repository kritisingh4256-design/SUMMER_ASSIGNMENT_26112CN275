#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;

    string arr[n];

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].length() > arr[j].length())
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "\nStrings sorted by length:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}