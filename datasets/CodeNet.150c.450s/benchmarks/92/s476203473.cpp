#include<iostream>
using namespace std;

int main() {
	int a, b, i;
	while (cin >> a) {
		cin >> b;
		a += b;
		for (i = 0; a > 0; i++) {
			a /= 10;
		}
		cout << i << endl;
	}
	return 0;
}