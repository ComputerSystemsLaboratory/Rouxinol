#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	double x1, y1, x2, y2, x3, y3, px, py;
	double a, b, c, ap, bp, cp;
	double tmp;
	double s2, sa2, sb2, sc2;
	double s, sa, sb, sc;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>px>>py){
		a = sqrt(fabs((x2-x3) * (x2-x3) + (y2-y3) * (y2-y3)));
		b = sqrt(fabs((x1-x3) * (x1-x3) + (y1-y3) * (y1-y3)));
		c = sqrt(fabs((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)));
		ap = sqrt(fabs((x1-px) * (x1-px) + (y1-py) * (y1-py)));
		bp = sqrt(fabs((x2-px) * (x2-px) + (y2-py) * (y2-py)));
		cp = sqrt(fabs((x3-px) * (x3-px) + (y3-py) * (y3-py)));
		
		tmp = (a+b+c) / 2;
		s2 = tmp * (tmp-a) * (tmp-b) * (tmp-c);
		s = sqrt(s2);
		tmp = (a+bp+cp) / 2;
		sa2 = tmp * (tmp-a) * (tmp-bp) * (tmp-cp);
		sa = sqrt(sa2);
		tmp = (b+ap+cp) / 2;
		sb2 = tmp * (tmp-b) * (tmp-ap) * (tmp-cp);
		sb = sqrt(sb2);
		tmp = (c+ap+bp) / 2;
		sc2 = tmp * (tmp-c) * (tmp-ap) * (tmp-bp);
		sc = sqrt(sc2);
		if(fabs(sa+sb+sc-s) < 1e-9) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}