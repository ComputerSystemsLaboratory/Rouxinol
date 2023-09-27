#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n], L[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int length = 1;
	L[0] = A[0];

	for (int i = 1; i < n; i++) {
		if (A[i] > L[length - 1]) {
			L[length++] = A[i];
		} else {
			*lower_bound(L, L + length, A[i]) = A[i];
		}
	}
	cout << length << endl;

	return 0;
}