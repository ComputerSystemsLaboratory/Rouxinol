#include <bits/stdc++.h>
using namespace std;

const double pi  = 2 * acos(0.0);
const double eps = 1e-8;

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef int Cost;
struct Edge {
  int src, dst; Cost cost;
  Edge(int s, int d, Cost c) : src(s), dst(d), cost(c) {}
};
typedef vector<Edge>  Edges;
typedef vector<Edges> Graph;
typedef vector<Cost>  Array;
typedef vector<Array> Matrix;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

#define MAX_N 1000000
int memo[MAX_N+1];
int memo_odd[MAX_N+1];

int plc(int n) { return n * (n + 1) * (n + 2) / 6; }

void create_table() {
  fill(memo, memo+MAX_N+1, 1<<30);
  fill(memo_odd, memo_odd+MAX_N+1, 1<<30);
  for (int i = 1; plc(i) <= MAX_N+1; i++) {
    memo[plc(i)] = 1;
    if (plc(i) % 2 == 0) continue;
    memo_odd[plc(i)] = 1;
  }
  for (int i = 1; i <= MAX_N; i++) {
    for (int j = 1; plc(j) <= i; j++) {
      memo[i] = min(memo[i], memo[i-plc(j)] + 1);
      if (plc(j) % 2 == 0) continue;
      memo_odd[i] = min(memo_odd[i], memo_odd[i-plc(j)] + 1);
    }
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n;
  create_table();
  while (cin >> n, n) {
    cout << memo[n] << " " << memo_odd[n] << endl;
  }
  return 0;
}