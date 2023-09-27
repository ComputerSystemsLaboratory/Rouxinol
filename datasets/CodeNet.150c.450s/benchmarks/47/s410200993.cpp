#include <iostream>
using namespace std;

int main()
{
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	char* ret = "No";
	if (x >= r && x <= W-r &&
	    y >= r && y <= H-r)
	{
		ret = "Yes";		
	}
		
	cout << ret << endl;
	
	return 0;
}