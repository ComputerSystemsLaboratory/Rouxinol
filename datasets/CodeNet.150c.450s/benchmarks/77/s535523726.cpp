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

struct POINT {
	int x;
	int y;
};

int main(void) {
	int N, M;
	while (cin >> N, N) {
		vector< vector<bool> > gem(21, vector<bool> (21, 0) );
		for (int gi = 0; gi < N; gi++) {
			int x, y;
			cin >> x >> y;
			gem[x][y] = true;
		}

		POINT robotp = {10, 10};
		int haveGem = 0;
		cin >> M;
		for (int i = 0; i < M; i++) {
			char dir;
			int dis;
			cin >> dir >> dis;
			while (dis) {
				switch(dir) {
					case 'N':
						robotp.y++;
						break;
					case 'E':
						robotp.x++;
						break;
					case 'S':
						robotp.y--;
						break;
					case 'W':
						robotp.x--;
						break;
				}
				if (gem[robotp.x][robotp.y]) {
					gem[robotp.x][robotp.y] = false;
					haveGem++;
				}
				dis--;
			}
		}

		cout << (haveGem == N ? "Yes" : "No") << endl;
	}

	return 0;
}