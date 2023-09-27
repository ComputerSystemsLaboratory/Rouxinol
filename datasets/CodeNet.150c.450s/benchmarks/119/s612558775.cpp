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

string str;
int w, h, ans;
VVI ar;

int gcd( int m, int n ) {
	if ( n == 0 ) return m;
	return gcd( n, m % n );
}

void solve( int y, int x ) {
	ar[ y ][ x ] = 0;
	for ( int i = 0; i < 8; i++ ) {
		if ( ar[ y + dy[ i ] ][ x + dx[ i ] ] ) {
			solve( y + dy[ i ], x + dx[ i ] );
		}
	}
}

int main() {
	while ( ~scanf("%d %d", &w, &h) && w && h ) {
		ar.resize( h + 2 );
		for ( int i = 0; i < h + 2; i++ ) {
			ar[ i ].resize( w + 2 );
		}
		ans = 0;
		for ( int i = 0; i < w + 2; i++ ) {
			ar[ 0 ][ i ] = 0;
			ar[ h + 1 ][ i ] = 0;
		}
		for ( int i = 1; i < h + 1; i++ ) {
			for ( int j = 1; j < w + 1; j++ ) {
				scanf( "%d", &ar[ i ][ j ] );
			}
		}
		for ( int i = 0; i < h + 2; i++ ) {
			for ( int j = 0; j < w + 2; j++ ) {
				if ( ar[ i ][ j ] ) {
					ans++;
					solve( i, j );
				}
			}
		}
		printf( "%d\n", ans );
		ar.clear();
	}
	return 0;
}