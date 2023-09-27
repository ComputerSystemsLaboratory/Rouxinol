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
static const int dx[] = { 1, -1, 0, 0,  1, -1,  1, -1 };
static const int dy[] = { 0, 0, 1, -1 , 1,  1, -1, -1 };
static const char Move[] = { 'E', 'W', 'N', 'S' };

int n, m, x, y, many, a, b;
char d;
vector<PII> gems;

int gcd( int m, int n ) {
	if ( n == 0 ) return m;
	return gcd( n, m % n );
}

int main() {
	while ( !!(cin >> n) && n ) {
		gems.resize( n );
		for ( int i = 0; i < n; i++ ) {
			cin >> a >> b;
			gems[ i ] = make_pair( a, b );
		}
		x = y = 10;
		cin >> m;
		for ( int i = 0; i < m; i++ ) {
			cin >> d >> many;
			for ( int j = 0; j < 4; j++ ) {
				if ( d == Move[ j ] ) {
					for ( int k = 0; k < many; k++ ) {
						x += dx[ j ];
						y += dy[ j ];
						for ( int l = 0; l < gems.size(); l++ ) {
							if ( gems[ l ] == PII( x, y ) ) {
								swap( gems[ l ], gems[ gems.size() - 1 ] );
								gems.pop_back();
							}
						}
					}
				}
			}
		}
		if ( gems.size() ) {
			printf( "No\n" );
		}
		else {
			printf( "Yes\n" );
		}
	}
	return 0;
}