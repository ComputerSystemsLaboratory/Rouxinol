#include <bits/stdc++.h>
using namespace std;

int N, n, d;
int dy[] = {0, 1, 0, -1};
int dx[] = {-1, 0, 1, 0};

int main() {
	while (cin >> N, N) {
		int xmin, xmax, ymin, ymax;
		vector<pair<int, int>> v;
		v.emplace_back(0, 0);
		xmin = xmax = ymin = ymax = 0;
		for (int i = 0; i < N - 1; i++) {
			cin >> n >> d;
			int ny = v[n].first + dy[d];
			int nx = v[n].second + dx[d];
			xmin = min(xmin, nx);
			xmax = max(xmax, nx);
			ymin = min(ymin, ny);
			ymax = max(ymax, ny);
			v.emplace_back(ny, nx);
		}
		cout << xmax - xmin + 1 << ' ' << ymax - ymin + 1 << '\n';
	}
	return 0;
}