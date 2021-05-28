#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s;
   cin>>s;
   vector<int>a;
   int l,c=1;//c used here for count
   l=s.length();
   for(int i=0;i<l;i++){
    if(s[i]==s[i+1]){
        c++;
    }else{
    c=1;
    }
    a.push_back(c);
   }
   int m;
   m=*max_element(a.begin(),a.end());
   cout<<m;

}
