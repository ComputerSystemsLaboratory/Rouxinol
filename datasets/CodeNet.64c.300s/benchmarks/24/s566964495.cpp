#include<iostream>
using namespace std;

int main() {
	int n;
	int a = 0, b = 0;

	while (cin >> n, n) {
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			if (x > y) { a += (x + y); }
			else if (x < y) { b += (x + y); }
			else { 
			a += x;
			b += y;
			}
		}
		cout << a <<' '<< b << endl;
		a = 0;
		b = 0;
	}
	return 0;
}