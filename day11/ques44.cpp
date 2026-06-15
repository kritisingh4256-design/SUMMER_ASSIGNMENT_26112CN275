#include<iostream>
using namespace std;
int factorial(int n){
int fact=1;

for(int i=1;i<=n;i++){
    fact=fact*i;}
    return fact;
}
int main(){
    int num;
    cout<<"enterr the number"<<endl;
    cin>>num;
    cout<<"factorial="<<factorial(num);
return 0;
}