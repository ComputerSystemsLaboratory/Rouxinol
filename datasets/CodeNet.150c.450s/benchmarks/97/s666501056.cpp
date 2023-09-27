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
using namespace std;

struct POINT{
	int x;
	int y;
};

int dx[] = {-1, 0, 1,  0};
int dy[] = { 0, 1, 0, -1};

int main(void) {
	int N;
	while (cin >> N, N) {
		POINT minp = {0, 0};
		POINT maxp = {0, 0};

		vector<POINT> box(N);
		box[0].x = 0; box[0].y = 0;
		for (int i = 1; i < N; i++) {
			int n, d;
			cin >> n >> d;
			box[i].x = box[n].x + dx[d];
			box[i].y = box[n].y + dy[d];

			minp.x = min(minp.x, box[i].x);
			minp.y = min(minp.y, box[i].y);
			maxp.x = max(maxp.x, box[i].x);
			maxp.y = max(maxp.y, box[i].y);
		}

		//cerr << "--- ";
		cout << (maxp.x - minp.x + 1) << " " << (maxp.y - minp.y + 1) << endl;
	}

	return 0;
}