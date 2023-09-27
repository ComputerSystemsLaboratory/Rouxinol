#include <cstdio>
#include <cmath>

using namespace std;

inline double out(double ax,double ay,double bx,double by){
	return bx * ay - by * ax;
}

int main(void){
	double x1, y1, x2, y2, x3, y3, px, py;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&px,&py) != EOF){
		if((out(px - x1,py - y1,x2 - x1,y2 - y1) > 0 && out(px - x2,py - y2,x3 - x2,y3 - y2) > 0 && out(px - x3,py - y3,x1 - x3,y1 - y3) > 0) || (out(px - x1,py - y1,x2 - x1,y2 - y1) < 0 && out(px - x2,py - y2,x3 - x2,y3 - y2) < 0 && out(px - x3,py - y3,x1 - x3,y1 - y3) < 0)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}