#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		x=(double)(c*e-b*f)/(a*e-b*d);
		y=(double)(c*d-a*f)/(b*d-a*e);
		if(x==0){
			x=0;
			printf("%0.3f %0.3f\n",x,y);	
		}
		else{
			printf("%0.3f %0.3f\n",x,y);
		}
	}
	return 0;
}