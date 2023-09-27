#include<iostream>
using namespace std;

int main() {
	int w, h, x, y, r,up,right,down,left;
	cin >> w >> h >> x >> y >> r;

	left = x - r;
	right = x + r;
	up = y + r;
	down = y - r;

	if (left < 0) {
		cout << "No" << endl;
	}
	else if(right > w) {
		cout << "No" << endl;
	}
	else if (up > h) {
		cout << "No" << endl;
	}
	else if (down < 0) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}

	return 0;
}