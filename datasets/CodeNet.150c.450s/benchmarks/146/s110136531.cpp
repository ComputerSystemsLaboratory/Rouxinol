#include<stdio.h>
#include<math.h>
struct P{double x,y;}p[4],a,b;
P operator-(P l,P r){P a={l.x-r.x,l.y-r.y};return a;}
int main()
{
	int T;
	for(scanf("%d",&T);T--;)
	{
		int i;
		double c;
		for(i=0;i<4;++i)scanf("%lf%lf",&p[i].x,&p[i].y);
		a=p[0]-p[1],b=p[2]-p[3];
		c=a.x*b.y-a.y*b.x;
		puts(fabs(c)<1e-10?"YES":"NO");
	}
	return 0;
}