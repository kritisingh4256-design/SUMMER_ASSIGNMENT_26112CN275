#include<iostream>
using namespace std;
int main(){
int n,key;
cout<<"enter the number of elements:";
cin>>n;
int arr[n];
cout<<"enter the array elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the element to serach:";
cin>>key;
int pos=-1;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        pos=i;
        break;
    }
}
if(pos!=-1)
cout<<"element found  at position"<<pos+1;
else cout<<"element not found";
return 0;
}