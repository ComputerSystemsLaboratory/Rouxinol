#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,s,t;
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	s=a+b+c+d;
	t=e+f+g+h;
	if(s>t){
		printf("%d\n",s);
	}else{
		printf("%d\n",t);
	}
	return 0;
}