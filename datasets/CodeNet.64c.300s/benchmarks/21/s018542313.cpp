#include<cstdio>
int main(void)
{
	double a,b,c,d,e,f;
	double x,y;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		y=(a*f-d*c)/(-(d*b)+a*e);
		x=(c-b*y)/a;
		if(x==0)
		{
			x=0;
		}
		if(y==0)
		{
			y=0;
		}
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}
/*
ax=c-by
->x=(c-by)/a
d((c-by)/a)+ey=f
(dc-dby)/a+ey=f
(dc-dby)+aey=af
-dby+aey=af-dc
y(-db+ae)=af-dc
->y=(af-dc)/(-db+ae)
*/