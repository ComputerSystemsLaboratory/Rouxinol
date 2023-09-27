#include <iostream>
using namespace std;

#include <algorithm>

int main() {
	while (1) {
		int n;
		cin >> n;
		if (n==0) break;
		char conv[65535];
		for (int i=0; i<65535; i++) {
			conv[i] = -1;
		}
		for (int i=0; i<n; i++) {
			char c1, c2;
			cin >> c1 >> c2;
			conv[c1] = c2;
		}
		int m;
		cin >> m;
		for (int i=0; i<m; i++) {
			char c1;
			cin >> c1;
			if (conv[c1] >= 0) {
				cout << conv[c1];
			} else {
				cout << c1;
			}
		}
		cout << endl;
	}
	return 0;
}