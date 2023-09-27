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

int d(int h, int w) {
	return h*h+w*w;
}

int main() {
	int h, w;
	while(cin >> h >> w, h) {
		int dhw = d(h, w), bestd = INF, ansh, answ;
		FOR(i, 1, 150) {
			FOR(j, i+1, 150) {
				int dij = d(i, j);
				if(dhw == dij && h < i) {
					ansh = i;
					answ = j;
					goto show;
				}
				if(dhw < dij && dij < bestd) {
					ansh = i;
					answ = j;
					bestd = d(i, j);
				}
			}
		}
show:
		cout << ansh << " " << answ << endl;
	}

	return 0;
}