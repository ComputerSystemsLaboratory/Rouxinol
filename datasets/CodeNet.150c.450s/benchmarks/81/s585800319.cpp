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
typedef complex<double> P;
static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int mod = 1000000007;
static const int INF = 1 << 29;
static const LL LL_INF = 1ll << 60;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };

#ifdef WIN32
#define dump(x) cout << #x << " = " << (x) << "\n"
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << "\n"
#else
#define dump(x)
#define debug(x)
#endif

struct edge {
	int to;
	int cost;
	edge( int t, int c ) {
		to = t;
		cost = c;
	}
};
int n;
int r[ 10 ][ 10 ];
vector<edge> e[ 10 ];

void dijkstra( int s ) {
	fill( r[ s ], r[ s ] + 10, INF );
	priority_queue< PII, vector<PII>, greater<PII> > que;
	que.push( PII( s, 0 ) );
	while ( que.size() ) {
		int to = que.top().first;
		int cost = que.top().second;
		que.pop();
		if ( r[ s ][ to ] < cost ) {
			continue;
		}
		r[ s ][ to ] = cost;
		for ( int i = 0; i < e[ to ].size(); i++ ) {
			if ( r[ s ][ e[ to ][ i ].to ] > cost + e[ to ][ i ].cost ) {
				r[ s ][ e[ to ][ i ].to ] = r[ e[ to ][ i ].to ][ s ] = cost + e[ to ][ i ].cost;
				que.push( PII( e[ to ][ i ].to, cost + e[ to ][ i ].cost ) );
			}
		}
	}
}

int main() {
#ifdef WIN32
	printf( "Debug Mode\n" );
#endif
	while ( ~scanf( "%d", &n ) && n ) {
		for ( int i = 0; i < 10; i++ ) {
			e[ i ].clear();
		}
		int m = 0;;
		for ( int i = 0; i < n; i++ ) {
			int s, g, c;
			scanf( "%d %d %d", &s, &g, &c );
			m = max( max( s, g ), m );
			dump( m );
			e[ s ].push_back( edge( g, c ) );
			e[ g ].push_back( edge( s, c ) );
		}
		for ( int i = 0; i < 10; i++ ) {
			if ( e[ i ].size() ) {
				m = i;
			}
			else {
				break;
			}
		}
		int ans_cost = INF;
		int ans_t = 0;
		for ( int i = 0; i <= m; i++ ) {
			dijkstra( i );
		}
		for ( int i = 0; i <= m; i++ ) {
			int cost = 0;
			for ( int j = 0; j <= m; j++ ) {
				cost += r[ i ][ j ];
			}
			if ( ans_cost > cost ) {
				ans_cost = cost;
				ans_t = i;
			}
		}
		printf( "%d %d\n", ans_t, ans_cost );
	}
	return 0;
}