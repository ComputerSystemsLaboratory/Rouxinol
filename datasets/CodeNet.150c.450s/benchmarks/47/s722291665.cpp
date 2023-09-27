#include <iostream>
#include <cmath>
using namespace std;

const int Max = 100;
const int Min = -100;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	if((W > 0 && W <= Max) && (H > 0 && H <= Max) && (r > 0 && r <= Max)) 
	{ 
		if((0 <= (x-r)) && (0 <= (y-r)) && ((x+r) <= W) && ((y+r) <= H))	
	
			cout << "Yes";
		else 
			cout << "No";
		cout << endl;
	}
	else cout << "No" << endl;
	return 0;
}