#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#define INF 999999999

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int n, m, x, y, l;
char d;

int main()
{
	while (cin >> n) {
		if (n == 0)return 0;
		int field[25][25];
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				field[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			field[x][y]--;
		}
		cin >> m;
		int rx = 10, ry = 10;
		for (int i = 0; i < m; i++) {
			cin >> d >> l;
			if (d == 'N') {
				for (int j = 0; j < l; j++) {
					ry++;
					field[rx][ry]++;
				}
			}
			if (d == 'E') {
				for (int j = 0; j < l; j++) {
					rx++;
					field[rx][ry]++;
				}
			}
			if (d == 'S') {
				for (int j = 0; j < l; j++) {
					ry--;
					field[rx][ry]++;
				}
			}
			if (d == 'W') {
				for (int j = 0; j < l; j++) {
					rx--;
					field[rx][ry]++;
				}
			}
		}
		int k = 0;
		for (int i = 0; i <= 20; i++) {
			for (int j = 0; j <= 20; j++) {
				if (field[i][j] < 0) {
					k++;
					break;
				}
			}
		}
		if (k > 0)cout << "No" << endl;
		else cout << "Yes" << endl;
	}

	return 0;
}