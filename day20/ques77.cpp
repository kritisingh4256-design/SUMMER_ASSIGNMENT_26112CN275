#include<iostream>
using namespace std;
int main(){
    int r1,c1,c2,r2;
    cout<<"enter the rows and column of first matrix:";
    cin>>r1>>c1;
    cout<<"enter the rows and column of second matrix:";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"matrix multiplication is not possible"<<endl;
        return 0;
    }
    int A[100][100], B[100][100],C[100][100]={0};
    cout<<"enter the elements of first matrix:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    cout<<"enter the elements of second matrix:";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"resultant matrix:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}