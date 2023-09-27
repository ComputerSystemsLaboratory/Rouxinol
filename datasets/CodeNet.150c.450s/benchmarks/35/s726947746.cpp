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
#define PB push_back
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
typedef unsigned int uint;
typedef unsigned long long ull;
typedef priority_queue<int> maxpq;
typedef priority_queue< int, vector<int>, greater<int> > minpq;
//const------------------------------------------------------------------------------------------------------------------------
static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int mod = 1000000007;
static const int INF = 1 << 25;

//global-----------------------------------------------------------------------------------------------------------------------
LL a, b, n, ans = 0;
vector<LL> ar;
vector<LL> sum_ar;
//#define DEBUG
//function--------------------------------------------------------------------------------------------------------------------

int main() {
	while ( scanf( "%lld", &n ) && n ) {
		sum_ar.PB( 0 );
		ans = -INF;
		rep( i, n ) {
			scanf( "%lld", &a );
			ans = max( a, ans );
			sum_ar.PB( sum_ar[ i ] + a );
		}
		rep( i, n ) {
			FOR( j, i + 1, n + 1 ) {
#ifdef DEBUG
				debug(i)
				debug(j)
#endif
				ans = max( ans, sum_ar[ j ] - sum_ar[ i ] );
			}
		}
		printf( "%lld\n", ans );
		sum_ar = vector<LL>();
	}
	return 0;
}