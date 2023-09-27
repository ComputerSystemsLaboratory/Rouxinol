#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	vector<vector<int>> calc(r + 1, vector<int>(c + 1));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> calc[i][j];
			calc[i][c] += calc[i][j];
			calc[r][j] += calc[i][j];
			calc[r][c] += calc[i][j];
		}
	}
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j < c; j++) {
			cout << calc[i][j] << ' ';
		}
		cout << calc[i][c] << endl;
	}
	return 0;
}