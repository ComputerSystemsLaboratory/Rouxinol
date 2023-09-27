
#include <iostream>
#include <cstdlib>
using namespace std;

bool LargeTrue(int data1, int data2);
bool Dircheck(int CntCircle, int radius, int Widhei);

int main(void)
{
	int W, h, x, y, r = 0;

	cin >> W >> h >> x >> y >> r;

	//x方向y方向両方Trueならば"Yes",以外"No"
	if (Dircheck(x, r, W) && Dircheck(y, r, h)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}


	return 0;
}



bool LargeTrue(int data1, int data2) {
	if (data1 <= data2) {
		return true;
	}
	else {
		return false;
	}
}


bool Dircheck(int CntCircle,int radius,int WidHei) {
	if (WidHei > 0) {
		return LargeTrue(CntCircle + radius, WidHei) && 
			LargeTrue(0, CntCircle - radius);
	}
	else {
		return false;
	}
}




