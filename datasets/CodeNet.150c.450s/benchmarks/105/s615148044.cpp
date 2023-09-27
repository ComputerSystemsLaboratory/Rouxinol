#pragma GCC optimize("Ofast")
#define _USE_MATH_DEFINES
#include "bits/stdc++.h"

using namespace std;

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

constexpr char newl = '\n';
constexpr double eps = 1e-10;

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define F0R(i,b) FOR(i,0,b)
#define RFO(i,a,b) for (int i = ((b)-1); i >=(a); i--)
#define RF0(i,b) RFO(i,0,b)
#define fi first
#define se second
#define debug(x) cout << #x << ": " << x << '\n';
#define rng(a) a.begin(),a.end()
#define rrng(a) a.rbegin(),a.rend()

template<typename T1, typename T2> inline void chmin(T1& a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1& a, T2 b) { if (a < b) a = b; }
template<class T> void Print(vector<T> v) {
  F0R(i, v.size()) {
    cout << v[i] << ' ';
  }
  cout << newl;
}

#if 1

bool solve() {
  int N;
  cin >> N;
  vector<i64> as(N);
  F0R(i, N) {
    cin >> as[i];
  }
  string S;
  cin >> S;

  while (S.front() == '0') {
    S.erase(S.begin());
    as.erase(as.begin());
    N--;
  }

  // 人1が1回しか行動できないと仮定し、
  // Siが1のときの全てのAiに対し、それ以降に人0が0に出来るか？を求めれば多分OK

  vector<i64> bs;
  RF0(i, N) {

    if (S[i] == '1') {
      sort(rrng(bs));
      int rank = 0;
      RF0(j, 63) {
        if (rank >= bs.size()) break;
        if (!((bs[rank] >> j)&1)) continue;
        F0R(k, bs.size()) {
          if (k == rank) continue;
          if (!((bs[k] >> j) & 1)) continue;
          bs[k] ^= bs[rank];
        }
        rank++;
        sort(rrng(bs));
      }

      i64 n = 0;
      int bi = 0;
      RF0(j, 63) {
        if (!(((as[i] ^ n) >> j) & 1)) continue;
        while (bi < bs.size() && !((bs[bi] >> j) & 1)) bi++;
        if (bi >= bs.size()) break;

        n ^= bs[bi++];
        if (n == as[i]) break;
      }

      if (n != as[i]) return false;
    }
    else {
      bs.push_back(as[i]);
    }
  }
  return true;
}


// INSERT ABOVE HERE
signed main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;
  F0R(i, T) {
    cout << (solve() ? 0: 1) << newl;
  }
}
#endif
