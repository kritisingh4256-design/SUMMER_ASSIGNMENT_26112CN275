#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, key, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== Menu Driven Array Operations =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum of Elements\n";
        cout << "3. Find Largest Element\n";
        cout << "4. Find Smallest Element\n";
        cout << "5. Search an Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array Elements: ";
                for(int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                sum = 0;
                for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                cout << "Sum of elements = " << sum << endl;
                break;

            case 3:
            {
                int largest = arr[0];
                for(int i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                cout << "Largest element = " << largest << endl;
                break;
            }

            case 4:
            {
                int smallest = arr[0];
                for(int i = 1; i < n; i++)
                {
                    if(arr[i] < smallest)
                        smallest = arr[i];
                }
                cout << "Smallest element = " << smallest << endl;
                break;
            }

            case 5:
            {
                cout << "Enter element to search: ";
                cin >> key;

                bool found = false;
                for(int i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Element not found.\n";
                break;
            }

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 6);

    return 0;
}