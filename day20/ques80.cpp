#include<iostream>
 using namespace std;
int main()
{
    int r, c;
    cout << "enter the number of rows and columns:";
    cin >> r >> c;
    int A[10][10];
    cout << "enter the elements of the matrix:";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "column wise sum" << endl;
    for (int j = 0; j < c; j++)
    {
        int sum = 9;
        for (int i = 0; i < r; i++)
        {
            sum + A[i][j];
        }
        cout << "sum of column" << j + 1 << "=" << sum << endl;
    }
    return 0;
}