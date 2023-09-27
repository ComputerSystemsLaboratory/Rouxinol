#include<stdio.h>


float round(float x){
	if(x >= 0){
		x = (int)(x*1000.0 + 0.5);
		x = x/1000.0;
	}else if(x < 0){
		x = (int)(x*1000.0 - 0.5);
		x = x/1000.0;
	}
	return x;
}


int main(){
	float a, b, c, d, e, f;

	while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
		float r = b*d - a*e;
		float x = (b*f - c*e)/r;
		float y = (c*d - a*f)/r;
		//printf("%f %f\n", x, y);
		printf("%0.3f %0.3f\n", round(x), round(y));
	}

	return 0;
}