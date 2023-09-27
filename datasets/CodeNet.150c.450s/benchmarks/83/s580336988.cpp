#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>
#include <climits>
#include <functional>

#define REP(i,n) for(int i = 0;i < n;i++)
#define pyfor(j,s,n,i) for(int j = s;j < n;j += i)

using namespace std;
typedef long long ll;
const int INF = INT_MAX;

const int max_n = 100;
const int max_w = 10000;
int pack_hist[max_n + 1][max_w + 1];
int v_s[max_n];
int w_s[max_n];
int N, W;

int pack(int ni, int wl) {
  if (ni >= N) return 0;
  if (pack_hist[ni][wl] != -1) return pack_hist[ni][wl];
  int ans;
  if (wl >= w_s[ni]){
    ans = max(v_s[ni] + pack(ni + 1, wl - w_s[ni]), pack(ni + 1, wl));
  } else {
    ans = pack(ni + 1, wl);
  }
  pack_hist[ni][wl] = ans;
  // cerr << "pack(" << ni << " " << wl << "): " << ans << "\n";
  return ans;
}



int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N >> W;

  REP(i, N) {
    cin >> v_s[i] >> w_s[i];
  }

  REP(i, N + 1) REP(j, W + 1) pack_hist[i][j] = -1;

  cout << pack(0, W) << "\n";
  return 0;
}