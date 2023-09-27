#include <algorithm>
#include <vector>
#include <cfloat>
#include <string>
#include <cmath>
#include <set>
#include <cstdlib>
#include <map>
#include <ctime>
#include <iomanip>
#include <functional>
#include <deque>
#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <stack>
#include <climits>
#include <sys/time.h>
#include <cctype>

using namespace std;

typedef long long ll;

int bias = 300;
int main() {
  int n;
  int dx[] = {-1, 0, 1, 0};
  int dy[] = {0, 1, 0, -1};
  while(true) {
    cin >> n;
    if (n == 0) break;

    pair<int, int> nd[n-1];
    for (int i = 0; i < n-1; i++) {
      cin >> nd[i].first >> nd[i].second;
    }
    // sort(nd, nd+n-1);

    int px[n], py[n];
    px[0] = bias;
    py[0] = bias;
    for (int i = 1; i < n; i++) {
      px[i] = px[nd[i-1].first]+dx[nd[i-1].second];
      py[i] = py[nd[i-1].first]+dy[nd[i-1].second];
    }

    int min_x, min_y, max_x, max_y;
    min_x = min_y = 1000;
    max_x = max_y = -1000;
    for (int i = 0; i < n; i++) {
      min_x = min(min_x, px[i]);
      min_y = min(min_y, py[i]);
      max_x = max(max_x, px[i]);
      max_y = max(max_y, py[i]);
    }

    std::cout << max_x-min_x+1 << " " << max_y-min_y+1 << std::endl;
  }
}