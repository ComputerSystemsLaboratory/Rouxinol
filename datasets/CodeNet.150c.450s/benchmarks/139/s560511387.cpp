// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <cmath>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <numeric>
// #include <windows.h>
using namespace std;
template<class T> using V = vector<T>;
template<class T> using VV = V<V<T>>;
template<class T> using VVV = V<VV<T>>;
template<class T1, class T2> using P = pair<T1, T2>;
using I = int;
using D = double;
using B = bool;
using C = char;
using S = string;
using LL = long long;
using LD = long double;
using ULL = unsigned long long;
using PII = P<I, I>;
using VPII = V<PII>;
using PLL = P<LL, LL>;
using VPLL = V<PLL>;
using VI = V<I>;
using VVI = VV<I>;
using VLL = V<LL>;
using VVLL = VV<LL>;
using VC = V<C>;
using VVC = VV<C>;
using VS = V<S>;
using VVS = VV<S>;
using VB = V<B>;
using VVB = VV<B>;
#define REP(type, i, n) for (type i = 0; i < (type)(n); ++i)
#define REP2(type, i, m, n) for (type i = (m); i < (type)(n); ++i)
#define REPR(type, i, n) for (type i = (n)-1; i >= 0; --i)
#define REPR2(type, i, m, n) for (type i = (n)-1; i >= (m); --i)
#define REPx(x, a) for(auto x : a)
#define ALL(a) a.begin(), a.end()
#define SORT(a) sort(ALL(a))
#define SORTR(a, type) sort(ALL(a), G<type>())
#define REVERSE(a) reverse(ALL(a))
#define SIZE(a, type) ((type)(a).size())
#define bit_search(bit, n) REP(LL, bit, 1LL<<(n))
#define bit_check(bit, i) ((bit>>(i)) & 1)
#define setpre(n) fixed << setprecision((n))
#define UNIQUE(a) do {SORT(a); (a).erase(unique(ALL(a)), (a).end());} while(0)
#define MAX(a) *max_element(ALL(a))
#define MIN(a) *min_element(ALL(a))
#define bisect_left(a, x) lower_bound(ALL(a), (x)) - a.begin()
#define bisect_right(a, x) upper_bound(ALL(a), (x)) - a.begin()
#define INPUT(a) REPx(&x, a) cin >> x;
#define INPUTP(a) REPx(&x, a) cin >> x.first >> x.second;
#define OUTPUT_PERMUTATION(n) do{VI v(n); iota(ALL(v), 1); do{REPx(x, v) cout << x << " "; ENDL} while(next_permutation(ALL(v)));} while(0);
#define MAKE_PERMUTATION(n, PER) do{VVI a(fact(n), VI(n)); int idx = 0; VI v(n); iota(ALL(v), 1); do{REP(roop, n) a[idx][roop] = v[roop]; idx++;} while(next_permutation(ALL(v))); PER = a;} while(0); // int fact(), VVI PERを宣言しておく、n=10が限界(500 ms)
#define ENDL cout << endl;

const int INF = 2e9;
const LL MOD = 1e9 + 7;

template<class T> using PRIORITY_QUEUE = priority_queue< T, V<T>, greater<T> >;
template<class T> inline bool chmin(T &a, T b){if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){if (a < b) {a = b; return true;} return false;}
template<class T> inline void debug1(V<T> A){REP(int, i, SIZE(A, int)){if (A[i] == INF) cout << "I ";else cout << A[i] << " ";}ENDL}
template<class T> inline void debug2(VV<T> A){REP(int, i, SIZE(A, int)){REP(int, j, SIZE(A[i], int)){if (A[i][j] == INF) cout << "I "; else cout << A[i][j] << " ";}ENDL}}

void bfs(VVI G, VI& visited, int start)
{
  visited[start] = 0;
  queue<int> q;
  q.push(start);
  visited[start] = 0;
  while(!q.empty())
  {
    int u = q.front(); q.pop();
    REPx(v, G[u])
    {
      if (visited[v] != -1) continue;
      visited[v] = u;
      q.push(v);
    }
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  VVI G(n, VI());
  REP(int, i, m)
  {
    int A, B;
    cin >> A >> B;
    A--; B--;
    G[A].push_back(B);
    G[B].push_back(A);
  }
  VI visited(n, -1);
  bfs(G, visited, 0);
  cout << "Yes" << endl;
  REP2(int, i, 1, n) cout << visited[i] + 1 << endl;

  return 0;
}
