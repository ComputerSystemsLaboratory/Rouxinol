#include<iostream>

#define MAX 10000

using namespace std;

int etog[MAX];

int main() {
	int i, j, n, q, com, x, y, tmpyg;

	cin >> n >> q;
	for (i = 0; i < n; i++) {
		etog[i] = i;
	}

	for (i = 0; i < q; i++) {
		cin >> com >> x >> y;
		if (com == 0) {
			tmpyg = etog[y];
			for (j = 0; j < n; j++) {
				if (etog[j] == tmpyg)etog[j] = etog[x];
			}
		} else {
			if (etog[x] == etog[y])cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	return 0;
}