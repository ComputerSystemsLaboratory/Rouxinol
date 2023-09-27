#include <iostream>
using namespace std;

int cube(int x, int n) {
	if (n == 1)
		return x;
	return cube(x, n - 1)*x;
}

int main() {
	int x;
	cin >> x;

	cout << cube(x, 3) << endl;

	return 0;
}