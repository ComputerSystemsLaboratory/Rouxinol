#include <iostream>
using namespace std;

int main() {
	int width, height, x, y, r;

	cin >> width >> height >> x >> y >> r;
	if (x >= r&&x <= width - r&&y >= r&&y <= height - r) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}