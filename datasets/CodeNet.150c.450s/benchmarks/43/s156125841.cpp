#include<stdio.h>
int main(void)
{
	int a,s,d,f,i,g;
	scanf("%d",&a);
	while(a!=0){
	f=0;
	g=0;
	for(i=1;i<=a;i++){
		scanf("%d %d",&s,&d);
		if(s>d){
			f=f+s+d;
		}
		else if(d>s){
			g=g+s+d;
		}
		else if(d==s){
			g=g+d;
			f=f+s;
		}
	}
	printf("%d %d\n",f,g);
	scanf("%d",&a);
	}
	return 0;
}