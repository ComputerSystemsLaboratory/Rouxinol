#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double det = a*e-b*d;
		double x = 1/det*(c*e - b*f);
		double y = 1/det*(-c*d + a*f);	
		x = round(1000*x) / 1000;
        y = round(1000*y) / 1000;
        if(x==0)x=0;
        if(y==0)y=0;

		cout << fixed << setprecision(3) << x << ' ' << y <<endl;
	}
	return 0;
}