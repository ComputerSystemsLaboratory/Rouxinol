#include <iostream>
using namespace std;

void show(int block[3][10]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 10; j++) {
			cout << " " << block[i][j];
		}
		cout << endl;
	}
}

int main() {
	int n, i;
	int b, f, r, v;
	int one[3][10] = {{0}, {0}};
	int two[3][10] = {{0}, {0}};
	int three[3][10] = {{0}, {0}};
	int four[3][10] = {{0}, {0}};
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		switch (b) {
			case 1:
				one[f-1][r-1] += v;
				break;
			case 2:
				two[f-1][r-1] += v;
				break;
			case 3:
				three[f-1][r-1] += v;
				break;
			case 4:
				four[f-1][r-1] += v;
				break;
			default:
				break;
		}
	}
	show(one);
	cout << "####################" << endl;
	show(two);
	cout << "####################" << endl;
	show(three);
	cout << "####################" << endl;
	show(four);
	return 0;
}