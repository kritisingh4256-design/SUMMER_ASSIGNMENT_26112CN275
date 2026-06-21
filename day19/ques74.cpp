#include<iostream>
using namespace std;
int main(){
    int n1; 
    int n2;
    cout<<"enter the  size of first array";
    cin>>n1;
    int arr1[n1];
    cout<<"enter the element of first array";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"enter the size of second array:";
    cin>>n2;
    int arr2[n2];
    cout<<" enter the elementd of second array:";
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}
if(n1!=n2){
    cout<<"array must be of the same size for subtraction.";
}
int result [n1];
for(int i=0;i<n1;i++){
    result[i]=arr1[i]-arr2[i];
}
cout<<"subtraction of arrays:";
for(int i=0;i<n1;i++){
    cout<<result[i]<<" ";
}
return 0;

}