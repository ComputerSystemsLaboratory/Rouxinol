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

int N, A, B, C, X;
VI Y;

int solve( int now_time, int rd, int now ) {
	if ( now == N ) {
		return now_time - 1;
	}
	if ( now_time > 10000 ) {
		return -1;
	}
	if ( Y[ now ] == rd ) {
		return solve( now_time + 1, ( A * rd + B ) % C, now + 1 );
	}
	return solve( now_time + 1, ( A * rd + B ) % C, now );
}

int main() {
	while ( ~scanf( "%d %d %d %d %d", &N, &A, &B, &C, &X ) && N && C ) {
		Y.resize( N );
		for ( int i = 0; i < N; i++ ) {
			scanf( "%d", &Y[ i ] );
		}
		printf( "%d\n", solve( 0, X, 0 ) );
	}
	return 0;
}