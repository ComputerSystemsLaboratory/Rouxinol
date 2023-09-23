#include<iostream>

using namespace std;

int Rooms[4][3][10];

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int b, f, r, v;

		cin >> b >> f >> r >> v;

		b--, f--, r--;
		Rooms[b][f][r] += v;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " " << Rooms[i][j][k];
			}
			cout << endl;
		}
		if (i < 3) {
			for (int l = 0; l < 20; l++)cout << "#";
			cout << endl;
		}
	}

	return 0;
}