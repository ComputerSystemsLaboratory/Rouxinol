#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int day[1001][11][21];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	memset(day, -1, sizeof day);

	int x = 0;
	for(int y = 1; y < 1000; y++) {
		for(int m = 1; m <= 10; m++) {
			int dmax = 19;
			if(y % 3 == 0) dmax = 20;
			else if(m % 2 == 1) dmax = 20;
			for(int d = 1; d <= dmax; d++) {
				day[y][m][d] = x++;
			}
		}
	}

	int n;
	cin >> n;
	while(n--) {
		int y, m, d;
		cin >> y >> m >> d;
		cout << x - day[y][m][d] << endl;
	}
}