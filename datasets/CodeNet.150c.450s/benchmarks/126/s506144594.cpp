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

int H, W;
int N;
vector< vector<bool> > bads;
VVI memo;

int solve(int y, int x) {
	if (y < 0 || H <= y || x < 0 || W <= x) return 0;
	if (memo[y][x] != -1) return memo[y][x];
	if (y == H - 1 && x == W - 1) return memo[y][x] = 1;
	if (bads[y][x]) return memo[y][x] = 0;

	return memo[y][x] = solve(y + 1, x) + solve(y, x + 1);
}

int main(void) {
	while (cin >> W >> H, W) {
		cin >> N;
		bads = vector<vector<bool>>(H, vector<bool>(W));
		memo = VVI(H, VI(W, -1));

		for (int i = 0; i < N; i++) {
			int x, y;
			cin >> x >> y;
			bads[--y][--x] = true;
		}

		cout << solve(0, 0) << endl;
	}

	return 0;
}