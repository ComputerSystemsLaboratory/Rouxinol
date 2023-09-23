#include <cstdio>
using namespace std;

int main(){
	double a, b, c, d, e, f;
	double x, y;
	
	while((scanf("%lf", &a)) != EOF){
		scanf("%lf%lf%lf%lf%lf", &b, &c, &d, &e, &f);
		
		x = (c * e - f * b) / (a * e - d * b);
		y = (c * d - f * a) / (b * d - e * a);
		
		if(x == -0.0) x = 0;
		if(y == -0.0) y = 0;
		printf("%.3f %.3f\n", x, y);
	}
	
	return 0;
}