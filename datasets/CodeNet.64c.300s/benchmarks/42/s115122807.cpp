#include<iostream>
using namespace std;

int main(void) {
	int n, x, y, m, i;
	char d;
	while (true)
	{
		int cnt = 0;
		int fx = 10;
		int fy = 10;
		int fld[21][21] = { 0 };

		cin >> n;
		if (n == 0) break;
		for (int j = 0; j < n; j++) {
			cin >> x >> y;
			fld[x][y] = 1;
		}
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> d >> i;
			for (int k = 0; k < i; k++) {
				switch (d) {
				case 'N':
					if (fld[fx][++fy] == 1) cnt++;
					break;
				case 'E':
					if (fld[++fx][fy] == 1) cnt++;
					break;
				case 'S':
					if (fld[fx][--fy] == 1) cnt++;
					break;
				case 'W':
					if (fld[--fx][fy] == 1) cnt++;
					break;
				default:
					break;
				}
				fld[fx][fy] = 0;
			}
		}
		if (cnt == n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}