#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;
typedef pair<ll,ll> pll;
const ll mod=1e9+7;
//const ll mod=998244353;
const ll inf=1LL<<61;

int main() {
  ll t;
  cin >> t;
  while(t--) {
    ll n,ans=0;
    cin >> n;
    vec a(n),now;
    for(ll i=0;i<n;i++) cin >> a[i];
    string s;
    cin >> s;
    for(ll i=n-1;i>=0;i--) {
      for(ll p:now) {
        a[i]=min(a[i],a[i]^p);
      }
      now.push_back(a[i]);
      ans|=s[i]=='1'&&a[i];
    }
    cout << ans << endl;
  }
}