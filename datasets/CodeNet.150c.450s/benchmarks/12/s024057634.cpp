#include <iostream>
using namespace std;

#define MAX 255

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

int main() {
	int n, A[MAX];
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		cin >> A[i];
	}

	for (int i = 1; i < n + 1; i++) {
		cout << "node " << i << ": ";
		cout << "key = " << A[i] << ", ";
		if (parent(i) > 0)cout << "parent key = " << A[parent(i)] << ", ";
		if (left(i) < n + 1)cout << "left key = " << A[left(i)] << ", ";
		if (right(i) < n + 1)cout << "right key = " << A[right(i)] << ", ";
		cout << endl;
	}

	return 0;
}
