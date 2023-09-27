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
    ll n;
    cin >> n;
    vec a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    string s;
    cin >> s;
    vec al;
    ll f=0;
    for(ll i=n-1;i>=0;i--) {
      for(ll t:al) {
        a[i]=min(a[i],a[i]^t);
      }
      al.push_back(a[i]);
      if(a[i]&&s[i]=='1') {
        f=1;
      }
    }
    cout << f << endl;
  }
}