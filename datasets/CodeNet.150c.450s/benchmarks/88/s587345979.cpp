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
typedef complex<double> P;
static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int mod = 1000000007;
static const int INF = 1 << 29;
static const LL LL_INF = 1152921504606846976;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };

int gcd( int n, int m ) {
	if ( m == 0 ) {
		return n;
	}
	return gcd( m, n % m );
}

bool solve( string &str ) {
	if ( str[0] == 't' ) {
		str = str.substr( 4 );
		return false;
	}
	str = str.substr( 5 );
	return true;
}


int main() {
	int h, w;
	while ( ~scanf( "%d %d", &h, &w ) && h && w ) {
		int ans_h = 200, ans_w = 200;
		for ( int i = 1; i <= 150; i++ ) {
			for ( int j = i + 1; j <= 150; j++ ) {
				if ( ( sq( h ) + sq( w ) < sq( i ) + sq( j ) || ( sq( h ) + sq( w ) == sq( i ) + sq( j ) && h < i ) ) && sq( i ) + sq( j ) < sq( ans_h ) + sq( ans_w ) ) {
					ans_h = i;
					ans_w = j;
					break;
				}
			}
		}
		printf( "%d %d\n", ans_h, ans_w );
	}
	return 0;
}