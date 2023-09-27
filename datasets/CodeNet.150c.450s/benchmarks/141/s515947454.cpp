// http://www.sousakuba.com/Programming/gs_hittest_point_triangle.html
#include <iostream>
using namespace std;
bool solve(double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp){
	double z1, z2, z3;
	z1 = (xp - x1) * (y2 - y1) - (yp - y1) * (x2 - x1);
	z2 = (xp - x2) * (y3 - y2) - (yp - y2) * (x3 - x2);
	z3 = (xp - x3) * (y1 - y3) - (yp - y3) * (x1 - x3);
	if(z1 > 0 && z2 > 0 && z3 > 0) return 1;
	else if(z1 < 0 && z2 < 0 && z3 < 0) return 1;
	else return 0;
}

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		if(solve(x1, y1, x2, y2, x3, y3, xp, yp)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}