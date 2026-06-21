#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the order of matrix:";
    cin>>n;
    int arr[100][100];
    int sum=0;
    cout<<"enter the matrix element :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       cin>>arr[i][j];
           }

}
for(int i=0;i<n;i++){
    sum=sum+arr[i][i];
}
cout<<"sum of diagonal elements of matrix ="<<sum<<endl;
return 0;
}