#include<iostream>

using namespace std;

const int vecx[4] = { -1,0,1,0 };
const int vecy[4] = { 0,1,0,-1 };

int h, w;
char table[20][20];
bool iswalked[20][20];
int si, sj;
int ans;

void dfs(int _i, int _j) {
	ans++;
	iswalked[_i][_j] = true;
	for (int i = 0; i < 4; i++) {
		if (_i + vecx[i] >= h || _i + vecx[i] < 0 || _j + vecy[i] >= w || _j + vecy[i] < 0)continue;
		if (!iswalked[_i + vecx[i]][_j + vecy[i]] && table[_i + vecx[i]][_j + vecy[i]] == '.') {
			dfs(_i + vecx[i], _j + vecy[i]);
		}
	}
}

int main() {
	while (cin >> w >> h, w*h) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> table[i][j];
				if (table[i][j] == '@')si = i, sj = j;
			}
		}
		dfs(si, sj);
		cout << ans << endl;
		ans = 0;
		for (int i = 0; i < h; i++)for (int j = 0; j < w; j++)iswalked[i][j] = false;
	}
	return 0;
}