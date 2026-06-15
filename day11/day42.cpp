#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
    int x,y;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    cout<<"the maximum between two number is"<<max(x,y);
    return 0;
}
