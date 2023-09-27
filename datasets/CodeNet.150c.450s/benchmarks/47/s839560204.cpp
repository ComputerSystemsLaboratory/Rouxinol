#include<iostream>
#include<fstream>
using namespace std;

int main()
{


	int W, H, x, y, r;

	cin >> W >> H >> x >> y >> r;
	
	

	if (0 > (W - (x + r)) || 0 > (H - (y + r)) || 0 > (x-r) || 0 > (y-r))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}