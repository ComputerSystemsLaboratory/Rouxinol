#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin>>n;
  ll vec[n];
  for(int i=0;i<n;i++){
    cin>>vec[i];
  }
  string s;
  cin>>s;
  if(s[n-1]=='1'){
    cout<<1<<endl;
    return;
  }
  reverse(vec,vec+n);
  reverse(s.begin(),s.end());
  vector<ll> bases;
  for(int i=0;i<n;i++){
    for(ll base:bases){
      vec[i]=min(vec[i],vec[i]^base);
    }
    if(vec[i]){
      if(s[i]=='0'){
        bases.push_back(vec[i]);
      }
      else{
        cout<<1<<endl;
        return;
      }
    }
  }
  cout<<0<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}