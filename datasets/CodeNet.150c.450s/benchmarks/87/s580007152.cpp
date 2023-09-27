#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

vector<vector<int>>tile(5);

int dis(int dh) {
	int re = 0;
	for (int i = 0; i < dh; i++) {
		if (tile[0][i] == tile[1][i] && tile[1][i] == tile[2][i]) {
			if (tile[0][i] == tile[3][i]) {
				if (tile[0][i] == tile[4][i]) {
					for (int j = 0; j < 5; j++) {
						re += tile[j][i];
						tile[j][i] = 0;
					}
					continue;
				}
				for (int j = 0; j < 4; j++) {
					re += tile[j][i];
					tile[j][i] = 0;
				}
				continue;
			}
			for (int j = 0; j < 3; j++) {
				re += tile[j][i];
				tile[j][i] = 0;
			}
			continue;
		}
		if (tile[2][i] == tile[1][i] && tile[1][i] == tile[3][i]) {
			if (tile[2][i] == tile[4][i]) {
				for (int j = 1; j < 5; j++) {
					re += tile[j][i];
					tile[j][i] = 0;
				}
				continue;
			}
			for (int j = 1; j < 4; j++) {
				re += tile[j][i];
				tile[j][i] = 0;
			}
			continue;
		}
		if (tile[2][i] == tile[3][i] && tile[4][i] == tile[2][i]) {
			for (int j = 2; j < 5; j++) {
				re += tile[j][i];
				tile[j][i] = 0;
			}
			continue;
		}
	}
	return re;
}

void fall(int fh) {
	for (auto &ftile : tile) {
		auto itr = ftile.begin();
		while (itr != ftile.end()) {
			if ((*itr) == 0) {
				itr = ftile.erase(itr);
			}
			else {
				itr++;
			}
		}
		ftile.resize(fh,0);
	}
}

int main() {
	int h;
	while (scanf("%d",&h), h) {
		for (auto &vtile : tile) {
			vtile.resize(h, 0);
		}
		for (int i = 0; i < h; i++) {
			scanf("%d %d %d %d %d", &tile[0][h - i - 1], &tile[1][h - i - 1], &tile[2][h - i - 1], &tile[3][h - i - 1], &tile[4][h - i - 1]);
		}
		int ans = 0;
		while (1) {
			int a;
			a = dis(h);
			if (a)ans += a;
			else break;
			fall(h);
		}
		printf("%d\n", ans);
	}
}