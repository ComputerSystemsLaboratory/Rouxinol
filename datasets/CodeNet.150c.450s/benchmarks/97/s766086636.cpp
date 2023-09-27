#include <iostream>
#include <cmath>
using namespace std;

int n;

typedef pair<int, int> P;
//³û`Ì¸_
//u¢½ªY
P cubes[200];

//¶¤(= 0)Cº¤ (= 1)CE¤ (= 2)Cã¤ (= 3)
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

int main() {
	while (1) {
		cin >> n;
		if (n == 0) break;
		int minX, maxX, minY, maxY;
		minX = maxX = 0;
		minY = maxY = 0;
		cubes[0] = P(0, 0);
		for (int i = 1; i < n; i++) {
			int ni, di;
			cin >> ni >> di;
			cubes[i] = P(cubes[ni].first + dx[di], cubes[ni].second + dy[di]);
			minX = min(minX, cubes[i].first);
			maxX = max(maxX, cubes[i].first);
			minY = min(minY, cubes[i].second);
			maxY = max(maxY, cubes[i].second);
		}
		cout << maxX - minX + 1 << " " << maxY - minY + 1 << endl;
	}
}