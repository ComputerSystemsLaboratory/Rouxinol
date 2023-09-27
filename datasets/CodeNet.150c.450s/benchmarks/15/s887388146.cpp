#include<iostream>

using namespace std;

int linear_search(int a[], int b[],int n,int q) {
	int count = 0;
	for (int i = 0; i < q; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[j] == b[i]) {
				++count;
				break;
			}
		}
	}
	return count;
}

int main() {
	int n, q, S[10000], T[500];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> S[i];
	}
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> T[i];
	}
	cout << linear_search(S, T, n, q) << endl;
	return 0;
}