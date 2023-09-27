#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

int main() {
	int R, C;
	while(cin >> R >> C, R) {
		vvi senbei(R, vi(C));
		REP(i, R) {
			REP(j, C) {
				cin >> senbei[i][j];
			}
		}

		int ans = 0;
		REP(i, 1<<R) {
			int tmp = 0;
			REP(j, C) {
				int line = 0;
				REP(k, R) {
					if(i&(1<<k)) {
						line += !senbei[k][j];
					} else {
						line += senbei[k][j];
					}
				}
				tmp += max(line, R-line);
			}
			ans = max(ans, tmp);
		}

		cout << ans << endl;
	}
	return 0;
}