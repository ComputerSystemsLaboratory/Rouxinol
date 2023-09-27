#include <stdio.h>

int main(void)
{
	float x[3], y[3], xp, yp;
	float sM, s1, s2, s3;
	
	while (scanf("%f %f %f %f %f %f %f %f", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &xp, &yp) != EOF){
		
		sM = ((x[1] - x[0]) * (y[2] - y[0]) - (x[2] - x[0]) * (y[1] - y[0])) / 2;
		if (sM < 0){
			sM *= -1;
		}
		
		s1 = ((xp - x[2]) * (y[1] - y[2]) - (x[1] - x[2]) * (yp - y[2])) / 2;
		if (s1 < 0){
			s1 *= -1;
		}
		
		s2 = ((xp - x[1]) * (y[0] - y[1]) - (x[0] - x[1]) * (yp - y[1])) / 2;
		if (s2 < 0){
			s2 *= -1;
		}
		
		s3 = ((xp - x[0]) * (y[2] - y[0]) - (x[2] - x[0]) * (yp - y[0])) / 2;
		if (s3 < 0){
			s3 *= -1;
		}
		
		if (sM == s1 + s2 + s3){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}