#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int evenCount = 0, oddCount = 0;

    cout << "Enter 10 elements: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Number of even elements = " << evenCount << endl;
    cout << "Number of odd elements = " << oddCount << endl;

    return 0;
}