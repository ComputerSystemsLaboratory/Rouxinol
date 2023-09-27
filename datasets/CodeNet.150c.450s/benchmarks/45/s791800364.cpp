#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
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
#define ull unsigned long long
#define MOD 1000000007

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

ull pos(ull x, ull n) {
	if (n == 0)
		return 1;
	ull res = pos(x, n / 2);
	res = (res * res) % MOD;
	if (n % 2 == 1)
		res = (res * x) % MOD;
	return res;
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << pos(m, n) << endl;
	return 0;
}