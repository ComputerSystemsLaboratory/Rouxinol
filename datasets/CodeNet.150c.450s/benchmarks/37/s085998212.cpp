#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	double x,y;

	while(true){
		cin >> a >> b >> c >> d >> e >> f;
		if(cin.eof()) break;

		y=(double)(a*f-c*d)/(a*e-b*d);
		x=(double)(c-b*y)/a;

		cout << fixed;
		cout << setprecision(3) << x << " " << y << endl;
	}
	return 0;
}