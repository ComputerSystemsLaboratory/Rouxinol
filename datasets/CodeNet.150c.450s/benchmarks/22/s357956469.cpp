#include <stdio.h>
#include <vector>
#include <utility>
typedef long long ll;

int main(void) {
  ll inf = 10e15;
  ll i, j, k, v, r, e;
  scanf("%lld%lld%lld", &v, &e, &r);
  ll dis[v];
  std::vector< std::pair<ll, ll> > vec[v];
  std::vector< std::pair<ll, ll> >::iterator it;
  for(i = 0; i < v; ++i) dis[i] = inf;
  dis[r] = 0;
  for(i = 0; i < e; ++i) {
    ll ta, tb, tc;
    std::pair<ll, ll> p;
    scanf("%lld%lld%lld", &ta, &tb, &tc);
    p = std::make_pair(tb, tc);
    vec[ta].push_back(p);
  }
  for(k = 1; k < v; ++k) {
    char flag = 0;
    for(i = 0; i < v; ++i) if(dis[i] != inf) {
      for(it = vec[i].begin(); it != vec[i].end(); ++it) {
        if(dis[(*it).first] > dis[i] + (*it).second) {
          flag = 1;
          dis[(*it).first] = dis[i] + (*it).second;
        }
      }
    }
    if(flag) {
      if(k == v - 1) {
        printf("NEGATIVE CYCLE\n");
        return 0;
      }
    } else break;
  }
  for(i = 0; i < v; ++i) {
    if(dis[i] != inf) printf("%lld\n", dis[i]);
    else printf("INF\n");
  }
  return 0;
}
