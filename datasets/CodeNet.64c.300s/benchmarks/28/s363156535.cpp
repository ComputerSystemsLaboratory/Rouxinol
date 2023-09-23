#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int W;
	int H;
	int x;
	int y;
	int r;
	int jadge;//0=No, 1=YES
	
	cin >> W;
	cin >> H;
	cin >> x;
	cin >> y;
	cin >> r;
	
	if(0<=x-r && x+r<=W && 0<=y-r && y+r<=H) {
		jadge = 1;
		cout << "Yes" <<endl;
	}
	else if(0>x-r || x+r>W || 0>y-r || y+r>H){
		jadge = 0;
		cout << "No" << endl;
	}
	
	return 0;
}