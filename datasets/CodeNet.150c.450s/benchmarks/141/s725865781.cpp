#include <iostream>
#include <cmath>
using namespace std;

#define EPS (1e-10)
double length(double x1, double y1, double x2, double y2){
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double a, b, c, x, pa, pb, pc;
	double S, Sp, Sa, Sb, Sc;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		a = length(x2, y2, x3, y3);
		b = length(x3, y3, x1, y1);
		c = length(x1, y1, x2, y2);
		x = (a + b + c) / 2;
		S = sqrt(x*(x-a)*(x-b)*(x-c)); // Heron's formula

		pa = length(xp, yp, x1, y1);
		pb = length(xp, yp, x2, y2);
		pc = length(xp, yp, x3, y3);
		x = (a + pb + pc) / 2;
		Sa = sqrt(x*(x-a)*(x-pb)*(x-pc));
		x = (pa + b + pc) / 2;
		Sb = sqrt(x*(x-pa)*(x-b)*(x-pc));
		x = (pa + pb + c) / 2;
		Sc = sqrt(x*(x-pa)*(x-pb)*(x-c));
		Sp = Sa + Sb + Sc;
		if (fabs(Sp-S) < EPS) {
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}