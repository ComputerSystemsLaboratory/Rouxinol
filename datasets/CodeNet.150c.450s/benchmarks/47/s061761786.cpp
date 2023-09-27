#include<iostream>

#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int w, h, x, y, r;
	bool flag1 = false;
	bool flag2 = false;
	bool flag3 = false;
	bool flag4 = false;

	CI w >> h >> x >> y >> r;

	if ((w - (x + r)) >= 0) {
		flag1 = true;
	}

	if (r <= x) {
		flag2 = true;
	}
		
	if (r <= y) {
		flag3 = true;
	}
			
	if ((h - (r + y)) >= 0) {
		flag4 = true;	
	}
	if (x < 0 || y < 0) {
		flag1 = false;
	}
		
	

	if (flag1 == true && flag2 == true && flag3 == true && flag4 == true) {
		CO "Yes" E
	}
	else {
		CO "No" E
	}
}