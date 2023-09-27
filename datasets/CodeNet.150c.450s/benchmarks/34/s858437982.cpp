#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef vector<int> VI;
typedef vector< VI > VVI;

typedef long long LL;

typedef pair<int, int> PII;
typedef vector<PII> VPII;

#define X first
#define Y second

vector<LL> memo;

LL solve(int n) {
	if (n < 0) return 0;
	if (memo[n] != -1) return memo[n];
	if (n == 0) return memo[n] = 1;

	return memo[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);
}

int main(void) {
	memo.resize(31, -1);
	int N;
	
	while (cin >> N, N) {
		cout << (solve(N) / 10 + 365) / 365 << endl;
	}

	return 0;
}