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
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;

int main() {
	int a, b, n;

	while(cin >> a >> b >> n, a) {
		vvi cost(a+1, vi(b+1, 0));

		REP(i, n) {
			int x, y;
			cin >> x >> y;

			cost[x][y] = -1;
		}

		FOR(i, 1, a+1) {
			FOR(j, 1, b+1) {
				if(cost[i][j] != -1) {
					cost[i][j] = cost[i-1][j] + cost[i][j-1];
				} else {
					cost[i][j] = 0;
				}

				if(i==1 && j==1) {
					cost[i][j] = 1;
				}
 			}
		}

		cout << cost[a][b] << endl;
	}

	return 0;
}