#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	double x,y;
	while(cin >> a >> b >> c >> d >> e >> f){
		y=(d*c-a*f)/(b*d-a*e);
		x=(c-b*y)/a;
		x*=1000;
		x+=0.5;
		x=floor(x);
		x/=1000;
		y*=1000;
		y+=0.5;
		y=floor(y);
		y/=1000;
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	return 0; 
}