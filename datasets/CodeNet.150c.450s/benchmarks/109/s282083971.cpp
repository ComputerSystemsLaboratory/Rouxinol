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

vector<string> split(const string &str, char sep){
    vector<string> v;
    stringstream ss(str);
    string buffer;
    while( getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}

int main(void){
    int n;
    cin >> n;
    while(n != 0){
        VI imos(86402,0);
        REP(i,n){
            string a,b; cin >> a >> b;
            auto va = split(a,':');
            auto vb = split(b,':');
            int s = 3600*toInt(va[0]) + 60*toInt(va[1]) + toInt(va[2]);
            int t = 3600*toInt(vb[0]) + 60*toInt(vb[1]) + toInt(vb[2]);
            imos[s]++; imos[t]--;
        }
        int ans = 0, now = 0;
        REP(i,86402){
            now += imos[i];
            chmax(ans, now);
        }
        cout << ans << en;
        cin >> n;
    }
    return 0;
}
