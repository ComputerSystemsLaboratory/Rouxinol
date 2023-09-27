#include<stdio.h>

int main(void)
{
	double x1,y1,x2,y2,x3,y3,xp,yp,p,q;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp) !=EOF)
	{
		if(x1==0&&y1==0)
		{
		}
		else
		{
			x2-=x1;
			x3-=x1;
			xp-=x1;
			y2-=y1;
			y3-=y1;
			yp-=y1;
			x1=0;
			y1=0;
		}

		p=(y2*xp-x2*yp)/(x3*y2-x2*y3);
		q=(y3*xp-x3*yp)/(x2*y3-x3*y2);
		
		double w=p+q;
		
		if(p>=0&&q>=0&&w<1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}