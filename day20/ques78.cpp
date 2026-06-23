#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the order of matrix:";
cin>>n;
int a[10][10];
cout<<"enterr the elements of thee matrix";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
bool symmetric= true;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
{
    if(a[i][j]!=a[j][i])
    {
        symmetric=false;
        break;

    }
}
}
if(symmetric)
cout<<"matrix is symmetric";
else
cout<<"matrix is not symmetric";
return 0;
}