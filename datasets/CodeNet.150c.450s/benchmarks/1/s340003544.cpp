#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)

#define INF INT_MAX / 2 - 1
#define PI 2*acos(0.0)
#define ll long long

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	int n, a, len;
	cin >> n >> a;
	int dp[100000];
	fill_n(dp, 100000, INF);
	dp[0] = a;
	len = 1;
	FOR(i, 1, n) {
		cin >> a;
		if (dp[len-1] < a)
			dp[len++] = a;
		else {
			int j = len;
			for ( ; j >= 0; j--)
				if (dp[j] < a)
					break;
			dp[j+1] = a;
		}
	}
	cout << len << endl;
	return 0;
}