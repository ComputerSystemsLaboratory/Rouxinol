#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(X, S, E) for (int(X) = (S); (X) < (E); ++(X))
#define rrep(X, S, E) for (int(X) = (E)-1; (X) >= (S); --(X))
#define itrep(X, Y) for (auto(X) = (Y).begin(); (X) != (Y).end(); (X)++)
#define all(X) (X).begin(), (X).end()
#define sortDecending(X) sort(all(X), greater<ll>()) //降順
#define sortAscending(X) sort(all(X))                //昇順
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define print(x) cout << x << endl
#define printDouble(x) cout << fixed << setprecision(13) << x << endl
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef priority_queue<ll, vl> decendingQueue;              //降順
typedef priority_queue<ll, vl, greater<ll>> ascendingQueue; //昇順
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const ll INT_INF = 1e9;
const ll LL_INF = 1e18;

// http://hos.ac/slides/20140319_bit.pdf
class BinaryIndexedTree {
  int N;
  vl bit;

public:
  BinaryIndexedTree(int N) {
    this->N = N;
    bit = vl(N);
  }

  // v[i] += w;
  void add(int i, int w) {
    for (int x = i; x < N; x |= x + 1) {
      bit[x] += w;
    }
  }

  // v[0] + ... + v[a-1]
  int sum(int a) {
    int ret = 0;
    for (int x = a - 1; x >= 0; x = (x & (x + 1)) - 1) {
      ret += bit[x];
    }
    return ret;
  }
};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D&lang=jp
int main() {
  int N;
  cin >> N;

  vl a(N);
  rep(i, 0, N) { cin >> a[i]; }

  vector<pair<ll, int>> b;
  rep(i, 0, N) { b.push_back(mp(a[i], i)); }
  sortAscending(b);

  rep(i, 0, N) { a[b[i].second] = i; }

  BinaryIndexedTree bit(N);
  ll ans = 0;
  rep(i, 0, N) {
    bit.add(a[i], 1);

    // 自分より大きい値の数
    ans += i - bit.sum(a[i]);
  }

  print(ans);
  return 0;
}

