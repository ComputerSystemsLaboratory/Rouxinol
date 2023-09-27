#include <cstdio>
#include <iostream>

using namespace std;

struct point {
	double x, y;
};

struct segLine {
	point s, e;	
}segA, segB;

int main() {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf ("%lf%lf%lf%lf", &segA.s.x, &segA.s.y, &segA.e.x, &segA.e.y);
		scanf ("%lf%lf%lf%lf", &segB.s.x, &segB.s.y, &segB.e.x, &segB.e.y);
		if ((segA.e.y-segA.s.y)*(segB.e.x-segB.s.x)==(segB.e.y-segB.s.y)*(segA.e.x-segA.s.x))  printf ("YES\n");
		else printf ("NO\n");
	}
	return 0; 
}