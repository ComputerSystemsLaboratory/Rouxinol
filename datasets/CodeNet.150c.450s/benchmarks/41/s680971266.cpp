#include <bits/stdc++.h>
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> P;
typedef tuple<int,int,int> tpl;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SORT(c) sort((c).begin(),(c).end())
#define REVERSE(c) reverse((c).begin(),(c).end())
#define LB(a,x) lower_bound((a).begin(), (a).end(), x) - (a).begin()
#define UB(a,x) upper_bound((a).begin(), (a).end(), x) - (a).begin()

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define RFOR(i,a,b) for(int i=(a)-1;i>=(b);--i)
#define RREP(i,n) RFOR(i,n,0)

#define en "\n"

const double EPS = 1e-9;
const double PI  = acos(-1.0);
const int INT_INF = 2147483647;
const long long LL_INF = 1LL<<60;
const long long MOD = 1000000007;

#define CLR(a) memset((a), 0, sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main(void){
    ll N,M; cin >> N >> M;
    ll dist[N][N]; REP(i,N)REP(j,N) dist[i][j] = LL_INF; REP(i,N) dist[i][i] = 0;
    REP(i,M){
        ll s,t,d; cin >> s >> t >> d;
        dist[s][t] = d;
    }
    REP(k,N)REP(i,N)REP(j,N) chmin(dist[i][j], dist[i][k] + dist[k][j]);
    ll dist2[N][N]; REP(i,N)REP(j,N) dist2[i][j] = dist[i][j];
    REP(k,N)REP(i,N)REP(j,N) chmin(dist2[i][j], dist2[i][k] + dist2[k][j]);

    bool flag = false;
    REP(i,N)REP(j,N){
        if(dist[i][j] != dist2[i][j]){
            flag = true;
        }
    }

    if(flag){
        cout << "NEGATIVE CYCLE" << en;
        return 0;
    }

    REP(i,N){
        REP(j,N-1){
            if(dist[i][j] > 1e15) cout << "INF" << " ";
            else cout << dist[i][j] << " ";
        }
        if(dist[i][N-1] > 1e15) cout << "INF";
        else cout << dist[i][N-1];
        cout << en;
    }
    return 0;
}
