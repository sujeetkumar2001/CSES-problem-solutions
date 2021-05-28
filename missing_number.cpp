#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,num,a=1;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n-1;i++){
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<=n-1;i++){
        if(arr[i]==a){
            a++;
        }else{
        cout<<a;
        break;
        }
    }

    return 0;

}
