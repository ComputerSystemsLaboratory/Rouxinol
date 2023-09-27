#include <iostream>

using namespace std;

bool Judge(int W, int H, int x, int y, int r);

bool Judge(int W, int H, int x, int y, int r)
{
	if(x - r < 0) return false;
	if(x + r > W) return false;
	if(y - r < 0) return false;
	if(y + r > H) return false;
	
	return true;
}

int main()
{
	int W, H, x, y, r;
	
	cin >> W >> H >> x >> y >> r;

	if(Judge(W, H, x, y, r)){
		cout << "Yes" << endl;
	} else{
		cout << "No" << endl;
	}
}