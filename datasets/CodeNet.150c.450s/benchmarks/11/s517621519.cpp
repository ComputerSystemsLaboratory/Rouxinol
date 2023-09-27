#include<iostream>
using namespace std;
void check(int a[], char r) {
	int  b;
	for (b = 0; b < 13; b++) {
		if (a[b] != b + 1) {
			cout << r << ' ' << b + 1 << endl;
		}
	}
}
int main() {
	int s[13], h[13], c[13], d[13], n, j;
	char x;
	cin >> n;
	for (int i = 0; i < 13; i++) {
		s[i] = 100;
		h[i] = 100;
		c[i] = 100;
		d[i] = 100;
	}
	for (int i = 0; i < n; i++) {
		cin >> x >> j;
		if (x == 'S') {
			s[j - 1] = j;
		}
		if (x == 'H') {
			h[j - 1] = j;
		}
		if (x == 'C') {
			c[j - 1] = j;
		}
		if (x == 'D') {
			d[j - 1] = j;
		}
	}
	check(s,'S');
	check(h,'H');
	check(c,'C');
	check(d,'D');
	return 0;
}