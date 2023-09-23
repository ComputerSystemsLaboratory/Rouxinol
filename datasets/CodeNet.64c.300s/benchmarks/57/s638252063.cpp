#include<iostream>
#include<algorithm>

using namespace std;
int r, c;
int Osenbei[10][10000];
int sum = 0;

void dfs(int roral) {
	if (roral == r) {
		int result = 0;
		for (int j = 0; j < c; ++j) {
			int num = 0;
			for (int i = 0; i < r; ++i) {
				if (Osenbei[i][j])
					++num;
			}
			result += max(num, r - num);
		}
		sum = max(result, sum);
		return;
	}
	dfs(roral + 1);

	
	for (int j = 0; j < c; ++j) {
		Osenbei[roral][j] = 1 - Osenbei[roral][j];
	}

	dfs(roral + 1);

	for (int j = 0; j < c; ++j) {
		Osenbei[roral][j] = 1 - Osenbei[roral][j];
	}


	return;
}

int  main() {
	while (true) {
		cin >> r >> c;
		if (c == 0) {
			break;
		}
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j)
			{
				cin >> Osenbei[i][j];
			}
		}
		dfs(0);
		cout << sum << endl;
	}
}