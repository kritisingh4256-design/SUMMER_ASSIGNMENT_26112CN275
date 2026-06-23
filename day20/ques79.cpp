#include<iostream>
using namespace std ;
int main(){
    int r,c;
    cout<<"enter the number of rows and columns:";
    cin>>r>>c;
    int A[10][10];
    cout<<"enter the elements of the matrix:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"rowise sum"<<endl;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+A[i][j];
        }
        cout<<"sum of row"<<i+1<<"="<<sum<<endl;
    }
    return 0;
}