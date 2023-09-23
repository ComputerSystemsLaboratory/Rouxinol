#include <iostream>
using namespace std;
int main () {
	int w,h,x,y,r;
	cin >> w >> h >> x >> y >> r;
	if (x<=w-r&&x>=0+r) {
		if (y<=h-r&&y>=0+r) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
	}else {
		cout << "No" << endl;
	}
	
	}

