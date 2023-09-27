// 解二元一次方程组 
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double a,b,c,d,e,f,x,y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		y = (a*f - c*d)/(a*e - b*d);
		if (a != 0) 
			x = (c - b*y) / a;
		else 
			x = (f - e*y) / d;
		cout << fixed <<setprecision(3)<< x <<" " << y << endl;	
	}
} 
