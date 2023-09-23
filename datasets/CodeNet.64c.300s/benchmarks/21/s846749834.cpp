#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>   
using namespace std;
 
int main(){
	double a,b,c,d,e,f,aa,bb,cc,i = 0,x,y;
	while(cin >> a >> b >> c >> d >> e >> f){
	aa = a;
	bb = b;
	cc = c;
	a = a * d;
	b = b * d;
	c = c * d;

	d = d * aa;
	e = e * aa;
	f = f * aa;

	y = (c - f) / (b - e);
	x = cc - (bb * y);
	x = x / aa;
    cout << fixed << setprecision(3) << x << " " << fixed << setprecision(3) << y << endl;
	}
}