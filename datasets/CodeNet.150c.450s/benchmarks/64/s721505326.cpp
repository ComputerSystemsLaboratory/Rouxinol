#include<iostream>
using namespace std;

bool canmake(int a[], int n, int m);

int main() {
	int i, j, n, q, a[21], m;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> m;
		if (canmake(a, n, m) == true)cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}

bool canmake(int a[], int n, int m) {
	if (n == 1) {
		if (a[0] == m || m == 0)return true;
		else return false;
	}
	if (canmake(a, n - 1, m) == true)return true;
	else if (canmake(a, n - 1, m - a[n - 1]) == true)return true;
	else return false;
}