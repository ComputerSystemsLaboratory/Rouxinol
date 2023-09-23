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
        if(x == -0.0) x=0;
        if(y == -0.0) y=0;

		cout << fixed << setprecision(3) << x << ' ' << y <<endl;
	}
	return 0;
}