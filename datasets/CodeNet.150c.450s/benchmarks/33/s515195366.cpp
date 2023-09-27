#include <bits/stdc++.h>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef long long LL;
typedef pair<int, int> PII;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef vector<VS> VVS;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<PII> VPII;

#define fst first
#define snd second
#define MP make_pair
#define PB push_back
#define EB emplace_back 
#define ALL(x) (x).begin(),(x).end()
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

template < typename T > inline T fromString(const string &s) { T res; ISS iss(s); iss >> res; return res; };
template < typename T > inline string toString(const T &a) { OSS oss; oss << a; return oss.str(); };

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(void) {
	int x, y, s;
	while (cin >> x >> y >> s, s) {
		int ans = 0;
		for (int a = 1; a < s; a++) {
			for (int b = 1; b < s; b++) {
				int s1 = a * (100 + x) / 100 + b * (100 + x) / 100;
				int s2 = a * (100 + y) / 100 + b * (100 + y) / 100;
				if (s1 == s) {
					ans = max(ans, s2);
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}