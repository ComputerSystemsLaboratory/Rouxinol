#include <cstdio>
#include <iostream>

using namespace std;

int GCD(int x, int y) {

	while (y > 0) {
		int r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main() {

	int x, y;
	scanf("%d %d", &x, &y);

	cout << GCD(x, y) << endl;
	return 0;
}