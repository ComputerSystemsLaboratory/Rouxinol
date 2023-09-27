#include<stdio.h>
int main()
{

double max,n,R,min;
//int n;
//long R,min;
max=0;min=0;
scanf("%lf",&n);
for(int i=0;i<n;i++)
{
	scanf("%lf",&R);
	if(i==0){min=R;}
	if(i==1){max=R-min;}
if(max<R-min&&i>0)max=R-min;
if(min>R)min=R;
}
printf("%.0lf\n",max);
return 0;
}