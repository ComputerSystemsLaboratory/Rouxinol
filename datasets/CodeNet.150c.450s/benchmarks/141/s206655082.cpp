//A Point in a Triangle

#include <iostream>
using namespace std;

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double a, b, c;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		int flag = false;
		a = (x2 - x1)*(yp - y2) - (y2 - y1)*(xp - x2);
		b = (x3 - x2)*(yp - y3) - (y3 - y2)*(xp - x3);
		c = (x1 - x3)*(yp - y1) - (y1 - y3)*(xp - x1);
		//cout << "a:" << a << endl;
		//cout << "b:" << b << endl;
		//cout << "c:" << c << endl;
		
		if(a > 0 && b > 0 && c > 0) {
			flag = true;
		}
		else if(a < 0 && b < 0 && c < 0) {
			flag = true;
		}
		
		if(flag == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}