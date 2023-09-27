#include <bits/stdc++.h>
using namespace std;

#define int long long
template<typename T>
void chmin(T &a,T b){
  if(a>b)a=b;
}
void add(set<int> &now,int a){
  for(int p:now)chmin(a,a^(-p));
  if(a)now.insert(-a);
}
bool out(set<int> &now,int a){
  for(int p:now)chmin(a,a^(-p));
  return a;
}

signed main(){
  int t;cin>>t;
  while(t--){
    int n,ans=0;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    string s;cin>>s;
    if(s.back()=='1')ans=1;
    set<int> now;
    for(int i=n-1;i>=0;i--){
      if(s[i]=='0')add(now,v[i]);
      else if(out(now,v[i]))ans=1;
    }
    cout<<ans<<endl;
  }
}
