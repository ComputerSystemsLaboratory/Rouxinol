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
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str(); }
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
const int INF = INT_MAX / 10;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
	int W, H;
	while (cin >> W >> H, W) {
		vs field(H);
		pii s;
		REP(i, H) {
			cin >> field[i];
			REP(j, W) {
				if (field[i][j] == '@') {
					s = pii(j, i);
				}
			}
		}

		int ans = 0;
		queue<pii> Q;
		Q.push(s);
		while (!Q.empty()) {
			pii p = Q.front();
			Q.pop();
			ans++;
			
			REP(d, 4) {
				int nx = p.first + dx[d], ny = p.second + dy[d];
				if (nx < 0 || W <= nx || ny < 0 || H <= ny) {
					continue;
				}
				if (field[ny][nx] == '.') {
					field[ny][nx] = '#';
					Q.push(pii(nx, ny));
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}