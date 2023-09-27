#include <iostream>
using namespace std;

int main() {
	
	int x, y;
	
	while (1) {
		cin >> x >> y;
		if (!x && !y) {
			break;
		}
		if (x > y) {
			cout << y << ' ' << x << endl;
		}
		else {
			cout << x << ' ' << y << endl;
		}
	}


	return 0;
}
