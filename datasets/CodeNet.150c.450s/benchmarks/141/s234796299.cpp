#include<cstdio>
#include<cmath>

double x1,y01,x2,y2,x3,y3,xp,yp;

double mennseki (double x_1,double y_1,double x_2,double y_2,double x_3,double y_3)
{
	x_2-=x_1;
	y_2-=y_1;
	x_3-=x_1;
	y_3-=y_1;
	return fabs(x_2*y_3-x_3*y_2)/2;
}

int main()
{

	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y01,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF)
	{
		if(mennseki(x1,y01,x2,y2,xp,yp)+mennseki(x3,y3,x2,y2,xp,yp)+mennseki(x1,y01,x3,y3,xp,yp)==mennseki(x1,y01,x2,y2,x3,y3))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}