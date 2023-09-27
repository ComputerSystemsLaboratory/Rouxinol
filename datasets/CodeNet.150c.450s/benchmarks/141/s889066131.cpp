#include <cstdio>
#include <iostream>

using namespace std;

struct point {
	double x, y;
}A, B, C, P;

double crossProd(point A, point B, point C) {
	return (B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x);
}

int main() {
	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y, &P.x, &P.y) != EOF) {
		if (crossProd(A, B, P) > 0 && crossProd(B, C, P) > 0 && crossProd(C, A, P) > 0
		 || crossProd(A, P, B) > 0 && crossProd(B, P, C) > 0 && crossProd(C, P, A) > 0) puts("YES");
		else puts("NO");
	}
	return 0;
}