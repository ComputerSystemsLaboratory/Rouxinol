#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;

ll m,n_min,n_max;
vl p;

int main(){
  while(cin >> m >> n_min >> n_max){
    if(m == 0 && n_min == 0 && n_max == 0) return 0;
    p = vl(m);
    for(ll i = 0;i < m;i++) cin >> p[i];
    sort(p.rbegin(),p.rend());
    ll gap = 0;
    ll ans = 0;
    for(ll i = n_min;i <= n_max;i++){
      if(p[i-1]-p[i] >= gap){
        ans = i;
        gap = p[i-1]-p[i];
      }
    }
    cout << ans << endl;
  }
}

