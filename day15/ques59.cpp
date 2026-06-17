#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int last =arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]==arr[i-1];

    }
    arr[0]=last;
    cout<<"array after eight rotation:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }  
 return 0;
}