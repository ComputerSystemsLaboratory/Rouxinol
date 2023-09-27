#include <bits/stdc++.h>
using namespace std;
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
static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int mod = 10007;
static const int INF = 1 << 25;
static const LL LL_INF = 1152921504606846976;
static const int dx[] = { 1, -1, 0, 0 };
static const int dy[] = { 0, 0, 1, -1 };

string str;
int n, r, p, c;

int gcd( int m, int n ) {
	if ( n == 0 ) return m;
	return gcd( n, m % n );
}


int main() {
	while ( ~scanf("%d %d", &n, &r) && n && r ) {
		str.resize( n + 2 );
		for ( int i = 0; i < n + 2; i++ ) {
			str[ i ] = n - ( i );
		}
		for ( int i = 0; i < r; i++ ) {
			scanf( "%d %d", &p, &c );
			str = str.substr( p - 1, c ) + str.substr( 0, p - 1 ) + str.substr( p + c - 1, str.size() - ( p + c - 1 ) );
		}
		printf( "%d\n", str[ 0 ] );
		str.clear();
	}
	return 0;
}