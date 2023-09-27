#include <iostream>

using namespace std;

int main(){
	int w, h, x, y, r;

	cin >> w >> h >> x >> y >> r;
	
	int ax = x + r;
	int ay = y + r;
	int sx = x - r;
	int sy = y - r;
	if (sx<0 || ax > w || sy < 0 || ay > h){ cout << "No" << endl; }
	else { cout << "Yes" << endl; }
	 

	return 0;
}