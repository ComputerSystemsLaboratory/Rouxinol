#include <stdio.h>

bool is_up(const float x1, const float y1,
			const float x2, const float y2,
			const float xp, const float yp){
	float y = 0.0;
	y = (y2 - y1)/(x2 - x1)*(xp - x1) + y1;
	return yp > y;
}

bool is_ok(float *x, float *y, float xp, float yp){
	for(int i=0; i<3; ++i){
		if(is_up(x[i], y[i], x[(i+1)%3], y[(i+1)%3], x[(i+2)%3], y[(i+2)%3])
			!= is_up(x[i], y[i], x[(i+1)%3], y[(i+1)%3], xp, yp)){
				return false;
		}
	}
	return true;
}

int main(void){
	float x[3], y[3];
	float xp=0.0, yp=0.0;
	bool ok = false;

	for(int i=0; i<3; ++i){
		x[i] = y[i] = 0.0;
	}

	while(scanf("%f %f %f %f %f %f %f %f",
		x, y, x+1, y+1, x+2, y+2, &xp, &yp) != EOF){
			puts(is_ok(x, y, xp, yp) ? "YES": "NO");
	}
	return 0;
}