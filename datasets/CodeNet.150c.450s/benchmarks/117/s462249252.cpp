#include<iostream>
#include<algorithm>
using namespace std;
int b[999999], n, c[999999];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	b[1] = 0;
	for (int i = 2; i <= n; i++) {
		b[i] = b[i / 2] + b[(i + 1) / 2] + i;
	}
	sort(c, c + n);
	for (int i = 0; i < n; i++) {
		cout << c[i];
		if (i < n - 1) {
			cout << ' ';
		}
		else { cout << endl; }
	}
	cout << b[n] << endl;
	return 0;
}