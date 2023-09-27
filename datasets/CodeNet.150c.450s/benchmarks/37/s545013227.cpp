#include<stdio.h>
int main(){
	double a,b,c,d,e,f;
	double x,y,z,v;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=-1){
		x=(c*e-b*f)/(a*e-b*d);
		y=(c*d-a*f)/(b*d-a*e);
		if(x>=-0.0005&&x<0.0005)	x=0;
		if(y>=-0.0005&&y<0.0005)	y=0;
		printf("%.3lf %.3lf\n",x,y);
	}
}