#include<iostream>
using namespace std ;
int main(){
    int n,a=0,b=1,c;
    cout<<"enter thevalue of n:";
    cin>>n;
    if(n==1)
    cout<<"Nth fibonacci number ="<<a;
    else if (n==2)
    cout<<"Nth fibonacci number ="
<<b;
else {

    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"Nth fibonacci number ="<<b;
}
return 0;
}