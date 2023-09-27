#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double a, b, c;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		a = (x2 - x1)*(yp - y1) - (xp - x1)*(y2 - y1);
		b = (x3 - x2)*(yp - y2) - (xp - x2)*(y3 - y2);
		c = (x1 - x3)*(yp - y3) - (xp - x3)*(y1 - y3);
		if((a > 0 && b > 0 && c > 0) || (a < 0 && b < 0 && c < 0)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}