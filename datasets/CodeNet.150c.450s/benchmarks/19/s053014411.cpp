#include <iostream>
#include <utility>
using namespace std;
int main() {
	int x,y,i;
	for (i = 0; i < 3000; i++) {
		cin >> x >> y;
		if (x != 0 || y != 0) {
			if (x > y) swap(x, y);
			cout << x << ' ' << y << endl;
		}
	}
}