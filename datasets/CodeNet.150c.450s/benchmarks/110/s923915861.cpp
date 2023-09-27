#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool a[10000][10000];
long long  f[10000][10000];
long long  sum = 0, sum3=10000000;
bool sum2 = false;
void solve(int i, int j,int mi,int mj,int h,int w) {
	if (i == mi&&j == mj&&sum3>f[i][j]) {
		sum3 = f[i][j];
		sum2 = true;
		return;
	}
	if (a[i][j + 1] && f[i][j] + 1 < f[i][j + 1] && j + 1 < w) {
		f[i][j + 1] = f[i][j] + 1;
		solve(i, j + 1, mi, mj, h, w);
	}
	if (a[i][j - 1] && f[i][j] + 1 < f[i][j - 1] && j - 1 >= 0) {
		f[i][j - 1] = f[i][j] + 1;
		solve(i, j - 1, mi, mj, h, w);
	}
	if (a[i + 1][j] && f[i][j] + 1 < f[i + 1][j] && i + 1 < h) {
		f[i + 1][j] = f[i][j] + 1;
		solve(i + 1, j, mi, mj, h, w);
	}
	if (a[i - 1][j] && f[i][j] + 1 < f[i - 1][j] && i - 1 >= 0) {
		f[i - 1][j] = f[i][j] + 1;
		solve(i - 1, j, mi, mj, h, w);
	}
}
int main() {
	long long  h, w, n;
	cin >> h >> w >> n;
	long long  b[100][2], c;
	string d;
	for (int i = 0; i < h; i++) {
		cin >> d;
		for (int j = 0; j < w; j++) {
			if (d[j] == 'X')
				a[i][j] = false;
			else
				a[i][j] = true;
			if (d[j] >= '1'&&d[j] <= '9') {
				int e = (int)d[j] - '0';
				b[e][0] = i;
				b[e][1] = j;
			}
			if (d[j] == 'S') {
				b[0][0] = i;
				b[0][1] = j;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < h; j++)
			fill(f[j], f[j] + w, 1000001);
		sum2 = false;
		f[b[i][0]][b[i][1]] = 0;
		solve(b[i][0], b[i][1], b[i + 1][0], b[i + 1][1], h, w);
		sum += f[b[i + 1][0]][b[i + 1][1]];
	}
	cout << sum << endl;
}