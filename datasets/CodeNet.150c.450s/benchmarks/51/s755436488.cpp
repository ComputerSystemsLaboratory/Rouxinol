#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int a[30]={};
  for(int i=0,k;i<28;i++){
    cin>>k;
    a[k-1]=1;
  }
  for(int i=0;i<30;i++){
    if(!a[i]) cout<<i+1<<endl;
  }
  return 0;
}