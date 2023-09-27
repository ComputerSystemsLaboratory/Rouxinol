#include <iostream>
using namespace std;

int main(){
	int W,H,x,y,r;
	cin >> W;
	cin >> H;
	cin >> x;
	cin >> y;
	cin >> r;
	int min_x, min_y, max_x, max_y;
	min_x = r;
	min_y = r;
	max_x = W - r;
	max_y = H - r;

	if (min_x<=x&& x<=max_x && min_y <= y && y<=max_y) cout<<"Yes\n";
	else cout << "No\n";
	return 0;
}