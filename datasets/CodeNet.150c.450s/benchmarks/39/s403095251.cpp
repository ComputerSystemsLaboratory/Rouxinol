#include <stdio.h>
#include <math.h>

int main(){
	double a,b,area,length;
	scanf("%lf %lf",&a,&b);
	area = a * b;
	length = 2 * (a + b); 
	printf("%.0f %.0f\n",area,length);
	return 0;
}