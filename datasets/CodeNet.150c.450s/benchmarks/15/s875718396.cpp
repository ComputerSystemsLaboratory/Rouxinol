#include <iostream>
using namespace std;
inline int search(int a[], int  n, int key) {
	int i = 0;
	a[n] = key;
	while (a[i] != key) i++;
	return i != n;
}
int main() {
	const int num = 10001;
	int n, ar[num], q, key, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> key;
		if (search(ar, n, key)) sum++;
	}
	cout << sum << endl;
}