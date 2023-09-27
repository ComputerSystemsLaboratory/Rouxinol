#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef long double ld;
typedef vector<ld> vd;
typedef bool bl;
typedef vector<bl> vb;
typedef unordered_map<ll,unordered_map<ll,ll>> graph;

const ll e5 = 1 << 20;
const ll mod = 1000000007;
const ll e3 = 1 << 13;
const ll INF = 1ll << 60;

ll n;
vl ans;

int main(){
  while(cin >> n){
    if(n == 0) break;
    vl s;
    for(ll i = 0;i < n;i++){
      ll x;
      cin >> x;
      s.push_back(x);
    }
    ll x = 0;
    x = accumulate(s.begin(),s.end(),0ll);
    x -= *max_element(s.begin(),s.end());
    x -= *min_element(s.begin(),s.end());
    ans.push_back(x/(s.size()-2));
  }
  for(ll x : ans){
    cout << x << endl;
  }

}

