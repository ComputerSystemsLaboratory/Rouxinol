#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 200;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };

int main()
{
	while (true) {
		int n;
		cin >> n;

		if (n == 0) {
			break;
		}

		int x[MAX];
		int y[MAX];
		x[0] = 0;
		y[0] = 0;
		int maxx = 0, minx = 0, maxy = 0, miny = 0;

		for (int i = 1; i < n; i++) {
			int n, di;
			cin >> n >> di;

			x[i] = x[n] + dx[di];
			y[i] = y[n] + dy[di];

			maxx = max(maxx, x[i]);
			minx = min(minx, x[i]);
			maxy = max(maxy, y[i]);
			miny = min(miny, y[i]);
		}

		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;

	}

	return 0;
}