#include<iostream>

using namespace std;

int main() {
	int width =0, height = 0;
	int x =0 , y =0 , r = 0;
	cin >> width >> height >> x >> y >> r;

	bool result = false;
	if (x - r >= 0 && x + r <= width) {
		if (y - r >= 0 && y + r <= height) {
			result = true;
		}
	}

	if (result) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}