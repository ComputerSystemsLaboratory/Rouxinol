#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <array>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <map>
#include <stack>
#include <utility>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <climits>
#include <bitset>
#include <random>
#include <functional>
#include <sstream>
#include <iomanip>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); i++)
#define FOR(i, m, n) for(int i=(m);i<(n);i++)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort((x).begin(),(x).end())
#define REVE(x) reverse((x).begin(),(x).end())
#define mp make_pair
#define pb push_back

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
typedef long long LL;

int main() {
	while (true) {
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0)break;

		VI y(101);
		rep(i, n)cin >> y[i];

		int i = 0, ans = -1;
		rep(loop, 10001) {
			if (y[i] == x)i++;
			x = (a*x + b) % c;
			if (i == n) { ans = loop; break; }
		}
		cout << ans << endl;

	}
}
