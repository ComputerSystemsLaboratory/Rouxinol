#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int w, h, x, y, r;
	cin >> w >> h>> x >> y >> r;
	string isIn;
	if(0<= x -r && w >= x +r && 0 <= y -r && h >= y +r) isIn = "Yes";
	else isIn = "No";
	
	cout << isIn << endl;
	return 0;
}