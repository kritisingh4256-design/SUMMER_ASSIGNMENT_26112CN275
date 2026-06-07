#include<iostream>
using namespace std;
int main(){
    int n;
    long long factorial =1;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial =factorial*i;
    }
    cout<<"factorial of "<<n<<"="<<factorial;










    return 0;
}