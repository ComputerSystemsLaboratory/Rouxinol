#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, i;
	double a = 100000;
	cin >> n;
	for (i = 0; i<n; i++) {
		a *= 1.05;
		ceil(a);
		while ((int)a % 1000 != 0) {
			a += 1;
		}
	}
	cout << (int)a << endl;
}