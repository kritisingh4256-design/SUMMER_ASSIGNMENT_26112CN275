#include<iostream>
using namespace std;
int main (){
    int n1,n2;
    cout<<"enter the size of first array";
    cin>>n1;
    int arr1[n1];
cout<<"enter the elements of first array:";
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}

cout<<"enter the size of second array:";
cin>>n2;
int arr2[n2];
cout<<"enter the element of second array:";
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}
int sum=0;
for(int i=1;i<n1;i++)
sum=sum+arr1[i];
for(int i=0;i<n2;i++)
sum=sum+arr2[i];
cout<<"the sum of two array is "<<sum<<endl;
return 0;

}