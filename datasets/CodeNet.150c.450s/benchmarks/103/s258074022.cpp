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

int solve(int s, int n, int idx, int sum) {
	if (idx == 10) {
		return sum == s && n == 0;
	}

	return solve(s, n - 1, idx + 1, sum + idx) + solve(s, n, idx + 1, sum);
}

int main(void) {
	int n, s;
	while (cin >> n >> s, n) {
		cout << solve(s, n, 0, 0) << endl;
	}

	return 0;
}