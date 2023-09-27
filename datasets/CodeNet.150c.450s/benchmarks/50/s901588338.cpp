#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>
#include <list>
#include <cmath>

#define _USE_MATH_DEFINES
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define INF 999999999
#define atcoder 1000000007
#define MAX_N 100

using namespace std;

int V[6] = { 500,100,50,10,5,1 };

int main() {

	int n,ans = 0;

	while (cin >> n, n) {
		n = 1000 - n;
		REP(i, 6) {
			int m = n / V[i];
			n -= V[i] * m;
			ans += m;
		}
		cout << ans << endl;
		ans = 0;
	}

	return 0;
}