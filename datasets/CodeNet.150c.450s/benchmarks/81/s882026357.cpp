#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
#include <fstream>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

int main() {
	int n;
	while(cin >> n, n) {
		vvi dist(10, vi(10, INF));
		int a, b, c, maxN = 0;
		REP(i, n) {
			cin >> a >> b >> c;
			dist[a][b] = dist[b][a] = c;
			maxN = max(maxN, max(a, b));
		}
		maxN++;
		REP(i, maxN) {
			REP(j, maxN) {
				REP(k, maxN) {
					dist[j][k] = min(dist[j][k], dist[j][i]+dist[i][k]);
				}
			}
		}
		
		int ans = -1, cost = INF;
		REP(i, maxN) {
			int tmp = 0;
			REP(j, maxN) {
				if(i != j) {
					tmp += dist[i][j];
				}
			}
			if(tmp < cost) {
				cost = tmp;
				ans = i;
			}
		}

		cout << ans << " " << cost << endl;
	}
	return 0;
}