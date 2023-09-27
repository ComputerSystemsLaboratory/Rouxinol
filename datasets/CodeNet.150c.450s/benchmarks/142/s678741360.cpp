#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++) 
#define all(v) begin(v),end(v)
using ll = long long;

int main() {
  int n,k;cin>>n>>k;
  vector<ll> a(n);
  rep(i,n)cin>>a[i];
  rep(i,n-k){
    if(a[i]<a[i+k])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}