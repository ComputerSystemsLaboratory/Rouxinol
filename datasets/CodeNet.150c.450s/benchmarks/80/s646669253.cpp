#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,x,y;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%d %d %d %d",&e,&f,&g,&h);
	x=a+b+c+d;
	y=e+f+g+h;
	if(x>y || x==y) {
		printf("%d\n",x);
	}
	else {
		printf("%d\n",y);
	}
	return 0;
}
	