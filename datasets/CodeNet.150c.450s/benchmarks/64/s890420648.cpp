#include <iostream>
using namespace std;

const int MAX_N = 20;
const int MAX_Q = 200;

int a[MAX_N];
int n, q, x;

bool func(int sum, int i) {
	if (sum == x) return true;
	if (i == n) return false;
	return func(sum, i + 1) || func(sum + a[i], i + 1);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> x;
		cout << (func(0, 0)?"yes":"no") << endl;
	}
	return 0;
}