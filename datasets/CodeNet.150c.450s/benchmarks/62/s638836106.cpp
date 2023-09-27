#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	if(a > c) {
		swap(a, c);
	}
	if(b > c) {
		swap(b, c);
	}
	if(a > b) {
		swap(a, b);
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}