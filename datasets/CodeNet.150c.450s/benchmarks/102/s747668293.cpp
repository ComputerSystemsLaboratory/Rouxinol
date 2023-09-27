#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int sum = 0;
char a[20][20];
void solve(int h, int w,  int i,int  j) {
	if (i + 1 < h&&a[i + 1][j] == '.') {
		sum++;
		a[i + 1][j] = '#';
		solve(h, w,  i+1, j);
	}
	if (i - 1 >= 0&&a[i - 1][j] == '.') {
		sum++;
		a[i - 1][j] = '#';
		solve(h, w,  i-1, j);
	}
	if (j + 1 < w&&a[i][j+1] == '.') {
		sum++;
		a[i][j+1] = '#';
		solve(h, w,  i, j+1);
	}
	if (j - 1 >= 0&&a[i][j-1] == '.') {
		sum++;
		a[i][j-1] = '#';
		solve(h, w,  i, j-1);
	}
}
int main() {
	int h, w;
	while (cin >> w >> h&&w != 0 && h != 0) {
		string b;
		int h2, w2;
		for (int i = 0; i < h; i++) {
			cin >> b;
			for (int j = 0; j < w; j++) {
				a[i][j] = b[j];
				if (a[i][j] == '@') {
					h2 = i;
					w2 = j;
				}
			}
		}
		sum = 0;
		solve(h, w,  h2, w2);
		cout << ++sum << endl;
	}
}