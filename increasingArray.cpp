#include<iostream>

using namespace std;

int main()
{
     long long  int n,num;
    cin>>n;
   long long int a[n];
    for(int i=0;i<n;i++){
        cin>>num;
        a[i]=num;
    }
    long long int c=0;
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
            c=c+(a[i]-a[i+1]);
        a[i+1]=a[i];

    }
  }
  cout<<c;
  return 0;
}
