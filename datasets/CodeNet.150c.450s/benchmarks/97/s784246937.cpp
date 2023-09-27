#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <cassert>
#include <iostream>
using namespace std;
typedef long long ll;

#define REP(i,n) for (int i=0;i<(int)(n);++i)
#define FOR(i,k,n) for (int i=k;i<(int)(n);++i)
#define FOREQ(i,k,n) for (int i=k;i<=(int)(n);++i)

#define MEMSET(v,h) memset((v),(h),sizeof(v))

int main() {
    int n;
    while (scanf("%d", &n), n) {
      map<int, pair<int, int> > open;
      open.insert(make_pair(0, make_pair(0, 0)));
      int minx = 0;
      int maxx = 0;
      int miny = 0;
      int maxy = 0;
      REP(i, n - 1) {
          int nindex = i + 1;
          int index, dir;
          scanf("%d %d", &index, &dir);
          const int dx[4] = { -1, 0, 1, 0 };
          const int dy[4] = { 0, 1, 0, -1 };
          int x = open[index].first;
          int y = open[index].second;
          int nx = x + dx[dir];
          int ny = y + dy[dir];
          open[nindex] = make_pair(nx, ny);
          minx = min(minx, nx);
          maxx = max(maxx, nx);
          miny = min(miny, ny);
          maxy = max(maxy, ny);
      }
      printf("%d %d\n", maxx - minx + 1, maxy - miny + 1);
    }
}