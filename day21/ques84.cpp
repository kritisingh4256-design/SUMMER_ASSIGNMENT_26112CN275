#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
for(int i=0;i<str.length();i++)
{
    str[i]=toupper(str[i]);
}
cout<<"uppercae string:"<<str<<endl;
return 0;
}