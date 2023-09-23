#include<iostream>
#include<stdio.h>
using namespace std;
double dat(double a,double b,double c,double d) {
	return a*d - b*c;
}
int main() {
	double a,b,c,d,e,f;
	while(cin >> a >> b >> c >> d >> e >> f) {
		// クラメルの公式を利用
		double A = dat(a,b,d,e);
		//if(A == 0)
		//	cout << "error" << endl;
		double A1 = dat(c,b,f,e);
		double A2 = dat(a,c,d,f);
		
		// x y
		double x = A1/A;
		double y = A2/A;
		
		// 小数点第4位で四捨五入
		int x_cp;
		int y_cp;
		if(x < 0)
			x_cp = (int)(x*1000 - 0.5);
		else
			x_cp = (int)(x*1000 + 0.5);
		if(y < 0)
			y_cp = (int)(y*1000 - 0.5);
		else
			y_cp = (int)(y*1000 + 0.5);
		
		x = (double)x_cp / 1000;
		y = (double)y_cp / 1000;
		
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}