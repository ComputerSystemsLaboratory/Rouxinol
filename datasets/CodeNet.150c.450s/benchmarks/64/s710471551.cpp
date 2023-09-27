#include<bits/stdc++.h>
using namespace std;
#define int long long
bool rec(int v,int s,int n,int c,int *a){
  if(v==n) return s==c;
  bool res=0;
  res|=rec(v+1,s+a[v],n,c,a);
  res|=rec(v+1,s,n,c,a);
  return res;
}
signed main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int q;
  cin>>q;
  int m[q];
  for(int i=0;i<q;i++) cin>>m[i];
  for(int i=0;i<q;i++) cout<<(rec(0,0,n,m[i],a)?"yes":"no")<<endl;
  
  return 0;
}