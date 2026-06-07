#include <iostream>
using namespace std;
int main(){
    int n,i;
    bool prime=true;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n<=1){
        prime=false;
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                prime=false;
                break;
            }
        }
    }
if( prime)
cout<<n<<"is a prime number";
else 
cout<<n<<"is a not prime number";
return 0;

}