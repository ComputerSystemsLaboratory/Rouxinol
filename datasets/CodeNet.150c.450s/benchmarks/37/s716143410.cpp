#include <stdio.h>

int main(){
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
		x = ((double)e*(double)c-(double)b*(double)f)/((double)e*(double)a-(double)b*d);
		y = ((double)d*(double)c-(double)a*(double)f)/((double)b*(double)d-(double)a*e);
		if(-0.005 < x && x < 0.005) x = 0;
		if(-0.005 < y && y < 0.005) y = 0;
		printf("%.3f %.3f\n", x, y);
	}
}