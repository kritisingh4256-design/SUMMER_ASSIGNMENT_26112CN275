#include<iostream>
using namespace std ;
int main(){
    int num,temp,digits,sum=0;
    cout<<"enter the number :";
    cin>>num;
    temp=num;
    while(temp>0){
        digits=temp%10;
        int fact=1;
        for(int i=1;i<=digits;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num)
    cout<<num<<"is a strong number";
    else
    cout<<num<<"is not a strong number";
    return 0;
    
}