#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int>a(6);
	for (int b = 0; b < 6; b++) {
		int c;
		cin >> c;
		a[b] = c;
	}
	int s;
	cin >> s;
	for (int k = 0; k < s; k++) {
		int l,r;
		cin >> l >> r;
		for (int d = 0; d < 4; d++) {
			vector<int>f(6);
			for (int g = 0; g < 6; g++) {
				f[g] = a[g];
			}
			a[0] = f[1]; a[1] = f[5]; a[4] = f[0]; a[5] = f[4];
			for (int e = 0; e < 4; e++) {
				if (a[0] == l&&a[1] == r) { cout << a[2] << endl; goto h; }
				if (a[1] == l&&a[0] == r) { cout << a[3] << endl; goto h; }
				vector<int>f(6);
				for (int g = 0; g < 6; g++) {
					f[g] = a[g];
				}
				a[0] = f[3]; a[2] = f[0]; a[3] = f[5]; a[5] = f[2];
			}
		}
	h:;
	}
}