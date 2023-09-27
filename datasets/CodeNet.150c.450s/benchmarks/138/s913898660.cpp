#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x < y)swap(x, y);
	while (x%y != 0) {
		x = x - y*(x / y);
		swap(x, y);
	}
	cout << y << endl;
	return 0;
}