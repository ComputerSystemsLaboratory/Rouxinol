#include <cstdio>
using namespace std;

int main(){
	double a, b, c, d, e, f, x, y;
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f)!=EOF){
		x = (b * f - c * e) / (b * d - a * e);
		y = (c * d - a * f) / (b * d - a * e);
		if(-0.0005 < x && x <= 0.0) x = 0.0;
		if(-0.0005 < y && y <= 0.0) y = 0.0;
		printf("%.3lf %.3lf\n", x, y);
	}

	return 0;
}