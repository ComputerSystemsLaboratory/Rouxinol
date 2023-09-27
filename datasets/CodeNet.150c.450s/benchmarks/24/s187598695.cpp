#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

struct route_t {
  uint32_t dist;
  uint32_t p;
  const bool operator<(const route_t &route) { return p > route.p; }
};

int32_t main() {
  while (true) {
    uint32_t N, M;
    cin >> N >> M;

    if (N == 0 && M == 0)
      break;

    vector<route_t> routes;
    for (uint32_t i = 0; i < N; i++) {
      uint32_t D, P;
      cin >> D >> P;
      routes.push_back(route_t({D, P}));
    }
    sort(routes.begin(), routes.end());

    uint32_t expect = 0;
    for (uint32_t i = 0; i < routes.size(); i++) {
      route_t route = routes[i];
      if (M > 0) {
        uint32_t used = min(route.dist, M);
        M -= used;
        route.dist -= used;
      }
      expect += route.dist * route.p;
    }
    cout << expect << endl;
  }

  return 0;
}