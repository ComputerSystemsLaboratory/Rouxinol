#include <iostream>
using namespace std;

int main() {
	int W,H,x,y,r;
	cin >> W >> H >> x >> y >> r;
	if(W < 2*r || H < 2*r){
	cout << "No" << endl;
	}
	else if(x + r <= W && x - r >= 0 && y + r <= H && y - r >= 0)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}