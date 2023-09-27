#include<iostream>
using namespace std;

int main() {
	int i, n, node[252];
	cin >> n;
	for (i = 1; i <= n; i++) cin >> node[i];
	
	for (i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << node[i];
		if (i != 1)cout << ", parent key = " << node[i / 2];
		if (2 * i <= n)cout << ", left key = " << node[2 * i];
		if (2 * i + 1 <= n)cout << ", right key = " << node[2 * i + 1];
		cout << ", \n";
	}

	return 0;
}