#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

typedef pair<int, int> P;

int main()
{
	int H, W, N, gn = 0, res = 0;
	cin >> H >> W >> N;
	char ch;
	vector< vector<int> > a(W, vector<int>(H, 1000002));
	P start;
	vector< P > goal(N);

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> ch;
			if (ch == 'X') {
				a[j][i] = -1;
			}
			else if (ch == 'S') {
				start.first = j;
				start.second = i;
			}
			else if (ch >= '1' && ch <= '9') {
				goal[ch - '1'].first = j;
				goal[ch - '1'].second = i;
			}
		}
	}
	while (gn < N) {
		queue< P > bfs;
		bfs.push(start);
		a[start.first][start.second] = 0;
		while (!bfs.empty()) {
			P temp = bfs.front();
			bfs.pop();
			if (temp.first + 1 < W && a[temp.first + 1][temp.second] == 1000002) {
				if (goal[gn].first == temp.first + 1 && goal[gn].second == temp.second) {
					res += a[temp.first][temp.second] + 1;
					break;
				}
				else {
					a[temp.first + 1][temp.second] = a[temp.first][temp.second] + 1;
					bfs.push(P(temp.first + 1, temp.second));
				}
			}
			if (temp.first - 1 >= 0 && a[temp.first - 1][temp.second] == 1000002) {
				if (goal[gn].first == temp.first - 1 && goal[gn].second == temp.second) {
					res += a[temp.first][temp.second] + 1;
					break;
				}
				else {
					a[temp.first - 1][temp.second] = a[temp.first][temp.second] + 1;
					bfs.push(P(temp.first - 1, temp.second));
				}
			}
			if (temp.second + 1 < H && a[temp.first][temp.second + 1] == 1000002) {
				if (goal[gn].first == temp.first && goal[gn].second == temp.second + 1) {
					res += a[temp.first][temp.second] + 1;
					break;
				}
				else {
					a[temp.first][temp.second + 1] = a[temp.first][temp.second] + 1;
					bfs.push(P(temp.first, temp.second + 1));
				}
			}
			if (temp.second - 1 >= 0 && a[temp.first][temp.second - 1] == 1000002) {
				if (goal[gn].first == temp.first && goal[gn].second == temp.second - 1) {
					res += a[temp.first][temp.second] + 1;
					break;
				}
				else {
					a[temp.first][temp.second - 1] = a[temp.first][temp.second] + 1;
					bfs.push(P(temp.first, temp.second - 1));
				}
			}
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (a[j][i] != -1) {
					a[j][i] = 1000002;
				}
			}
		}
		start = goal[gn];
		gn++;
	}
	cout << res << endl;
	return 0;
}