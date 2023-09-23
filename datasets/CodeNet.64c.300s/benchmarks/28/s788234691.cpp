#include <iostream>
using namespace std;

int main(){
	int W,H,x,y,r;
	
	cin >> W >> H >> x >> y >> r;

	if (r > W || r > H)
		cout << "No" << endl;
	else if ((x - r) < 0 || W < (x + r))
		cout << "No" << endl;
	else if ((y - r) < 0 || H < (y + r))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	return 0;
}