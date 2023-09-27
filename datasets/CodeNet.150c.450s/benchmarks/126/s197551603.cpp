#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional> //sort(A,A.end(),greater<int>());???????????????
#include <queue>
#include <stack>
#include <vector>

#define INF 10 << 10
#define MP make_pair

int map[32][32];

int main() {
	memset(map, -1, sizeof(map));
	int a, b, n;
	while (cin >> a >> b && a != 0 && b != 0) {
		cin >> n;

		for (int i = 1; i <= b; ++i) {
			for (int i2 = 1; i2 <= a; ++i2) {
				map[i][i2] = 0;
			}
		}

		for (int i = 0; i < n; ++i) {
			int xx, yy;
			cin >> xx >> yy;
			map[yy][xx] = -1;
		}

		queue<pair<int, int> > q;
		q.push(MP(1, 1));
		int cnt = 0;
		while (!q.empty()) {
			int x = q.front().second, y = q.front().first;
			q.pop();
			if (x == a && y == b) {
				++cnt;
				continue;
			}
			if (map[y + 1][x] == 0) {
				q.push(MP(y + 1, x));
			}
			if (map[y][x + 1] == 0) {
				q.push(MP(y, x + 1));
			}
		}

		cout << cnt << endl;
	}

	return 0;
}