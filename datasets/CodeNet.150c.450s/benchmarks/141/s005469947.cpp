#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

double heron(double a,double b, double c)
{
	double s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
	double x1,x2,x3,y1,y2,y3,xp,yp,AB,BC,CA,AP,BP,CP,S,PS;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
		//A(x1,y1) B(x2,y2) C(x3,y3) P(xp,yp)
		AB = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		BC = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		CA = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

		AP = sqrt(pow(xp-x1,2)+pow(yp-y1,2));
		BP = sqrt(pow(xp-x2,2)+pow(yp-y2,2));
		CP = sqrt(pow(xp-x3,2)+pow(yp-y3,2));

		S = heron(AB,BC,CA);
		PS = (heron(AB,AP,BP)+heron(BC,BP,CP)+heron(CA,CP,AP));
		
		if((PS-S)<0.0001)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	
	}

	return 0;
}