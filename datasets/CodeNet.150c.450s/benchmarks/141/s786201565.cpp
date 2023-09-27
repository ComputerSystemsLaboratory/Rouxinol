#include <iostream>

using namespace std;

int main()
{
	float x[4], y[4], z1, z2, z3;
	while (scanf("%f %f %f %f %f %f %f %f", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3])!= EOF) {
		
		z1=(x[2]-x[1])*(y[3]-y[1])-(y[2]-y[1])*(x[3]-x[1]);
		z2=(x[0]-x[2])*(y[3]-y[2])-(y[0]-y[2])*(x[3]-x[2]);
		z3=(x[1]-x[0])*(y[3]-y[0])-(y[1]-y[0])*(x[3]-x[0]);
		
		if ((z1 < 0 && z2 < 0 && z3 < 0) || (z1 > 0 && z2 > 0 && z3 > 0)) printf("YES\n");
		else printf("NO\n");
	}
}