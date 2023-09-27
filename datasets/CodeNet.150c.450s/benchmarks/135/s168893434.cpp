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
	int N, M;
	while(cin >> N >> M, N) {
		vi h(N), w(M);
		REP(i, N) {
			cin >> h[i];
		}
		REP(i, M) {
			cin >> w[i];
		}

		map<int, int> tate;
		REP(i, N) {
			REP(j, N-i) {
				int tmp = 0;
				REP(k, i+1) {
					tmp += h[k+j];
				}
				tate[tmp]++;
			}
		}
		map<int, int> yoko;
		REP(i, M) {
			REP(j, M-i) {
				int tmp = 0;
				REP(k, i+1) {
					tmp += w[k+j];
				}
				yoko[tmp]++;
			}
		}

		map<int, int>::iterator it = tate.begin();
		int ans = 0;
		while(it != tate.end()) {
			ans += (*it).second * yoko[(*it).first];
			it++;
		}

		cout << ans << endl;
	}

	return 0;
}