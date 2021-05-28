#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cin>>n;
    j=n;
    if(n==1){
        cout<<1;
    }

    if(n==2||n==3){
        cout<<"NO SOLUTION";
    }else if(n==4){
        cout<<"2 4 1 3";
    }else
    {
    for(int i=0;i<n-1;i++){
        cout<<j<<" ";
        j=j-2;
        if(j==1){
            cout<<j<<" ";
            j=n-1;
        }
        if(j==0){
            j=n-1;
            continue;
        }
        }
        }
}
