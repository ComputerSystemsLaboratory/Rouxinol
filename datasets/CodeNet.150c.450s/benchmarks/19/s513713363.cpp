#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int x, y;

	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		else if (x > y) {
			swap(x, y);
		}
		cout << x << " " << y << endl;
	}
	

	return 0;
}