#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define INF 1000000000
#define F first
#define S second

int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { -1, 0, 1, 0 };
int main() {
	int N;
	while (cin >> N, N) {
		vector<pair<int, int>> vp;
		vp.emplace_back(200, 200);
		REP(i, 0, N - 1) {
			int n, d;
			cin >> n >> d;

			int ny = vp[n].F + dy[d];
			int nx = vp[n].S + dx[d];
			vp.emplace_back(ny, nx);
		}

		int ymin = INF, ymax = -INF, xmin = INF, xmax = -INF;
		REP(i, 0, vp.size()) {
			ymin = min(ymin, vp[i].F);
			ymax = max(ymax, vp[i].F);
			xmin = min(xmin, vp[i].S);
			xmax = max(xmax, vp[i].S);
		}

		cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
	}

	return 0;
}