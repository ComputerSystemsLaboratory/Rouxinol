#include <iostream>
using namespace std;

int main(){
	int n;
	double x1, y1, x2, y2, x3, y3, xp, yp, x ,y ,z;

	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		x = (x1 - x3) * (yp - y1) - (y1 - y3) * (xp - x1);
		y = (x2 - x1) * (yp - y2) - (y2 - y1) * (xp - x2);
		z = (x3 - x2) * (yp - y3) - (y3 - y2) * (xp - x3);
		if ((x > 0 && y > 0 && z > 0) || (x < 0 && y < 0 && z < 0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}