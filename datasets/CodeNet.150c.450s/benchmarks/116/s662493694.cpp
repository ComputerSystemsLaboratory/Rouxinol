#include <bits/stdc++.h>
using namespace std;

//{{{
/********************************************************************/
struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);}} fast;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> dqi;

#define reps(i, a, b) for (int i = a; i < b; ++i)
#define rep(i, n) reps(i, 0, n)
#define REPS(i, a, b) reps(i, a, b)
#define REP(i, n) rep(i, n)
#define deps(i, a, b) for (int i = a; i >= b; --i)
#define dep(i, n) deps(i, n, 0)
#define DEPS(i, a, b) deps(i, a, b)
#define DEP(i, n) dep(i, n)

#define pf push_front
#define pb push_back
#define mp make_pair
#define fst first
#define FST fst
#define sec second
#define SEC sec
#define sz(obj) ((int)(obj).size())
#define all(v) (v).begin(), (v).end()
#define ALL(v) all(v)

const int INF = 999999999;
const int MOD = 1e9 + 7;
const int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

vector<string> split(const string &s, char delim) {
  vector<string> elems;
  string item;
  for (char ch: s) {
    if (ch == delim) {
      if (!item.empty()) elems.push_back(item);
      item.clear();
    }
    else item += ch;
  }
  if (!item.empty()) elems.push_back(item);
  return elems;
}

inline bool inside(int y, int x, int H, int W) {return y >= 0 && x >= 0 && y < H && x < W;}
inline int in() {int x; std::cin >> x; return x;}
template <typename T>
void print(std::vector<T>& v, char c = ' ') {
  REP(i, v.size()) {
    if (i != 0) std::cout << c;
    std::cout << v[i];
  }
  std::cout << endl;
}
template <typename T> void print(T x) { std::cout << x << '\n'; }

/****************************************************************/
//}}}

signed main()
{
  int n, m;

  while (cin >> n >> m, n + m){
    int a[n];
    long long int maxsum = 0;
    long long int ans = 0;

    rep(i, n) a[i] = in();
    rep(i, m) maxsum += a[i];
    ans = maxsum;
    reps(i, m, n) {
      ans += a[i] - a[i - m];
      maxsum = max(maxsum, ans);
    }
    print(maxsum);
  }

  return (0);
}