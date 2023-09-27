#include<iostream>
using namespace std;

bool ma[21][21];
int nowx, nowy;

void walk(char wc, int wl) {
	if (wc == 'N') {
		for (int i = 0; i < wl; i++) {
			nowy++;
			ma[nowx][nowy] = false;
		}
	}
	else if (wc == 'S') {
		for (int i = 0; i < wl; i++) {
			nowy--;
			ma[nowx][nowy] = false;
		}
	}
	else if (wc == 'E') {
		for (int i = 0; i < wl; i++) {
			nowx++;
			ma[nowx][nowy] = false;
		}
	}
	else {
		for (int i = 0; i < wl; i++) {
			nowx--;
			ma[nowx][nowy] = false;
		}
	}
}

int main() {
	int n;
	while (cin >> n, n) {
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				ma[i][j] = false;
			}
		}
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			ma[x][y] = true;
		}
		int m;
		cin >> m;
		nowx = 10,nowy = 10;
		for (int i = 0; i < m; i++) {
			char c;
			int l;
			cin >> c >> l;
			walk(c, l);
		}
		bool flag = false;
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				if (ma[i][j] == true)flag = true;
			}
		}
		if (flag == true)cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}