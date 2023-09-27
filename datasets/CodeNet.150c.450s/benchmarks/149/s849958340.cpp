#include<iostream>
using namespace std;

const int MAX = 10000;

int parent(int uft[], int child) {
	if (uft[child] == -1)return child;
	return uft[child] = parent(uft, uft[child]);
}

int main() {
	int uft[MAX];
	int n;
	int q;

	cin >> n >> q;

	for (int i = 0; i < n; i++)uft[i] = -1;
	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		
		if (com == 0) {
			int xp = parent(uft, x);
			int yp = parent(uft, y);
			if (xp != yp) {
				uft[xp] = yp;
			}
		}
		else {
			if (parent(uft, x) == parent(uft, y)) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}

	return 0;
}