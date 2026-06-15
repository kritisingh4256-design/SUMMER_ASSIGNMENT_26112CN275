#include<iostream>
using namespace std;
int main(){
    int array [10];
    cout<<"enter the 10  numbers"<<endl;
    for(int i=0;i<=10;i++){
        cin>>array[i];
    }
    cout<<"array elements are ";
    for(int i=0;i<=10;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}