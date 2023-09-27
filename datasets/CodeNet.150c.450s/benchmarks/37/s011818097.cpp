#include <stdio.h>
#include <math.h>

int main(void) {
	float a,b,c,d,e,f;
	
	while(scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f) != EOF){
		float by = d/a,x,y;
		y = (c*by-f)/(b*by-e);
		x = (c - b*y)/a;
		printf("%.3f %.3f\n",x,y);
	}
	
	return 0;
}