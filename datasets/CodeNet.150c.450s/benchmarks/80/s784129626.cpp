#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,x,y;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	scanf("%d",&h);
	x=a+b+c+d;
	y=e+f+g+h;
	if(x>=y){
		printf("%d\n",x);
	}
	else{
		printf("%d\n",y);
	}
	
	return 0;
}

