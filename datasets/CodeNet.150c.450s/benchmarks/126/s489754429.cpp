#include <iostream>

using namespace std;

int route = 0;
int a, b, n;
bool road[17][17];

void dfs(int x, int y) {
	if (x == a && y == b) {
		route++;
		return;
	}
	if (x > a || y > b) return;
	if (road[y][x]) return;
	dfs(x + 1, y);
	dfs(x, y + 1);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (cin >> a >> b, a, b) {
		cin >> n;
		for (int y = 0; y < 17; y++)
			for (int x = 0; x < 17; x++)
				road[y][x] = false;
		while (n-- > 0) {
			int x, y;
			cin >> x >> y;
			road[y][x] = true;
		}
		route = 0;
		dfs(1, 1);
		cout << route << endl;
	}
}