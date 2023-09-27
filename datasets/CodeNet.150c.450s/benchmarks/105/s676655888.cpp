#include <stdio.h>
#include <queue>
using namespace std;
typedef long long ll;

int main(void) {
  ll i, j, k, l, t, n, now, m;
  scanf("%lld", &t);
  for(l = 0; l < t; ++l) {
    scanf("%lld", &n);
    ll a[n + 1];
    i = 0;
    while(i < n) scanf("%lld", &a[++i]);
    char s[n + 10];
    scanf("%s", s + 1);
    priority_queue<ll> q;
    vector<ll> vec, vec2;
    for(i = n; i; --i) {
      if(s[i] == '0') {
        if(vec.size()) {
          for(j = 0; j < vec.size(); ++j) q.push(vec[j]);
          vec.clear();
          vec2.clear();
        }
        q.push(a[i]);
      } else {
        while(q.size()) {
          now = q.top(), q.pop();
          if(!now) continue;
          for(k = 60; !((now >> k) & 1); --k);
          m = 1ll << k;
          while(q.size() && (q.top() & m)) q.push(q.top() ^ now), q.pop();
          for(k = 0; k < vec.size(); ++k) if(m & vec[k]) vec[k] ^= now;
          vec.push_back(now);
          vec2.push_back(m);
        }
        for(j = 0; j < vec.size(); ++j) if(vec2[j] & a[i]) a[i] ^= vec[j];
        if(a[i]) break;
      }
    }
    if(i) printf("1\n");
    else printf("0\n");
  }
  return 0;
}