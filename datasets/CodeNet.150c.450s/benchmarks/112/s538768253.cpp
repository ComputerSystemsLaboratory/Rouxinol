#include<iostream>
using namespace std;

int main() {
	int i, j, n, m;
	char be, af, tmp;

	while (1) {
		cin >> n;
		if (n == 0)break;
		char cvrt[128] = {};
		for (i = 0; i < n; i++) {
			cin >> be >> af;
			cvrt[be] = af;
		}
		cin >> m;
		for (i = 0; i < m; i++) {
			cin >> tmp;
			if (cvrt[tmp] == 0) {
				cout << tmp;
			} else {
				cout << cvrt[tmp];
			}
		}
		cout << endl;
	}

	return 0;
}