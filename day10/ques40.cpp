#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the  value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch;
        }
        for(char ch='A'+i-2;ch>='A';ch--){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}