#include <cstdio>

int main(){
	int a, b, c, d, e, f;
	double x, y;
	while(scanf("%d %d %d %d %d %d\n", &a, &b, &c, &d, &e, &f) != EOF){
		y = (double)(a * f - c * d) / (double)(a * e - b * d);
		x = ((double)c - (double)b * y) / (double)a;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}