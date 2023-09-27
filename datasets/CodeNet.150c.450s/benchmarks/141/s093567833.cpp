#include<stdio.h>
#include<math.h>
double h(double x1,double y1,double x2,double y2,double px,double py){
	  double ax, ay, bx, by;
	  ax = x2 - x1;
	  ay = y2 - y1;
	  bx = px - x1;
	  by = py - y1;
	  return ax*by-ay*bx;
}
int main()
{
	double x1,x2,x3,y1,y2,y3,xp,yp,a,b,c;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
		a=h(x1,y1,x2,y2,xp,yp);
		b=h(x2,y2,x3,y3,xp,yp);
		c=h(x3,y3,x1,y1,xp,yp);
		if((a>0&&b>0&&c>0)||(a<0&&b<0&&c<0)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}