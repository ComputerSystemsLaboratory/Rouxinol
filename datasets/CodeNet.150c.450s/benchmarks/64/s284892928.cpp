#include<iostream>
using namespace std;

bool exhaustiveSearch(const int A[], int i, int key, int nNum) {
	if (key == 0)	return true;
	if (key < 0 || i >= nNum) return false;
	return exhaustiveSearch(A, i + 1, key, nNum) ||
		exhaustiveSearch(A, i + 1, key - A[i], nNum);
}

int main() {
	int nNum;
	int A[20];
	int qNum;

	cin >> nNum;
	for (int i = 0; i < nNum; i++) {
		cin >> A[i];
	}
	cin >> qNum;
	for (int i = 0; i < qNum; i++) {
		int key;
		cin >> key;
		if (exhaustiveSearch(A, 0, key, nNum)) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}