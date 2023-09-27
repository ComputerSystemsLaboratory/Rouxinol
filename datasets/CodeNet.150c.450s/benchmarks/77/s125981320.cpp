#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M, x, y, l, rx, ry;
	char d;
	while (cin >> N, N) {
		vector< vector<bool> > a(21, vector<bool>(21, false));
		rx = ry = 10;
		for (int i = 0; i < N; i++) {
			cin >> x >> y;
			a[x][y] = true;
		}
		cin >> M;
		for (int i = 0; i < M; i++) {
			cin >> d >> l;
			switch (d) {
			case 'N':
				for (int j = 0; j < l; j++) {
					ry++;
					if (a[rx][ry])
						a[rx][ry] = false;
				}
				break;
			case 'S':
				for (int j = 0; j < l; j++) {
					ry--;
					if (a[rx][ry])
						a[rx][ry] = false;
				}
				break;
			case 'E':
				for (int j = 0; j < l; j++) {
					rx++;
					if (a[rx][ry])
						a[rx][ry] = false;
				}
				break;
			case 'W':
				for (int j = 0; j < l; j++) {
					rx--;
					if (a[rx][ry])
						a[rx][ry] = false;
				}
				break;
			}
		}
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				if (a[i][j]) {
					cout << "No" << endl;
					goto rabel;
				}
			}
		}
		cout << "Yes" << endl;
	rabel:
		;
	}
	return 0;
}