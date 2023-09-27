#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t; scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		double x1,y1,x2,y2,x3,y3,x4,y4;
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		double x5 = x2-x1;
		double y5 = y2-y1;
		double x6 = x4-x3;
		double y6 = y4-y3;
		double det = x5*y6-y5*x6;
		if(fabs(det)<0.00000001) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}