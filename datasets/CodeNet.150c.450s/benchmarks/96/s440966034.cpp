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

int n;
string str;
VS input(9);

string now;
PII many_push;

int gcd( int m, int n ) {
	if ( n == 0 ) return m;
	return gcd( n, m % n );
}

int main() {
	input[ 0 ] = ".,!? ";
	input[ 1 ] = "abc";
	input[ 2 ] = "def";
	input[ 3 ] = "ghi";
	input[ 4 ] = "jkl";
	input[ 5 ] = "mno";
	input[ 6 ] = "pqrs";
	input[ 7 ] = "tuv";
	input[ 8 ] = "wxyz";
	scanf( "%d", &n );
	for ( int i = 0; i < n; i++ ) {
		cin >> str;
		now = "(";
		for ( int j = 0; j < str.size(); j++ ) {	
			if ( str[ j ] == '0' ) {
				if ( now[ 0 ] != '(' ) {
					cout << now;
					now[ 0 ] = '(';
					many_push = PII( 10, 10 );
				}
				continue;
			}
			if ( many_push.first != str[ j ] - '1' ) {
				many_push = PII( str[ j ] - '1', 0 );
				now[ 0 ] = input[ many_push.first ][ many_push.second ];
				continue;
			}
			many_push.second++;
			many_push.second %= input[ many_push.first ].size();
			now[ 0 ] = input[ many_push.first ][ many_push.second ];
		}
		printf( "\n" );
	}
	return 0;
}