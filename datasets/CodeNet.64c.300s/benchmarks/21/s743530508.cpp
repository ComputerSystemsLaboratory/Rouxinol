#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float marume(float x, float N){
	x = x*pow(10,N);
	x = int(x+0.5-(x<0));
	return x/pow(10,N);
}

int main() {
	float a,b,c,d,e,f,x,y;
	while(cin >> a >> b >> c >> d >> e >> f){
		x = (c*e-b*f)/(a*e-b*d);
		y = (a*f-c*d)/(a*e-b*d);
		cout << fixed << setprecision(3) << marume(x,3) << " " << fixed << setprecision(3) << marume(y,3) << endl;
	}
	return 0;
}