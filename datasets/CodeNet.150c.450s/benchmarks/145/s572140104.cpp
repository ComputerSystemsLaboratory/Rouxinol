//include----------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
//using namespace--------------------------------------------------------------------------------------------------------------
using namespace std;

//define-----------------------------------------------------------------------------------------------------------------------
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define FOR(i, s, n) for(int i = s; i < (int)n; i++)
#define per(i, n) for(int i = n; i >= 0; i--)
#define ROF(i, s, n) for(int i = s; i >= (int)n; i--)
#define FORIT(i, A) for (auto i : A)
#define PRINT(x) cout << (x) << "\n"
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define EACH(i, n) for (__typeof((n).begin()) i = (n).begin(); i != (n).end(); ++i)
#define SZ(a) int((a).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define dump(x) cout << #x << " = " << (x) << "\n";
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << "\n";
#define sq(n) (n) * (n)

//typedef----------------------------------------------------------------------------------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef priority_queue<int> maxpq;
typedef priority_queue< int, vector<int>, greater<int> > minpq;
//const------------------------------------------------------------------------------------------------------------------------
static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int mod = 1000000007;
static const int INF = 1 << 25;

//global-----------------------------------------------------------------------------------------------------------------------
char a[ 10000 ];
map<string, int> ar;
int most_lengh = 0;
string most_str;
//#define DEBUG
//function--------------------------------------------------------------------------------------------------------------------

int main() {
	while ( scanf( "%s", a ) != EOF ) {
		string str = (string)a;
		ar[ str ]++;
		if ( most_lengh < str.size() ) {
			most_lengh = str.size();
			most_str = str;
		}
		
	}
	string ans;
	int b = 0;
	map<string, int>::iterator it;
	for ( it = ar.begin(); it != ar.end(); it++ ) {
		if ( b < it->second ) {
			b = it->second;
			ans = it->first;
		}
	}
	cout << ans << " " << most_str << "\n";
	return 0;
}