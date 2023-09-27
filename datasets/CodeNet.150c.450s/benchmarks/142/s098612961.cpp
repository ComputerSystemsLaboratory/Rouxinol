
#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < n; ++i)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const ll INF=1e18;



int main() {
  ll n,k;
  cin>>n>>k;
  vector<ll> a(n);
  rep(i,n)cin>>a[i];
  ll l=0;
  ll r=k;
  rep(i,n-k){
    if (a[r]>a[l])cout<<"Yes";
    else cout<<"No";
    l++;r++;
    cout<<endl;
  //  cout<<l<<" "<<r<<endl;
  }

}
