#include<iostream>

using namespace std;

int main() {

	int W, H, x, y, r, xr, yr;

	cin >> W >> H >> x >> y >> r;

	xr = x + r;
	yr = y + r;

	if (xr > W || yr > H)
		cout << "No" << endl;

	else if (xr < 0 || yr < 0)
		cout << "No" << endl;

	else if (x < 0 || r < 0)
		cout << "No" << endl;

	else if (xr <= W&&yr <= H)
		cout << "Yes" << endl;

	else
		cout << "No" << endl;


}