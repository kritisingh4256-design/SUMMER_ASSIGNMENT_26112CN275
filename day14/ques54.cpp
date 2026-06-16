#include<iostream>
using namespace std;
int main(){
int n,key,count=0;
cout<<"enter the number of elements:";
cin>>n;
int arr[n];
cout<<"enter the array elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the element whose frequency is to be fouund:";
cin>>key;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        count++;
    }
}
cout<<"frequency of "<<key<<"="<<count;
return 0;
}