#include <vector>
#include <list>
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
#include <cassert>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
const double EPS = 1e-10;
const double PI  = acos(-1.0);

int main() {
	int N;

	while(cin >> N, N) {
		int rx = 10, ry = 10;
		vvi field(21, vi(21, 0));

		int x, y;
		REP(i, N) {
			cin >> x >> y;
			field[x][y] = 1;
		}

		int M;
		cin >> M;
		
		char c;
		int t;
		REP(i, M) {
			cin >> c >> t;
			if(c == 'N') {
				REP(j, t) {
					ry++;
					field[rx][ry] = 0;
				}
			} else if(c == 'E') {
				REP(j, t) {
					rx++;
					field[rx][ry] = 0;
				}
			} else if(c == 'W') {
				REP(j, t) {
					rx--;
					field[rx][ry] = 0;
				}
			} else {
				REP(j, t) {
					ry--;
					field[rx][ry] = 0;
				}
			}
		}

		FOR(i, 0, 20) {
			FOR(j, 0, 20) {
				if(field[i][j] == 1) {
					cout << "No" << endl;
					goto ne;
				} else {

				}
			}
		}

		cout << "Yes" << endl;

		ne:;
	}

	return 0;
}