//include----------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
//using namespace--------------------------------------------------------------------------------------------------------------
using namespace std;

//define-----------------------------------------------------------------------------------------------------------------------
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define FOR(i, s, n) for(int i = s; i < (int)n; i++)
#define per(i, n) for(int i = n; i >= 0; i--)
#define ROF(i, s, n) for(int i = s; i >= (int)n; i--)
#define FORIT(i, A) for (auto i : A)
#define PRINT(x) cout << (x) << "\n"
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define MP make_pair
#define EACH(i, n) for (__typeof((n).begin()) i = (n).begin(); i != (n).end(); ++i)
#define SZ(a) int((a).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define dump(x) cout << #x << " = " << (x) << "\n";
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << "\n";
#define sq(n) (n) * (n)

//typedef----------------------------------------------------------------------------------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef priority_queue<int> maxpq;
typedef priority_queue< int, vector<int>, greater<int> > minpq;
//const------------------------------------------------------------------------------------------------------------------------
static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int mod = 1000000007;
static const int INF = 1 << 25;
static const LL LL_INF = 1152921504606846976;
//global-----------------------------------------------------------------------------------------------------------------------
int n, s;
VI a;
LL dp[ 100 ][ 21 ];

LL solve( int now, int f ) {
	if ( dp[ now ][ f ] >= 0 ) {
		return dp[ now ][ f ];
	}
	ull res = 0;
	if ( now == n - 1 ) {
		res = s == f;
	}
	else {
		if ( f + a[ now ] <= 20 ) {
			res += solve( now + 1, f + a[ now ] );
		}
		if ( f - a[ now ] >= 0 ) {
			res += solve( now + 1, f - a[ now ] );
		}
	}
	return dp[ now ][ f ] = res;
}
int main() {
	scanf( "%d", &n );
	a.resize( n - 1 );
	for ( int i = 0; i < n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	scanf( "%d", &s );
	memset( dp, -1, sizeof( dp ) );
	printf( "%lld\n", solve( 1, a[ 0 ] ) );
	return 0;
}