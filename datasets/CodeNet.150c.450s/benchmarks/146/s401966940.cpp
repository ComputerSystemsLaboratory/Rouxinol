#include <stdio.h>

struct point{
	double x;
	double y;
};

double t(point p1, point p2){
	return (p1.y - p2.y)/(p1.x - p2.x);
}

int main(void){
	struct point p[4];
	int n = 0;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
			&(p[0].x), &(p[0].y),
			&(p[1].x), &(p[1].y),
			&(p[2].x), &(p[2].y),
			&(p[3].x), &(p[3].y));
		if(t(p[0], p[1]) == t(p[2], p[3])){
			puts("YES");
		}else{
			puts("NO");
		}
	}
	return 0;
}