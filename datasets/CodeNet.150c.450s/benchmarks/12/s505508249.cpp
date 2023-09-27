#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n;
	int H[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> H[i];
	} 

	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": ";
		cout << "key = " << H[i] << ", ";
		if (i > 1) cout << "parent key = " << H[i / 2] << ", ";
		if (2 * i <= n) cout << "left key = " << H[2 * i] << ", ";
		if (2 * i + 1 <= n) cout << "right key = " << H[2 * i + 1] << ", ";
		cout << endl;
	}

	return 0;
}