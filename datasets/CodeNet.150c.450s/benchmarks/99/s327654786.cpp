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

int n;
string mcxi1, mcxi2;

int to_int( string str ) {
	int res = 0;
	int many = 1;
	string s = "ixcm";
	for ( int i = 0; i < str.size(); i++ ) {
		if ( str[ i ] >= '2' && str[ i ] <= '9' ) {
			many *= str[ i ] - '0';
		}
		else {
			for ( int j = 0; j < 4; j++ ) {
				if ( str[ i ] == s[ j ] ) {
					for ( int k = 0; k < j; k++ ) {
						many *= 10;
					}
					res += many;
					many = 1;
					break;
				}
			}
		}
	}
	return res;
}


int main() {
	scanf( "%d", &n );
	for ( int i = 0; i < n; i++ ) {
		cin >> mcxi1 >> mcxi2;
		int a = to_int( ( string ) mcxi1 );
		int b = to_int( ( string ) mcxi2 );

		a += b;
		int d = a;
		string res;
		char s[ 9 ];
		int now = 0;
		if ( d / 1000 != 0 ) {
			if ( d / 1000 != 1 ) {
				s[ now ] = ( d / 1000 ) + '0';
				now++;

			}
			s[ now ] = 'm';
			now++;
			d %= 1000;
		}
		if ( d / 100 != 0 ) {
			if ( d / 100 != 1 ) {
				s[ now ] = ( d / 100 ) + '0';
				now++;

			}
			s[ now ] = 'c';
			now++;
			d %= 100;
		}
		if ( d / 10 != 0 ) {
			if ( d / 10 != 1 ) {
				s[ now ] = ( d / 10 ) + '0';
				now++;

			}
			s[ now ] = 'x';
			now++;
			d %= 10;
		}
		if ( d != 0 ) {
			if ( d != 1 ) {
				s[ now ] = d + '0';
				now++;

			}
			s[ now ] = 'i';
			now++;
		}
		s[ now ] = 0;
		res = ( string ) s;
		cout <<  res << "\n";

		
	}
	return 0;
}