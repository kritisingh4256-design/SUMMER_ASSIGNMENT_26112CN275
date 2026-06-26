#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,rev="";
    cout<<"enter the string:";
    cin>>str;
    for(int i=str.length()-1;i>=0;i--){
        rev=rev+str[i];

    }
    cout<<"reverse string="<<rev<<endl;
    if(str==rev)
    cout<<"palidrome string";
    else
    cout<<"not a palidrome string";
    return 0;
}