#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	double x1,x2,x3,y1,y2,y3,xp,yp;
	double calc1,calc2,calc3;

	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
		calc1 = (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);
		calc2 = (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
		calc3 = (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);

		if((calc1>0&&calc2>0&&calc3>0) || (calc1<0&&calc2<0&&calc3<0)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
    return 0;
}