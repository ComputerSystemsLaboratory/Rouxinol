#include <iostream>
using namespace std;


int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	bool inside = true;
	if((x - r) < 0) inside = false;
	if((x + r) > W) inside = false;
	if((y - r) < 0) inside = false;
	if((y + r) > H) inside = false;
	if(inside) cout << "Yes";
	else cout << "No";
	cout << endl;
	return 0;
}