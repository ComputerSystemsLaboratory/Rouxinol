#include <iostream>
#include <cmath>
using namespace std;

#define range(a, l, r) a >= l && r >= a

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double s, t;
	while(cin >> x1){
		cin >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
		s = ((xp-x1)*(y3-y1)-(yp-y1)*(x3-x1)) / ((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1));
		t = ((xp-x1)*(y2-y1)-(yp-y1)*(x2-x1)) / ((x3-x1)*(y2-y1)-(y3-y1)*(x2-x1));
		if(range(s, 0, 1) && range(t, 0, 1) && s+t <= 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}