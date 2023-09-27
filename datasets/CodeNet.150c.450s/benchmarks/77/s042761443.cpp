#include <iostream>
#include <string>
using namespace std;

int map[21][21];

void search(int a[][21], string d, int i, int *x, int *y) {

	if (d == "N") {
		for (int j = 1; j <= i; j++) a[*y + j][*x] = 2;
		*y += i;
	} else if (d == "S") {
		for (int j = 1; j <= i; j++) a[*y - j][*x] = 2;
		*y -= i;
	} else if (d == "E") {
		for (int j = 1; j <= i; j++) a[*y][*x + j] = 2;
		*x += i;
	} else if (d == "W") {
		for (int j = 1; j <= i; j++) a[*y][*x - j] = 2;
		*x -= i;
	}

}

int judge (int a[][21]) {
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			if (a[i][j] == 1) return 0;
		}
	}
	return 1;
}

void print (int a[][21]) {
	for (int i = 20; i >= 0; i--) {
		for (int j = 0; j < 21; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}


int main(void) {
	int N, x, y, M, i, nowx, nowy;
	string d;

	cin.tie(0);
	//ios::sync_with_stdio(false);

	while (cin >> N, N) {
		nowx = nowy = 10;
		for (int k = 0; k < 21; k++) {
			for (int l = 0; l < 21; l++) {
				map[k][l] = 0;
			}
		}

		//print(map);

		for (int j = 0; j < N; j++) {
			cin >> x >> y;
			map[y][x] = 1;
		}

		map[nowy][nowx] = 2;

		//print(map);

		cin >> M;

		for (int k = 0; k < M; k++) {
			cin >> d >> i;
			search(map, d, i, &nowx, &nowy);
			//print(map);
		}
		cout << (judge(map) == 1 ? "Yes" : "No") << "\n";

	}

	return 0;
}