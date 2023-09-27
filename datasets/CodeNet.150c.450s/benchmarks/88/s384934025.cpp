
//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <ctime>


using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }

//math
//-------------------------------------------
template<class T> inline T sqr(T x) { return x * x; }

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define EXISTch(s,c) ((((s).find_first_of(c)) != std::string::npos)? 1 : 0)//cがあれば1 if(1)
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define loop(n) FOR(i,0,n)
#define rrep(i,a,b) for(int i=(a);i>=(b);--i)
//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = (int)1000000007;
const LL MOD = (LL)1000000007;//10^9+7
const LL INF2 = (LL)100000000000000000;//10^18

bool isSmall(int h1, int w1, int h2, int w2) {
	int d1 = h1 * h1 + w1 * w1;
	int d2 = h2 * h2 + w2 * w2;

	if (d1 < d2)return true;
	if (d1 > d2)return false;

	if (h1 < h2)return true;
	else return false;
}

int main() {
	
	while (true) {
		int h, w; cin >> h >> w;

		if (h == 0 && w == 0)return 0;

		int answ = 1000;
		int ansh = 1000;

		for (int ch = 1; ch < 151; ch++) {
			for (int cw = ch+1; cw < 151; cw++) {

				if (ch == h && cw == w)continue;
				if (isSmall(ch, cw,h,w))continue;

				if (isSmall(ch, cw, ansh, answ)) {
					ansh = ch;
					answ = cw;
				}
			}
		}

		cout << ansh << " " << answ << endl;

	}

	return 0;
}
