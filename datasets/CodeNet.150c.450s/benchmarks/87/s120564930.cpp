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

int ans,H,a[10][5];

bool check(void){
    bool res = false;
    REP(i,H){
        RFOR(j,6,3){
            REP(k,5-j+1){
                bool flag = true;
                REP(l,j-1){
                    if(a[i][k]==0 || a[i][k+l+1]==0){
                        flag = false;
                        break;
                    }
                    if(a[i][k+l+1] != a[i][k]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    res = true;
                    ans += a[i][k]*j;
                    REP(l,j) a[i][k+l] = 0;
                }
            }
        }
    }
    return res;
}

void seiri(void){
    RREP(i,H){
        REP(j,5){
            if(a[i][j] == 0){
                int h = i-1;
                while(h>0 && a[h][j]==0) h--;
                if(h>=0 && a[h][j] != 0){
                    a[i][j] = a[h][j];
                    a[h][j] = 0;
                }
            }
        }
    }
}

int main(void){
    cin >> H;
    while(H != 0){
        ans = 0;
        REP(i,H)REP(j,5) cin >> a[i][j];
        while(check()) seiri();
        cout << ans << en;
        cin >> H;
    }
    return 0;
}
