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

const char OK = '.';
const char BAD = '#';
const char USER = '@';

int W, H;
int cnt;
vector<string> ts;
vector<vector<bool>> done;

void dfs(int y, int x) {
	if (y < 0 || x < 0 || y >= H || x >= W) return;
	if (done[y][x]) return;
	if (ts[y][x] == BAD) return;
	
	done[y][x] = true;
	cnt++;

	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			if (!dy ^ !dx) {
				dfs(y + dy, x + dx);
			}
		}
	}
}

int main(void) {
	while (cin >> W >> H, W) {
		ts = vector<string>(H);
		done = vector<vector<bool>>(H, vector<bool>(W));
		for (auto &line : ts) cin >> line;

		cnt = 0;

		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				if (ts[y][x] == USER) {
					dfs(y, x);
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}