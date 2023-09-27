#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
//cin.sync_with_stdio(false);
//streambuf
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
char m[22][22];
int main() {
	int w, h;
	pii pos;
	while (cin>>w>>h,w) {
		fill((char*)m, (char*)m + 22 * 22,'#');
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> m[i][j];
				if (m[i][j] == '@')pos = pii(i, j);
			}
		}
		int sum = 1;
		queue<pair<int, int>> que;
		que.push(pos);
		while (!que.empty()) {
			int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 };
			for (int i = 0; i < 4; i++) {
				int x = que.front().second+dx[i], y = que.front().first+dy[i];
				if (m[y][x] == '.') {
					m[y][x] = '@';
					sum++;
					que.push(pii(y, x));
				}
			}
			que.pop();
		}
		cout << sum << endl;
	}
	return 0;
}