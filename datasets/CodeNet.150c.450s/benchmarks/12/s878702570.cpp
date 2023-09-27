#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int heap[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> heap[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << heap[i] << ", ";
		if (i != 1) {
			cout << "parent key = " << heap[i / 2] << ", ";
		}
		if (i * 2 <= n) {
			cout << "left key = " << heap[i * 2] << ", ";
		}
		if (i * 2  + 1 <= n) {
			cout << "right key = " << heap[i * 2 + 1] << ", ";
		}
		cout << endl;
	}

	return 0;
}