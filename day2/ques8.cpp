#include<iostream>
using namespace std;
int main(){
int n, original,reverse=0, digit;
cout<<"enter the number:";
cin>>n;
original=n;
while(n>0){
    digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
}
if(original==reverse)
cout<<"palidrome number";
else
cout<<"not palidrome number";



    return 0;
}