// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define forever for (;;)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
typedef std::pair<int, int> pii;
typedef std::vector<int> vi;
typedef std::vector<double> vd;
typedef std::vector<std::string> vs;
typedef std::vector<pii> vpii;
typedef std::vector<vi> vvi;
typedef std::vector<vpii> vvpii;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &v) { rep(i,v.size()) is >> v[i]; return is; }
template<typename A, typename B> std::istream &operator>>(std::istream &is, std::pair<A, B> &p) { is >> p.first; is >> p.second; return is; }
using namespace std;
// clang-format on

main {
  vs v;
  string s;
  while (cin >> s) transform(all(s), s.begin(), ::tolower), v.push_back(s);
  map<string, int> m;
  int freq = 0, len = 0;
  string topFreq, topLen;
  rep(i, v.size()) {
    if (cmax(freq, ++m[v[i]])) topFreq = v[i];
    if (cmax(len, v[i].size())) topLen = v[i];
  }
  cout << topFreq << ' ' << topLen << endl;
}