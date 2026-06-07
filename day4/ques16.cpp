#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int start,end;
    cout<<"enter the both starting and ending number:";
    cin>>start>>end;
    cout<<"armstrong number are:";
    for( int n=start;n<=end;n++){
        int temp=n, digits=0;
        int sum  =0;
        while(temp!=0){
            digits++;
            temp/=10;
        }
        temp = n;
        while( temp!=0){
            int rem=temp%10;
            sum+=pow(rem,digits);
            temp/=10;
        }
        if( sum ==n)
        cout<<n<<" ";
    }
    return 0;

}