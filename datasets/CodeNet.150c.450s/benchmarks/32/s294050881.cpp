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
		int m, min, max;
		cin >> m >> min >> max;
		if (m == 0 && min == 0 && max == 0)break;

		VI p(m);
		rep(i, m)cin >> p[i];

		SORT(p); REVE(p);
		int ans = 0, ans1;
		FOR(i, min, max + 1) {
			int x = p[i - 1] - p[i];
			if (x >= ans)ans = x, ans1 = i;
		}
		cout << ans1 << endl;
	}
}
