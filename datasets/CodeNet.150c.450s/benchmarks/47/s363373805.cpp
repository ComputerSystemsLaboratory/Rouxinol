#include<iostream>

using namespace std;

int main() {

	int W, H, x, y, r ;

	cin >> W >> H >> x >> y >> r ;

	if (x>=0 && y>=0 && x + r > W && y + r > H  || x + r <= W && y + r > H || x + r > W && y + r <= H) {

		cout << "No" << endl;

	}
	
	else if (x >= 0 && y >= 0 && x + r <= W && y + r <= H ) {

		cout << "Yes" << endl;

	}
	else if (x < 0 && y < 0 && x - r > 0 && y - r > 0) {

		cout << "Yes" << endl;

	}
	else if (x < 0 && y < 0 && x - r <= 0 && y - r > 0 || x - r > 0 && y - r <= 0 || x - r <= W && y - r <= H) {

		cout << "No" << endl;

	}
	




	return 0;

}


