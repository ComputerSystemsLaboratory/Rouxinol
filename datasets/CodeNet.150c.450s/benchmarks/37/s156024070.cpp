#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	double a,b,c,d,e,f;
	double x,y;
	cout << fixed;
	cout.precision(3);
	while(cin >> a >>b >> c >> d >> e >>f){
		y=(c*d-a*f)/(b*d-a*e); if(y==0) y=0;
		x=(c*e-b*f)/(a*e-b*d); if(x==0) x=0.0;
		cout << x << " " << y << endl;
	}
	return 0;
}