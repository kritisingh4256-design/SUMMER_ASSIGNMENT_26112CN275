#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n, temp,rem,digits=0;
int sum=0;
cout<<"enter the number:";
cin>>n;
temp =n;
while(temp!=0){
    digits++;
    temp/=10;
}
temp =n;
while(temp!=0){
    rem=temp%10;
    sum+=pow(rem,digits);
    temp/=10;
}
if(sum==n)
cout<<n<<"is an armstrong number";
else
cout<<n<<"is not an armstrong number";
return 0;
}