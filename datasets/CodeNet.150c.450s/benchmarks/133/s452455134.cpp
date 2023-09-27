#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define repd(i,a,b) for (int i=a;i<int(b);i++)
#define rep(i,n) repd(i,0,n)
#define VARNAME(v) #v
using P = pair<int,int>;
constexpr  int MOD = 1000000007;
// constexpr  int MOD = 998244353;
constexpr ll INF = 1e16;
#pragma region tmp
constexpr double EPS = 1e-10;
constexpr double PI = 3.141592653589793238462;
const string endn = "\n";
const string abc="abcdefghijklmnopqrstuvwxyz";
const string ABC="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
template<class T1, class T2>ostream &operator<<(ostream &out, const pair<T1, T2> &o){out << "(" << o.first << ", " << o.second << ")";return out;}
template<class T> ostream &operator<<(ostream &out, const vector<T> &o){for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (itr+1 != o.end() ? " " : "");return out;}
template<class T> ostream &operator<<(ostream &out, const deque<T> &o){for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (itr+1 != o.end() ? " " : "");return out;}
template<class T> ostream &operator<<(ostream &out, const set<T> &o){out << "{";for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (next(itr,1) != o.end() ? "," : "");out << "}";return out;}
template<class T> ostream &operator<<(ostream &out, const multiset<T> &o){out << "{";for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (next(itr,1) != o.end() ? "," : "");out << "}";return out;}
template<class T, class U> ostream &operator<<(ostream &out, const map<T, U> &o){out << "{";for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (next(itr,1) != o.end() ? " " : "");out << "}";return out;}
template<class T, class U> ostream &operator<<(ostream &out, const multimap<T, U> &o){out << "{";for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (next(itr,1) != o.end() ? " " : "");out << "}";return out;}
template<class T> ostream &operator<<(ostream &out, queue<T> o){while(!o.empty())out << o.front() << (o.size() > 0 ? " " : ""),o.pop();return out;}
template<class T, class U> ostream &operator<<(ostream &out, priority_queue<T, vector<T>, U> o){while(!o.empty())out << o.top() << (o.size() > 0 ? " " : ""),o.pop();return out;}
template<class T> ostream &operator<<(ostream &out, stack<T> o){while(!o.empty())out << o.top() << (o.size() > 0 ? " " : ""),o.pop();return out;}
template<class T> inline bool chmin(T& a, T b){if(a>=b){a = b;return 1;}return 0;}
template<class T> inline bool chmax(T& a, T b){if(a<=b){a = b;return 1;}return 0;}
template<class T> inline bool chmin(T& a, initializer_list<T> b){T c = min(b);if(a>c){a = c;return 1;}return 0;}
template<class T> inline bool chmax(T& a, initializer_list<T> b){T c = max(b);if(a<c){a = c;return 1;}return 0;}
inline int mrep(int& a, int M=MOD){a%=M;return a=(a<0 ? a+M : a);}
inline int add(int& a, int b, int M=MOD){return a=(mrep(a,M)+mrep(b,M))%M;}
inline int mul(int& a, int b, int M=MOD){return a=(mrep(a,M)*mrep(b,M))%M;}
inline int add(int& a, initializer_list<int> b, int M=MOD){return a=(mrep(a,M)+accumulate(b.begin(), b.end(), (int)0, [&M](int acc, int i){return (acc+mrep(i,M))%M;}))%M;}
inline int mul(int& a, initializer_list<int> b, int M=MOD){return a=(mrep(a,M)*accumulate(b.begin(), b.end(), (int)1, [&M](int acc, int i){return (acc*mrep(i,M))%M;}))%M;}
inline int modpow(int b, int e, int M=MOD){int ret=1;while(e > 0){if(e%2)mul(ret,b,M);mul(b,b,M);e /= 2;};return ret;}
inline int modinv(int a, int M=MOD){int b=M,u=1,v=0;while(b){int t=a/b;a-=t*b;swap(a,b);u-=t*v;swap(u,v);}return mrep(u,M);}
template<class T> inline void print(T a){cout << a << endl;}
template<class T> inline void print(vector<T> a, int n){chmin(n,int(a.size()));rep(i,n)cout << a[i] << (i != n-1 ? " " : "\n");}
template<class T, size_t SIZE> inline void print(T (&a)[SIZE], int n=SIZE){chmin(n,int(SIZE));rep(i,n)cout << a[i] << (i != n-1 ? " ":"\n");}
inline string yesno(bool b){return (b ? "Yes" : "No");}
#pragma #endregion tmp

///////////////////////___divisor___////////////////////
int divisor(int n){
  int ret;
  for(int i = 1;i*i <= n;i++){
    if(n % i == 0){
      ret++;
      if(n/i != i)ret++;
    }
  }
  return ret;
}

signed main() {
  int d;cin>>d;
  vector<int> c(26);
  vector<vector<int>> s(d, vector<int>(26));
  rep(i,26)cin>>c[i];
  rep(i,d)rep(j,26)cin>>s[i][j];
  vector<int> last(26, 0);
  int a = 0;
  rep(i,d){
    int t;cin>>t;t--;
    a += s[i][t];
    last[t] = i+1;
    rep(j,26)a -= c[j]*(i+1 - last[j]);
    cout << a << endl;
  }
}
