#include<iostream>
using namespace std;
int main(){
    int n, digit;
    int product=1;
    cout<<"enter the value of n:";
    cin>>n;
    while(n>0){
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
cout<<"the product of digits="<<product;






    return 0;
}