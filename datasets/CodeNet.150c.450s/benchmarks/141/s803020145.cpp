#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF){
		double a1 = (xp-x1)*(y2-y1)-(yp-y1)*(x2-x1);
		bool parity = a1 > 0.0;

		double a2 = (xp-x2)*(y3-y2)-(yp-y2)*(x3-x2);
		if(parity ^ (a2 > 0.0)){
			puts("NO");
			continue;
		}

		double a3 = (xp-x3)*(y1-y3)-(yp-y3)*(x1-x3);
		puts(parity^(a3>0.0) ? "NO" : "YES");
	}
	return 0;
}