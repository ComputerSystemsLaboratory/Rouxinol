#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
int main() {
  int n, m, k;
  for(;;) {
    scanf("%d", &n);
    if(n == 0) break;
    vector<P> v(n);
    //first: y, second: x                                                                                                                   
    v[0] = make_pair(0, 0);
    for(int i = 1; i < n; ++i) {
      scanf("%d %d", &m, &k);
      switch(k) {
      case 0: v[i] = make_pair(v[m].first, v[m].second - 1); break;
      case 1: v[i] = make_pair(v[m].first + 1, v[m].second); break;
      case 2: v[i] = make_pair(v[m].first, v[m].second + 1); break;
      case 3: v[i] = make_pair(v[m].first - 1, v[m].second); break;
      }
    }
    int maxx = v[0].second, minx = v[0].second, maxy=v[0].first, miny=v[0].first;
    for(int i = 0; i < n; ++i) {
      maxx = max(maxx, v[i].second);
      minx = min(minx, v[i].second);
      maxy = max(maxy, v[i].first);
      miny = min(miny, v[i].first);
    }
    printf("%d %d\n", abs(maxx - minx) + 1,abs(maxy - miny) + 1);
  }
  return 0;
}