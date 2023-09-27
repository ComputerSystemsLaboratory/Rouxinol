#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int INF = 2000000001;

	int n;
	scanf("%d", &n);

	int H[n + 1];
	for (int i = 1; i <= n; ++i)
		H[i] = INF;

	for (int i = 1; i <= n; ++i) {
		int key;
		scanf("%d", &key);
		H[i] = key;
	}
	for (int i = 1; i <= n; ++i) {
		cout << "node " << i << ": key = " << H[i] << ", ";
		//parent
		if (i != 1)
			cout << "parent key = " << H[i / 2] << ", ";
		//left
		if (i * 2 <= n)
			cout << "left key = " << H[i * 2] << ", ";
		//right
		if (i * 2 + 1 <= n)
			cout << "right key = " << H[i * 2 + 1] << ", ";
		cout << endl;
	}

	return 0;
}