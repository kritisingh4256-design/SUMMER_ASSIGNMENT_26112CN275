#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int vowels=0,consonants=0;
    cout<<"enterr a string";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if((ch >='a' &&ch<='z')){
            if(ch =='a'||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
            vowels++;
            else
            consonants++;
        }
    }
    cout<<"number of vowels="<<vowels<<endl;
    cout<<"number of consonants ="<<consonants<<endl;
    return 0;
}