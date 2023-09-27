#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;
    while (scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF) {
    	y = (c*d-f*a) / (b*d-e*a);
    	if (isnan(y)) y=0; 
    	x = (c-b*y) / a;
    	if (isnan(x)) x=0;
    	
    	printf("%.3f %.3f\n", x, y);
    }
}