#include<cstdio>

int main(){
	double a,b,c,d,e,f,x,y;
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) + 1){
		x = ( e * c - b * f) / ( a * e - b * d);
		y = ( - d * c + a * f) / ( a * e - b * d);
		printf("%.3f %.3f\n", x + 0.000001, y + 0.000001);
	}
	return 0;
}