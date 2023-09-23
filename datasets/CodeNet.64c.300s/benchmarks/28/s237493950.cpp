#include <iostream>
using namespace std;
int w, h, x, y, r;
void readInput() {
	cin >> w >> h >> x >> y >> r;
}
bool isOver() {
	if ((x - r) < 0) return true;
	if ((x + r) > w) return true;
	if ((y - r) < 0) return true;
	if ((y + r) > h) return true;
	return false;
}
int main() {
	readInput();
	if (isOver()) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
	return 0;
}