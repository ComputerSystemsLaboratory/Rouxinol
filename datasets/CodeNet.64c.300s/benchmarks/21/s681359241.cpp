#include <iostream>
#include "stdio.h"
//#include "math.h"

using namespace std;

int main(){
	double a,b,c,d,e,f,x,y;
	while(cin.eof()==false){
//		break;
	a=10000;
	cin >> a >> b >> c >> d >> e >> f;
	if (a==10000){
		break;
	}

	double under = a*e-b*d;
	if((c*e-b*f)/under<0.0005 && (c*e-b*f)/under>-0.0005){
		x=0;
	}
	else{
		x=(c*e-b*f)/under;
	}
	if((a*f-c*d)/under<0.0005 && (a*f-c*d)/under>-0.0005){
		y=0;
	}
	else{
		y=(a*f-c*d)/under;
	}

//	cout << (c*e-b*f)/under << " " << (a*f-c*d)/under << endl;
	printf("%.3f %.3f\n",x,y);
	}
}