#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;



int main()
{
	double x1,x2,y1,c1,y2,c2,y,x;
	while((scanf("%lf %lf %lf %lf %lf %lf",&x1,&x2,&y1,&y2,&c1,&c2))!=EOF)
	{
		x=((c1*y1-x2*c2)/(x1*c1-x2*y2));
		y=((-(y2*y1)+x1*c2)/(x1*c1-x2*y2));
		if(x==0)
		{
			x=0;
		}
		if(y==0)
		{
			y=0;
		}
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0; 
}