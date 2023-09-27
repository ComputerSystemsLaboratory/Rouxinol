#include<stdio.h>
int main(){
	double a,b,c,d,e,f;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=-1){
		printf("%.3lf %.3lf\n",(c*e-f*b)==0?0:(c*e-f*b)/(a*e-d*b),(c*d-a*f)==0?0:(c*d-a*f)/(b*d-a*e));
	}
	return 0;
}