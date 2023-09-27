#include <iostream>
#include <algorithm>

using namespace std;

double cross(double,double,double,double);

int main(void){
	double xa,ya,xb,yb,xc,yc,xp,yp;
	while(1){
		cin >> xa;
		if (cin.eof())
			break;
		cin >> ya >> xb >> yb >> xc >> yc >> xp >> yp;
		double abx , aby , bcx , bcy , cax , cay , apx , apy , bpx , bpy , cpx , cpy;
		abx = xb - xa;
		aby = yb - ya;
		bcx = xc - xb;
		bcy = yc - yb;
		cax = xa - xc;
		cay = ya - yc;
		apx = xp - xa;
		apy = yp - ya;
		bpx = xp - xb;
		bpy = yp - yb;
		cpx = xp - xc;
		cpy = yp - yc;
		double fa,fb,fc;
		fa = cross(abx,aby,apx,apy);
		fb = cross(bcx,bcy,bpx,bpy);
		fc = cross(cax,cay,cpx,cpy);
		if ( (fa>0 && fb>0 && fc>0) || (fa<0 && fb<0 && fc<0) )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return 0;
}

double cross(double ax,double ay,double bx,double by){
	return ax*by-ay*bx;
}