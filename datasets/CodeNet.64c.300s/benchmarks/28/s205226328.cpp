#include<iostream>
using namespace std;
int main(void){
	int W, H, x, y, r, X, Y, Xx, Yy;
	cin >> W >> H >> x >> y >> r;
	X = x + r;
	Y = y + r;
	Xx = x - r;
	Yy = y - r;
	if(0 <= Xx && W >= X && 0 <= Yy && H >= Y){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}