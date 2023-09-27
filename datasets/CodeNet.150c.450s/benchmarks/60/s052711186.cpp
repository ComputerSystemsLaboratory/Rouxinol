#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_A

bool map[100][100];
int main() {
	int n;
	cin >> n;
	//bool map[n][n] = {0};
	for (int i = 0; i < n; i++) {
		int a, c;
		cin >> a >> c;
		for (int j = 0; j < c; j++) {
			int b;
			cin >> b;
			map[a - 1][b - 1] = true;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << (map[i][0] ? "1" : "0");
		for (int j = 1; j < n; j++) {
			cout << " " << (map[i][j] ? "1" : "0");
		}
		cout << endl;
	}
	return 0;
}