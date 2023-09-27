#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
double x,y,t=0.001;

double ka(double a,double b,double c,double d) {
	double e,f,g;
	e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	f=sqrt((a-x)*(a-x)+(b-y)*(b-y));
	g=sqrt((c-x)*(c-x)+(d-y)*(d-y));
	return 180*acos((f*f+g*g-e*e)/(2*f*g))/3.141592;
}

int main() {
	double s,a,b,c,d,e,f;
	while(cin >> a >> b >> c >> d >> e >> f >> x >> y) {
    s=ka(a,b,c,d)+ka(c,d,e,f)+ka(a,b,e,f);
	if (360-t<s && 360+t>s) cout << "YES" << endl; else cout << "NO" << endl;
	}
	return 0;
}