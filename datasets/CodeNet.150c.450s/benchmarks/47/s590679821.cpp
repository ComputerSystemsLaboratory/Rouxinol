#include <iostream>
using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	int s;
	bool a = x >= r && x <= W -r && y >= r && y <= H - r;
	if (a){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}