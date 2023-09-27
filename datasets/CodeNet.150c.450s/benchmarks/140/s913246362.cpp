#include <bits/stdc++.h>
// #include "ane.cpp"

const int INF  = 1e9;
const long long INFLL = 1e18;
const int NMAX = 100005;
const int MMAX = 100005;
const int KMAX = 1005;
const int MOD  = 1e9 + 7;
using namespace std;

// comment to disable debug functions
#define DEBUG

// frequently used macros

#if __cplusplus >= 201103L
#define ALL(v) begin(v),end(v)
#define SORT(v) sort(begin(v), end(v))
#define FIND(v,x) find(begin(v), end(v), (x))
#else
#define ALL(v) (v).begin(),(v).end()
#define SORT(v) sort(v.begin(), v.end())
#define FIND(v,x) find(v.begin(), v.end(), (x))
#endif

#define MEMNEXT(from, to) do{ memmove((to), (from), sizeof(from)); \
memset((from), 0, sizeof(from)); } while(0)
#ifdef DEBUG
#define DUMP(x) do{ std::cerr << (#x) << ": " << x << std::endl; }while(0)
#else
#define DUMP(x) do{}while(0)
#endif

// frequent used aliases
typedef long long ll;
typedef pair<int, int> p;
typedef pair<ll, int> pl;
typedef pair<ll, ll> pll;
typedef vector<int> vec;
typedef vector<ll> vecll;
typedef vector<vec> mat;
typedef vector<vecll> matll;

// frequently used constants
static const int di[] = {-1, 0, 1, -1, 1, -1, 0, 1};
static const int dj[] = {-1, -1, -1, 0, 0, 1, 1, 1};

// frequently used structs
struct edge{
  int to,cost;
};

// printf for debug
#ifndef DEBUG
void debug(const char* format, ...){}
#else
void debug(const char* format, ...){
  va_list arg;
  va_start(arg, format);
  vprintf(format, arg);
  va_end(arg);
}
#endif

// dump vector
#ifdef DEBUG
#define DUMPV(v, c) do{       \
  printf("%s: ", #v);         \
  for (int i = 0; i < (c); ++i) \
  {                           \
  cout << (v)[i] << " ";      \
  }                           \
  cout << endl;               \
} while(0)
#else
#define DUMPV(v,c)
#endif

// std::fill of multi dimensions
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
  std::fill( (T*)array, (T*)(array+N), val );
}

// binary search
ll BSearch(ll _begin, ll _end, bool (*f)(int)){
  ll mid;
  while(_end - _begin > 1LL) {
  mid = (_begin + _end) / 2LL;
  if(f(mid)) {
    debug("BSearch: f(%d) == true\n", mid);
    _end = mid;
  }
  else
  {
    debug("BSearch: f(%d) == false\n", mid);
    _begin = mid;
  }
  }
  return _end;
}


ll N,M,K,A,B,C,D;
int dp[NMAX] = {};
std::vector<edge> G[NMAX];
edge E[MMAX];

ll ans = 0;

void solve(){
  // main algorithm
  priority_queue<p, vector<p>, greater<p> > que;
  set<int> st;
  que.push(p{0, 0});
  while(!que.empty()) {
    ll cc = que.top().first;
    int i = que.top().second;
    que.pop();
    if(st.count(i)) continue;
    // cout << cc << " " << i << endl;
    ans += cc;
    st.insert(i);
    for(auto&& e : G[i]) {
      if(!st.count(e.to)) que.push(p(e.cost, e.to));
    }
  }
}
void debug(){
  // output debug information

}
void answer(){
  // output answer
  printf("%lld\n", ans);
}
int main(int argc, char const *argv[])
{
  // operate inputs

  // Fill(dp, -1);
  scanf("%lld%lld", &N,&M);
  for (int i = 0; i < M; ++i)
  {
    int f,t,c;
    scanf("%d%d%d", &f, &t, &c);
    G[f].push_back(edge{t, c});
    G[t].push_back(edge{f, c});
  }
  solve();
  #ifdef DEBUG
  debug();
  #endif
  answer();

  return 0;
}