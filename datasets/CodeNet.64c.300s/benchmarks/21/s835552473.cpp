#include <stdio.h>

int main(void){
	double a,b,c,d,e,f,x,y;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(f-((c*d)/a))/(-((b*d)/a)+e);
		x=(c-(b*y))/a;
		if(((y+0.0005)/0.001)==0){
			y=0;
		}
		if(((x+0.0005)/0.001)==0){
			x=0;
		}
		printf("%.3f %.3f\n",x,y);
	}
}