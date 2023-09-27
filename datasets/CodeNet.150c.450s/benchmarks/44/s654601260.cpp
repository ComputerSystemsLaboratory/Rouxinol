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
	int a1, a2, a3, a4, b1, b2, b3, b4;
	while (cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4) {
		VI a = { a1,a2,a3,a4 };
		VI b = { b1,b2,b3,b4 };

		int c1 = 0, c2 = 0;
		rep(i, 4) {
			if (a[i] == b[i])c1++;
		}

		VI ca(10), cb(10);
		rep(i, 4)ca[a[i]]++;
		rep(i, 4)cb[b[i]]++;
		rep(i, 10) {
			c2 += min(ca[i], cb[i]);
		}

		cout << c1 << " " << c2 - c1 << endl;
	}
}
