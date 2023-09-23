#include<iostream>
using namespace std;
int main() {
	int b, f, r, v, n;
	cin >> n;
	int a[4][3][10];
	for (int to = 0; to < 4; to++) {
		for (int kai = 0; kai < 3; kai++) {
			for (int heya = 0; heya < 10; heya++) {
				a[to][kai][heya] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		a[b - 1][f - 1][r - 1] += v;
	}
	for (int to = 0; to < 4; to++) {
		for (int kai = 0; kai < 3; kai++) {
			for (int heya = 0; heya < 10; heya++) {
				cout << " " << a[to][kai][heya];
			}
			cout << endl;
		}
		if (to < 3) {
			cout << "####################" << endl;
		}
	}
}