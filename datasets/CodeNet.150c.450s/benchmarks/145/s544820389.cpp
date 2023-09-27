#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <climits>
#include <utility>

#define PRINT(STR) cout << STR << endl;
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define SPACE " "

typedef long long ll;

using namespace std;

int nextInt() { int n = -1; cin >> n; return n; }
double nextDouble() { double d = -1; cin >> d; return d; }
ll nextll() { ll n = -1; cin >> n; return n; }
string nextString() { string str; cin >> str; return str; }

int INF = 1LL << 25;
double EPS = 1e-9;

// BEGIN //////////////////////////////////////////////////////////////
int main() {
	map<string, int> d;
	string str;
	while (cin >> str) {
		d[str]++;
	}
	int d_max = -1;
	string ans = "";
	for (auto it = d.begin(); it != d.end(); it++) {
		d_max = max(d_max, it->second);
		if (ans.size() < it->first.size()) {
			ans.assign(it->first);
		}
	}
	for (auto it = d.begin(); it != d.end(); it++) {
		if (it->second == d_max) {
			cout << it->first << SPACE;
			break;
		}
	}
	PRINT(ans);

	return 0;
}
// END   //////////////////////////////////////////////////////////////