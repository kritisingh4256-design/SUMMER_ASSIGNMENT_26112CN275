
    #include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int count = 0;
    int temp = n;

  
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;


    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cin >> num;

    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}

