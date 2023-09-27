#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <complex>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include <assert.h>
#include <array>
#include <cstdio>
#include <cstring>
#include <random>
#include <functional>
#include <numeric>
#include <bitset>

using namespace std;

void main_(); signed main() {
  cin.tie(0); ios::sync_with_stdio(false);
  main_(); return 0;
}

#define REP(i,a,b) for(int i=a;i<(int)b;i++)
#define rep(i,n) REP(i,0,n)
#define all(c) (c).begin(), (c).end()
#define zero(a) memset(a, 0, sizeof a)
#define minus(a) memset(a, -1, sizeof a)
template<class T1, class T2> inline bool minimize(T1 &a, T2 b) { return b < a && (a = b, 1); }
template<class T1, class T2> inline bool maximize(T1 &a, T2 b) { return a < b && (a = b, 1); }

typedef long long ll;
int const inf = 1<<29;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
template<class T> constexpr bool in_range(T y, T x, T H, T W) { return 0<=y&&y<H&&0<=x&&x<W; }

void main_() {

  for(int H, W; cin >> H >> W && (H || W);) {
    vector<string> F(H);
    rep(i, H) cin >> F[i];
    vector<vector<bool>> vis(H, vector<bool>(W));
    std::function<void(int, int, char)> dfs = [&](int y, int x, char ch) {
      rep(i, 4) {
        int ny = y+dy[i], nx = x+dx[i];
        if(!in_range(ny, nx, H, W)) { continue; }
        if(F[ny][nx] != ch) { continue; }
        if(vis[ny][nx]) { continue; }
        vis[ny][nx] = 1;
        dfs(ny, nx, ch);
      }
    };

    int ans = 0;
    rep(i, H) rep(j, W) {
      if(!vis[i][j]) {
        vis[i][j] = 1;
        dfs(i, j, F[i][j]);
        ans ++;
      }
    }
    cout << ans << endl;
  }

}