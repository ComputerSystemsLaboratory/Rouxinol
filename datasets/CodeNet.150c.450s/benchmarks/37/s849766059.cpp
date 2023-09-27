#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, d, e, f;
	while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF){
		double ans1 = (e*c-f*b)/(e*a-b*d);
		double ans2 = (d*c-f*a)/(b*d-a*e);
		ans1 = (fabs(ans1) < 1e-15) ? 0.0 : ans1;
		ans2 = (fabs(ans2) < 1e-15) ? 0.0 : ans2;
		printf("%.3lf %.3lf\n", ans1, ans2);
	}
	
	return 0;
}