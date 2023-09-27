#include<stdio.h>
int main(void)
{
	int S,T,ST,a,b,c,d,e,f,g,h;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%d %d %d %d",&e,&f,&g,&h);
	S=a+b+c+d;
	T=e+f+g+h;
	if(S<T){
		printf("%d\n",T);
	}
	else{
		printf("%d\n",S);
	}
	return 0;
}