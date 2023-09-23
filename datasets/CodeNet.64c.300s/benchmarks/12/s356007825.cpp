#include <stdio.h>
#include <math.h>

int func(double x){
	double x1;
	x1 = x* x * x;
	return x1;
}
int main(){
	double x,x1;
	scanf("%lf",&x);
	x1 = func(x);
	printf("%.0f\n",x1);
	return 0;
}