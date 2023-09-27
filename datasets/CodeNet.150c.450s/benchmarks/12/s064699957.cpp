#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP0(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REP1(i,n) for(int i=1, i##_len=(n); i<=i##_len; ++i)
#define RREP0(i,n) for(int i=n-1; i>=0; --i)
#define RREP1(i,n) for(int i=n; i>=1; --i)

#define SORT(c) sort((c).begin(),(c).end())
#define whole(f,x,...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define CLR(a) memset((a), 0 ,sizeof(a))

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

typedef long long LL;
typedef vector<int> Vi;
typedef vector<Vi> VVi;
typedef vector<string> Vs;
typedef pair<int, int> Pii;

const int INTINF = 2147483647;
const LL LLINF = 9223372036854775807;
const double EPS = 1e-10;
const double PI  = acos(-1.0);

int gcd(int a,int b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(int argc, char const *argv[]) {
  cin.tie(0); ios::sync_with_stdio(false);
  int H,tmp; std::cin >> H;
  Vi h; h.reserve(H);
  REP0(i,H){ std::cin >> tmp; h.PB(tmp); }

  REP1(i,H){
    std::cout << "node " << i << ": key = " << h[i-1] << ", ";
    if (i!=1) std::cout << "parent key = " << h[i/2-1] << ", ";
    if (i*2<=H) std::cout << "left key = " << h[i*2-1] << ", ";
    if (i*2+1<=H) std::cout << "right key = " << h[i*2] << ", ";
    std::cout << '\n';
  }

  return 0;
}

