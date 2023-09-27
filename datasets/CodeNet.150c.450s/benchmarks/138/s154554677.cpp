#include <cstdio>
#include <iostream>

using namespace std;

int GCD(int x, int y) {
	if (x % y == 0)
		return y;

	return GCD(y, x % y);
}

int main() {

	int x, y;
	scanf("%d %d", &x, &y);

	cout << GCD(x, y) << endl;
	return 0;
}