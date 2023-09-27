#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int q;
  cin>>q;
  int m[q];
  for(int i=0;i<q;i++) cin>>m[i];
  set<int> s;
  for(int i=0;i<(1<<n);i++){
    int tmp=0;
    for(int j=0;j<n;j++) tmp+=((i>>j)&1)*a[j];
    if(tmp>2000) continue;
    s.insert(tmp);
  }
  for(int i=0;i<q;i++) cout<<(s.count(m[i])?"yes":"no")<<endl;
  return 0;
}