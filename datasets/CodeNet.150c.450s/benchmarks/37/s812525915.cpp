#include <iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

const double EPS=1e-6;

int main() {
	double a,b,c,d,e,f;
	double x,y;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		x=(c*e-b*f)/(a*e-b*d);
		y=(a*f-c*d)/(a*e-b*d);
		if(x>-EPS)x=abs(x);
		if(y>-EPS)y=abs(y);
		cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
	}
	return 0;
}