#include <iostream>
using namespace std;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
	int n;
	while (cin >> n, n) {
		pair<int, int> p[n];
		int i = 0;
		
		p[i] = pair<int, int>(0, 0);
		i++;
		
		int maxX = 0, minX = 0;
		int maxY = 0, minY = 0;
		for (;i < n; i++) {
			int c, d;
			cin >> c >> d;
			int x = p[c].first + dx[d], y = p[c].second + dy[d];
			p[i] = pair<int, int>(x, y);
			minX = min(minX, x);
			maxX = max(maxX, x);
			minY = min(minY, y);
			maxY = max(maxY, y);
		}
		cout << (maxX + 1 - minX) << " " << (maxY + 1 - minY) << endl;
	}
}