#include <stdio.h>
#include <math.h>

int main()
{
	double x1,y1,x2,y2,x3,y3,xp,yp;
	char a[40],b[40],c[40],d[40];
	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)==8)
	{
		sprintf(a,"%.3lf",fabs(x1*(y2-y3)-x2*(y1-y3)+x3*(y1-y2)));
		sprintf(b,"%.3lf",fabs(x1*(y2-yp)-x2*(y1-yp)+xp*(y1-y2)));
		sprintf(c,"%.3lf",fabs(x1*(yp-y3)-xp*(y1-y3)+x3*(y1-yp)));
		sprintf(d,"%.3lf",fabs(xp*(y2-y3)-x2*(yp-y3)+x3*(yp-y2)));
		sscanf(a,"%lf",&xp);
		sscanf(b,"%lf",&x1);
		sscanf(c,"%lf",&x2);
		sscanf(d,"%lf",&x3);
		if (xp==x1+x2+x3)
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