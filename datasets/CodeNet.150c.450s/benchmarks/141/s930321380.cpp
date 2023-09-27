#include <iostream>

using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	double s,t,delta;
	while(cin >> x1 >> y1>> x2>> y2>> x3>> y3>> xp>> yp){
		x2 -= x1;
		y2 -= y1;
		x3 -= x1;
		y3 -= y1;
		xp -= x1;
		yp -= y1;
//		cout << x1 << y1<< x2<< y2<< x3<< y3<< xp<< yp;
		delta = x2*y3 - x3*y2;
//		cout << delta << endl;
		s= (xp*y3-yp*x3)/delta;
		t= (-xp*y2+yp*x2)/delta;
//		cout << s << " " << t << endl;
		if(s > 0 && t > 0 && s+t<1){
			cout << "YES" <<endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


}