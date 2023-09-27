#include<stdio.h>
int main(void)
{
	int n=0,m=0,x=0,w=0,n2=0,m2=0,x2=0,w2=0,s=0,t=0;
	scanf("%d %d %d %d",&n,&m,&x,&w);	
	scanf("%d %d %d %d",&n2,&m2,&x2,&w2);
	s=n+m+x+w;
	t=m2+n2+x2+w2;
	if(s>t||s==t){
		printf("%d\n",s);
	}	
	else{
		printf("%d\n",t);
	}
}