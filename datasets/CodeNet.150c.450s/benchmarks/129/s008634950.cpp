#include<iostream>
using namespace std;

int main(void) {
	int r;
	int c;
	int num[101][101];
	int hsum[101] = {};
	int vsum[101] = {};
	int finish = 0;

	cin >> r >> c;

	for (int i = 1; i <= r; i++) {
		for (int t = 1; t <= c; t++) {
			cin >> num[i][t];
		}
	}

	for (int i = 1; i <= r; i++) {
		for (int t = 1; t <= c; t++) {
			hsum[i] += num[i][t];
		}
	}

	for (int i = 1; i <= c; i++) {
		for (int t = 1; t <= r; t++) {
			vsum[i] += num[t][i];
		}
	}

	for (int i = 1; i <= c; i++) {
		finish += vsum[i];
	}

	for (int i = 1; i <= r; i++) {
		for (int t = 1; t <= c; t++) {
			cout << num[i][t] << " ";
			if (t == c) {
				cout << hsum[i] << "\n";
			}
		}
	}
	for (int t = 1; t <= c; t++) {
		cout << vsum[t] << " ";
	}
	cout << finish << "\n";
	return 0;
}