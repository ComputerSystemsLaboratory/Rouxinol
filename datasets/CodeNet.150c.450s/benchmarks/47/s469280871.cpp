#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int w, h;
	cin >> w >> h;
	int center_x, center_y, r;
	cin >> center_x >> center_y >> r;
	if (center_x - r<0 || center_x + r>w || center_y - r<0 || center_y + r>h)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
