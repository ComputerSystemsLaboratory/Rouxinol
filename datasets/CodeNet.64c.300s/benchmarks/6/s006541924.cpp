#include<iostream>
using namespace std;

int main() {
	int n, b, f, r, v;
	int count[5][4][11] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		count[b][f][r] += v;
	}

	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 3; j++) {
			for (int k = 1; k <= 10; k++) {
				cout << ' ' << count[i][j][k];
			}
			cout << "\n";
			if (j == 3 && i != 4)
				cout << "####################\n";
		}

	return 0;
}