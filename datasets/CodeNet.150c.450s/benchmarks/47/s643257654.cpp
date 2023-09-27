#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int w,h,x,y,r;
	cin >> w >> h >> x >> y >> r;
	if (x < 0 || y < 0) cout << "No" << endl;
	else if (w >= x+r && h >= y+r) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}