#include<bits/stdc++.h>
using namespace std;
int n,q,s[10010],t,cnt;
int srch(int t){
  s[n]=t;
  int i=0;
  while(s[i]!=t) ++i;
  return i!=n;
}
int main(){
  cin>>n;
  for(int i=0;i<n;++i) cin>>s[i];
  cin>>q;
  for(int i=0;i<q;++i){
    cin>>t;
    if(srch(t)) ++cnt;
  }
  cout<<cnt<<endl;
  return 0;
}