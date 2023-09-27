#include <bits/stdc++.h>
#define REP(i,n) for (long long i=0;i<(n);i++)
#define FOR(i,a,b) for (long long i=(a);i<(b);i++)
#define RREP(i,n) for(long long i=n;i>=0;i--)
#define RFOR(i,a,b) for(long long i=(a);i>(b);i--)
#define dump1d_arr(array) REP(i,array.size()) cerr << #array << "[" << (i) << "] ==> " << (array[i]) << endl
#define dump2d_arr(array) REP(i,array.size()) REP(j,array[i].size()) cerr << #array << "[" << (i) << "]" << "[" << (j) << "] ==> " << (array[i][j]) << endl
#define dump(x)  cerr << #x << " => " << (x) << endl
#define dumpP(p) cerr << "( " << p.first << " , " << p.second << " )" << ends
#define SORT(c) sort((c).begin(),(c).end())
#define MIN(vec) *min_element(vec.begin(), vec.end())
#define MAX(vec) *max_element(vec.begin(), vec.end())
#define UNIQ(vec) vec.erase(unique(vec.begin(), vec.end()),vec.end()) //ソートの必要あり
#define IN(n,m)  (!(m.find(n) == m.end()))
#define ENUM(m) for (auto itr = m.begin(); itr != m.end(); ++itr)
#define dump_MAP(m) for(auto itr = m.begin(); itr != m.end(); ++itr) { cerr << itr->first << " --> "  << itr->second << endl; }
#define FINDL(vec,x) (lower_bound(vec.begin(),vec.end(),x) - vec.begin())
#define FINDU(vec,x) (upper_bound(vec.begin(),vec.end(),x) - vec.begin())
#define ROUND(N) setprecision(N)
#define ROUND_PRINT(N,val) cout << fixed;cout << setprecision(N) << val << endl
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()

using namespace std;
constexpr long double pi = M_PI;
constexpr double eps = 1e-10;
constexpr long mod = 1000000007;
constexpr short shINF = 32767;
constexpr long loINF = 2147483647;
constexpr long long llINF = 9223372036854775807;
typedef long long LL;
typedef vector<LL> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<LL,LL> pr;
typedef vector<pr> VP;
struct Order {
	bool operator() (pr const& a,pr const& b) const {
		return a.first > b.first || ((a.first == b.first) && (a.second > b.second));
	}
};

int main(void) {
	long N,l,r,mid,idx;
	cin >> N;
	VI dp(N,loINF); // dp[i] := 長さiの最小の数
	VI a(N); 
	REP(i,N) cin >> a[i];
	REP(i,N) {
		idx = FINDL(dp,a[i]);
		dp[idx] = min(dp[idx],a[i]);
	}

	REP(i,N) {
		if (dp[i] == loINF) {
			cout << i << endl;
			break;
		}
		if (i == (N-1)) {
			cout << N << endl;
		}

	}
}

