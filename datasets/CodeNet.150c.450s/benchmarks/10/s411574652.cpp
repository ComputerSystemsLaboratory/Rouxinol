#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int n;
	int room[5][4][11] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		room[b][f][r] += v;
	}
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 3; j++) {
			for (int k = 1; k <= 10; k++) {
				cout << ' ' << room[i][j][k];
			}
			cout << endl;
		}if (i != 4) {
			cout << "####################" << endl;
		}
	}
	return 0;
}