#include <iostream>
using namespace std;
int main() {

	int W, H, x, y, r, f=0;

	cin >> W >> H >> x >> y >> r;

	if (x-r<0 || x+r>W) {
		f = 1;
	}
	else if (y-r<0 || y+r>H) {
		f = 1;
	}


	if (f == 1) {
		cout << "No\n";
	}
	else {
		cout << "Yes\n";
	}

	return 0;
}