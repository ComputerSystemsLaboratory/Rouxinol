#include<stdio.h>
int main(void)
{
	int b,a,e,d,f,i,c;
	float y,x;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)  {
			y=(float)(c*d-a*f)/(b*d-a*e);
			x=(float)(b*f-c*e)/(b*d-a*e);
		if(x<0.0001 && x>-0.0001){
			x=0;
		}
		if(y<0.0&&y>-0.0001){
			y=0;
		}	
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}