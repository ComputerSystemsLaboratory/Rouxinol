#include <bits/stdc++.h>
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const double EPS = 1e-10;
const double PI  = acos(-1.0);

#define CLR(a) memset((a), 0 ,sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
  int n;
  cin >> n;
  
  REP(i, n) {
    double x[4], y[4];
    REP(i, 4) cin >> x[i] >> y[i];

    double x1, x2, y1, y2;
    x1 = x[0] - x[1];
    y1 = y[0] - y[1];
    x2 = x[2] - x[3];
    y2 = y[2] - y[3];
    
    if(abs(x1 * y2 - x2 * y1) < EPS) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}