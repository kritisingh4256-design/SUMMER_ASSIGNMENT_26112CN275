# include<iostream>
using namespace std;
int main(){
    int first,last;
    cout<<"enter the first number";
    cin>>first;
    cout<<"enter the last number";
    cin>>last;
    for(int n=first;n<=last;n++){
        bool prime = true;
        if(n<=1)
        prime=false;
        else{
            for(int i=2;i<n;i++){
                if(n%i==0)
                {
                    prime=false;
                    break;
                }
            }
        }
        if(prime)
        cout<<n<<" ";
    }
    return 0;
}