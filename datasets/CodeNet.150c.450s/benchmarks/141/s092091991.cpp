#include<iostream>
using namespace std;
 
int main(){
	double x1, x2, x3, y1, y2, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		double cross1 = (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);
		double cross2 = (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
		double cross3 = (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);
		if(cross1 < 0 && cross2 < 0 && cross3 < 0 || cross1 > 0 && cross2 > 0 && cross3 > 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
