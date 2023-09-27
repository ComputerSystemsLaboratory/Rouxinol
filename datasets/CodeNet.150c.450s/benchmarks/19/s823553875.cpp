#include <iostream>
using namespace std;

void _swap(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	return;
}

int main(int argc, char const *argv[]) {
	int x, y;

	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		else if (x > y) {
			_swap(&x, &y);
		}
		cout << x << " " << y << endl;
	}
	

	return 0;
}