#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<vector>
#include<functional>
#include<stack>

using namespace std;

int main() {
	int room[4][3][10]{ 0 }, n, b, f, r, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		room[b - 1][f - 1][r - 1] += v;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j == 3) {
				if (i == 3)continue;
				for (int k = 0; k < 20; k++)cout << "#";
			}
			else for (int k = 0; k < 10; k++)cout << " " << room[i][j][k];
			cout << endl;
		}
	}
	return 0;
}