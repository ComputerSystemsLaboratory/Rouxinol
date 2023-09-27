#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int a[2][4];
  for(int i=0;i<2;i++)
    for(int j=0;j<4;j++)
      cin>>a[i][j];
  int s[2]={};
  
  for(int i=0;i<2;i++)
    for(int j=0;j<4;j++)
      s[i]+=a[i][j];
  
  cout<<max(s[0],s[1])<<endl;
  return 0;
}