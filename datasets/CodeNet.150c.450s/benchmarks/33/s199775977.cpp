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
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX / 10;

int taxin(int x, int p) {
	return p*(100 + x) / 100;
}

int taxout(int x, int p) {
	int tax = p * x / (100 + x);
	return p - tax;
}

int main() {
	int x, y, s;
	while (cin >> x >> y >> s, x) {
		int ans = 0;
		FOR(i, 1, s - 1) {
			int a = taxout(x, i), b = taxout(x, s - i);
			if (s != taxin(x, a) + taxin(x, b)) {
				continue;
			}
			else {
				ans = max(ans, taxin(y, a) + taxin(y, b));
			}
		}
		cout << ans << endl;
	}
	return 0;
}