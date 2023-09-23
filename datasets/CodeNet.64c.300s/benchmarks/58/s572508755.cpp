#include<iostream>

using namespace std;

const int vecx[4] = { -1,0,1,0 };
const int vecy[4] = { 0,1,0,-1 };
int table[100][100];
bool islook[100][100];
int h, w;

void dfs(int _i, int _j) {
	islook[_i][_j] = true;
	for (int i = 0; i < 4; i++) {
		if (_i + vecx[i] < 0 || _i + vecx[i] >= h || _j + vecy[i] < 0 || _j + vecy[i] >= w) {
			continue;
		}
		if (table[_i + vecx[i]][_j + vecy[i]] == table[_i][_j] && !islook[_i + vecx[i]][_j + vecy[i]]) {
			dfs(_i + vecx[i], _j + vecy[i]);
		}
	}
}

int main(){
	while (cin >> h >> w, h*w) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				char buffer;
				cin >> buffer;
				if (buffer == '#')table[i][j] = 0;
				if (buffer == '*')table[i][j] = 1;
				if (buffer == '@')table[i][j] = 2;
			}
		}
		int ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!islook[i][j]) {
					ans++;
					dfs(i, j);
				}
			}
		}
		cout << ans << endl;
		ans = 0;
		for (int i = 0; i < h; i++)for (int j = 0; j < w; j++)table[i][j] = 0, islook[i][j] = false;
	}
	return 0;
}