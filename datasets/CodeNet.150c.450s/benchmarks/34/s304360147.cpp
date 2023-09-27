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
typedef vector<bool> VB;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
typedef long long LL;

int main() {
	vector<LL> a(32);
	a[1] = 1; a[2] = 2; a[3] = 4;
	FOR(i, 4, 32) {
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	while (true) {
		LL n; cin >> n;
		if (n == 0)break;
		LL day = (a[n] + 9) / 10;
		cout << (day + 364) / 365 << endl;
	}
}
