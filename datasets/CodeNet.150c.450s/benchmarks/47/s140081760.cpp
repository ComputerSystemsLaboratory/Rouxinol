#include <iostream>
using namespace std;

bool solve(int,int,int,int,int);

int main()
{
	int W,H,x,y,r;
	cin >> W >> H >> x >> y >> r;
	if(solve (W,H,x,y,r)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
	}
	
bool solve(int W,int H,int x,int y,int r)
{
		if(!(x > 0 && x < W && y > 0 && y < H)) return false;
		else if(x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= H) return true;
		else return false;
}