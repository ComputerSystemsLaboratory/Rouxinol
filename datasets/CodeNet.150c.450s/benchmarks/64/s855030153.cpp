#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[30];
bool rec(int d,int t){
  if(t==0) return true;
  if(d==n||t<0) return false;
  return rec(d+1,t)||rec(d+1,t-a[d]);
}
signed main(){
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  int q;
  cin>>q;
  int m[q];
  for(int i=0;i<q;i++) cin>>m[i];
  for(int i=0;i<q;i++) cout<<(rec(0,m[i])?"yes":"no")<<endl;
  return 0;
}