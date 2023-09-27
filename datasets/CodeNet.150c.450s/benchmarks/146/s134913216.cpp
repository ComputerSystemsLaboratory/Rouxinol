#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int n;
double xa, ya, xb, yb, xc, yc, xd, yd, d1, d2;

int main() {
	scanf("%d",&n);
	rep(i,n) {
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd);
		if (xa==xb) d1 = 1e200;
		else d1 = (yb-ya)/(xb-xa);
		if (xc==xd) d2 = 1e200;
		else d2 = (yd-yc)/(xd-xc);
		if (abs(d1-d2)<1e-10) printf("YES\n");
		else printf("NO\n");
	}
}
