#include <bits/stdc++.h>
#define ADAY 86400
using namespace std;
typedef long long ll;

int main(void){
  ll n;
  while(cin >> n, n){
    vector < pair < ll, ll > > t;
    for(ll i=0; i < n; i++){
      pair<ll, ll> tmp;
      int h, m, s;
      scanf("%d:%d:%d", &h, &m, &s);
      tmp.first = (ll)(h * 3600 + m * 60 + s);
      scanf("%d:%d:%d", &h, &m, &s);
      tmp.second = (ll)(h * 3600 + m * 60 + s);
      t.push_back(tmp);
    }

    sort(t.begin(), t.end());

    ll ans = 0, movin = 0, ind = 0;
    vector<ll> q;
    for(ll now=0; now <= ADAY; now++){
      while(!q.empty() && now == q[0]){
        movin--;
        q.erase(q.begin());
      }
      while(ind < n && now == t[ind].first){
        q.push_back(t[ind].second);
        sort(q.begin(), q.end());
        movin++;
        ind++;
        ans = max(ans, movin);
      }
    }
    cout << ans << endl;
  }
  return 0;
}