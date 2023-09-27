#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	char k[100][2];
	int m;
	char a;

	while (cin >> n) {
		if (n == 0) {
			break;
		} 
		for (int i = 0; i < n; i++) {
			cin >> k[i][0] >> k[i][1];
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> a;
			for (int i = 0; i < n; i++) {
				if (a == k[i][0]) {
					a = k[i][1];
					break;
				}
			}
			cout << a;
		}
		cout << endl;
	}
	
	return 0;
}