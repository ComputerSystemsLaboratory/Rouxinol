#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	double a,b,c,d,e,f;
	//int X[2][2]={ {c,b}, {f,e} };
	//int Y[2][2]={ {a,c}, {d,f} };
	double x,y;
	double A,X,Y;
	while(cin>>a>>b>>c>>d>>e>>f){
		A=a*e-b*d;
		X=c*e-b*f;
		Y=a*f-c*d;
		x=(1/A)*X;
		y=(1/A)*Y;
		if(x==-0)
			x=0;
		if(y==-0)
			y=0;

		cout << fixed << setprecision(3) << x << ' ' << y << endl;
	}
	
	return 0;
}