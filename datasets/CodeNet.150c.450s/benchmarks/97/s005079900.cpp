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
static const int dx[] = { -1, 0, 1, 0,  1, -1,  1, -1 };
static const int dy[] = { 0, -1, 0, 1 , 1,  1, -1, -1 };


int n, a, b, w = 0, h = 0, e = 0;
bool f = false;
VVI box;
int c[ 1000 ][ 1000 ];
VI d;

int main() {
	d.push_back( 0 );
	while ( ~scanf( "%d", &n ) && n ) {
		memset( c, -1, sizeof( c ) );
		c[ 500 ][ 500 ] = 0;
		for ( int i = 1; i < n; i++ ) {
			scanf( "%d %d", &a, &b );
			for ( int j = 0; j < 1000; j++ ) {
				for ( int k = 0; k < 1000; k++ ) {
					if ( c[ j ][ k ] == a ) {
						c[ j + dy[ b ] ][ k + dx[ b ] ] = i;
					}
				}
			}
		}
		int startmark = INF, endmark = -1;
		for ( int i = 0; i < 1000; i++ ) {
			f = false;
			for ( int j = 0; j < 1000; j++ ) {
				if ( c[ i ][ j ] >= 0 ) {
					h += !f;
					f = true;
					startmark = min( startmark, j );
					endmark = max(endmark, j);
				}
			}
			w = max( endmark - startmark + 1, w );
		}
		printf( "%d %d\n", w, h );
		w = h = 0;
	}
	return 0;
}