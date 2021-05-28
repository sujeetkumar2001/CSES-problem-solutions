//In this problem basically we have to calculate the total no of ways two knight can be placed on a k*k chessboard so that they cannot attack each other
//so total no of ways two knight can be placed on a chessboard is (n*n)(n*n-1)/2
//so now we have to subtract the no of ways two knight can attack each other
//total no of ways two knight attack on each other is=4*(n-1)*(n-2)
#include<iostream>
using namespace std;


int main()
{
long long int n;
cin>>n;
long long int k;
for(k=1; k<=n; k++){
    cout<<((k*k)*(k*k-1)/2)-(4*(k-1)*(k-2))<<"\n";

}
return 0;
}
