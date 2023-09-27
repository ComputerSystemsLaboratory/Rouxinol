//ライブラリテスト
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
#define NCLR(a) memset((a), -1 ,sizeof(a))
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
static const int mod = 1000000007;
static const int INF = 1 << 25;
static const LL LL_INF = 1152921504606846976;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };


int n, s, g, c;

VVI _map;
//ワーシャルフロイド
void warshall_floyd( VVI &root ) {
	for ( int i = 0; i < root.size(); i++ ) {
		for ( int j = 0; j < root.size(); j++ ) {
			for ( int k = 0; k < root.size(); k++ ) {
				root[ j ][ k ] = root[ k ][ j ] = min( root[ j ][ k ], root[ j ][ i ] + root[ i ][ k ] );
			}
		}
	}
}

//ユーグリッド互除法
int gcd( int n, int m ) {
	if ( m == 0 ) {
		return n;
	}
	return gcd( m, n % m );
}

//素数の配列を作成
void make_prime( VI &pm, int max ) {
	vector<bool> is_pm( max + 1, true );
	is_pm[ 0 ] = is_pm[ 1 ] = false;
	for ( int i = 2; i * i <= max; i += 2 ) {
		if ( is_pm[ i ] ) {
			for ( int j = i * i; j <= max; j += i ) {
				is_pm[ j ] = false;
				if ( i != 2 ) {
					j += i;
				}
			}
			if ( i == 2 ) {
				--i;
			}
		}
	}
	for ( int i = 2; i <= max; i += 2 ) {
		if ( is_pm[ i ] ) {
			pm.push_back( i );
			if ( i == 2 ) {
				--i;
			}
		}
	}
}


int main() {
	while ( ~scanf( "%d", &n ) && n ) {
		_map.resize( 100 );
		for ( int i = 0; i < 100; i++ ) {
			_map[ i ].resize( 100 );
			for ( int j = 0; j < 100; j++ ) {
				if ( i == j ) {
					_map[ i ][ j ] = 0;
				}
				else {
					_map[ i ][ j ] = INF;
				}
			}
		}
		int max_town = 0;
		for ( int i = 0; i < n; i++ ) {
			scanf( "%d %d %d", &s, &g, &c );
			_map[ s ][ g ] = _map[ g ][ s ] = c;
			max_town = max( max_town, max( g, s ) + 1 );
		}
		warshall_floyd( _map );
		int ans_cost = INF, ans_town;
		for ( int i = 0; i < max_town; i++ ) {
			int cost = 0;
			for ( int j = 0; j < max_town; j++ ) {
				cost += _map[ i ][ j ];
			}
			if ( ans_cost > cost ) {
				ans_cost = cost;
				ans_town = i;
			}
		}
		printf( "%d %d\n", ans_town, ans_cost );
	}
	return 0;
}