#include<iostream>
using namespace std;

int main() {
	int i, j, r, c, a[101][101], sr[101] = {}, sc[101] = {}, s = 0;
	cin >> r >> c;
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
			sr[i] += a[i][j];
		}
	}
	for (j = 1; j <= c; j++) {
		for (i = 1; i <= r; i++) {
			sc[j] += a[i][j];
		}
	}
	for (i = 1; i <= r; i++) {
		s += sr[i];
	}
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
			cout << a[i][j] << " ";
		}
		cout << sr[i] << endl;
	}
	for (j = 1; j <= c; j++) {
		cout << sc[j] << " ";
	}
	cout << s << endl;
	return 0;
}