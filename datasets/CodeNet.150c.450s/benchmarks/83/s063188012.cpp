#include <bits/stdc++.h> // {{{

#define GET_MACRO(a, b, c, d, NAME, ...) NAME
#define REP(...) GET_MACRO(__VA_ARGS__, REP4, REP3, REP2)(__VA_ARGS__)
#define REP2(i, a) REP3(i, 0, a)
#define REP3(i, a, b) REP4(i, a, b, 1)
#define REP4(i, a, b, s) for (int i = (a); i < (int)(b); i += (s))
#define REPR(...) GET_MACRO(__VA_ARGS__, REPR4, REPR3, REPR2)(__VA_ARGS__)
#define REPR2(i, a) REPR3(i, 0, a)
#define REPR3(i, a, b) REPR4(i, a, b, 1)
#define REPR4(i, a, b, s) for (int i = (b)-1; i >= (int)(a); i -= (s))
#define ALL(c) (c).begin(), (c).end()
#define DUMP(x) (std::cerr << #x << ':' << ' ' << x << '\n')
#define TMPL_T template <typename T>
#define TMPL_TU template <typename T, typename U>
#define mut auto
#define let const auto

using Int = long long;
// clang-format off
namespace extio {
std::string delimiter=" ",pdelimiter=" ";
std::string bracket_b="",bracket_e="";
void chdelim(const std::string&s){delimiter=s;}
void chpdelim(const std::string&s){pdelimiter=s;}
void chbracket(const std::string&b,const std::string&e){bracket_b=b,bracket_e=e;}
TMPL_T  void pcont(std::ostream&os,const T&x){int c=0;for(const auto&a:x){if(c++)os<<delimiter;os<<a;}}
TMPL_TU void ppair(std::ostream&os,const std::pair<T,U>&p){os<<bracket_b<<p.first<<pdelimiter<<p.second<<bracket_e;}
}
namespace std {
TMPL_T ostream& operator<<(ostream&os,const vector<T>&x){extio::pcont(os,x);return os;}
TMPL_T ostream& operator<<(ostream&os,const set<T>&x){extio::pcont(os,x);return os;}
TMPL_T ostream& operator<<(ostream&os,const multiset<T>&x){extio::pcont(os,x);return os;}
TMPL_T ostream& operator<<(ostream&os,const deque<T>&x){extio::pcont(os,x);return os;}
TMPL_TU ostream& operator<<(ostream&os,const map<T,U>&x){extio::pcont(os,x);return os;}
TMPL_TU ostream& operator<<(ostream&os,const pair<T,U>&x){extio::ppair(os,x);return os;}
}
TMPL_TU inline bool chmax(T&x,U a){return x<a&&(x=a,1);}
TMPL_TU inline bool chmin(T&x,U a){return a<x&&(x=a,1);}

inline int in(){int x;std::cin>>x;return x;}

struct Initializer_ {
  Initializer_(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    std::cout << std::setprecision(10);
    std::cerr << std::setprecision(10);
  }
} precalc;
// clang-format on
// }}}

using namespace std;

int dp[20200];

signed main() {
  int N = in(), W = in();
  REP(i, N) {
    int v = in(), w = in();
    REPR(j, 0, W) chmax(dp[j + w], dp[j] + v);
  }
  cout << max_element(dp, dp + W + 1)[0] << endl;

  return 0;
}