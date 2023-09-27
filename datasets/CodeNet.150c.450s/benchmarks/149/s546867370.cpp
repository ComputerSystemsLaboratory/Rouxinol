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

struct Union_Find {
	vector<int> par;
	vector<int> rank;

	//初期化
	void init( int n ) {
		par.resize( n );
		rank.resize( n );
		for ( int i = 0; i < n; ++i ) {
			par[ i ] = i;
			rank[ i ] = 0;
		}
	}

	//木の根を探す
	int find( int s ) {
		if ( par[ s ] == s ) {
			return s;
		}
		return par[ s ] = find( par[ s ] );
	}

	//結合
	void unite( int x, int y ) {
		int a = find( x ), b = find( y );
		if ( a == b ) {
			return;
		}
		if ( rank[ a ] < rank[ b ] ) {
			par[ a ] = b;
		}
		else {
			par[ a ] = b;
			if ( rank[ a ] == rank[ b ] ) {
				++rank[ b ];
			}
		}
	}

	//二つの数の根が同じかどうか
	bool same( int x, int y ) {
		return find( x ) == find( y );
	}

	//サイズを返す
	unsigned int size() {
		return par.size();
	}
};

int main() {
#ifdef WIN32
	printf( "Debug Mode\n" );
#endif
	int n, q;
	scanf( "%d %d", &n, &q );
	Union_Find uf;
	uf.init( n );
	for ( int i = 0; i < q; i++ ) {
		int com, x, y;
		scanf( "%d %d %d", &com, &x, &y );
		if ( com ) {
			printf( "%d\n", uf.same( x, y ) );
		}
		else {
			uf.unite( x, y );
		}
	}
	return 0;
}