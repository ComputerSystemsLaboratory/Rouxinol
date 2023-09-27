#include <stdio.h>

#define rep(i, n) for(int i=0; i<(int)(n); i++)

int main() {
	int n;
	scanf("%d", &n);
	rep(q, n) {
		double x[4], y[4];
		rep(i, 4) scanf("%lf%lf", x+i, y+i);
		double x1=x[1]-x[0], x2=x[3]-x[2], y1=y[1]-y[0], y2=y[3]-y[2];
		if(x1*y2-x2*y1==0) printf("YES\n");
		else printf("NO\n");
	}
}