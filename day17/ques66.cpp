#include <iostream>
#include<set>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the first array:";
    cin>>n1;
    int arr1[n1];
    cout<<"enter the elements of first array:";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

cout<<"enter the size of second array:";
cin>>n2;
int arr2[n2];
cout<<"enter the elements of second array:";
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}
set<int> unionset;
for(int i=0;i<n1;i++){
    unionset.insert(arr1[i]);
}
for(int i=1;i<=n2;i++){
    unionset.insert(arr2[i]);
}
cout<<"union of arrays:";
for(auto x:unionset){
    cout<<x<<" ";
}
return 0;
}