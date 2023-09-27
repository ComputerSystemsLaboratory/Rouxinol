#include<stdio.h>
int main(void)
{
	int n,a,s,i,d,c,j,x,g,w,z,m;
	while(scanf("%d %d",&a,&s)!=EOF){
		w=a; z=s;
		if(a==0&&s==0) break;
		if(a<s){
			n=a;
			a=s;
			s=n;
		}
		while(s!=0){
			a=a%s;
			g=a;
			a=s;
			s=g;
		}
		m=(w/a)*(z/a)*a;
		printf("%d %d\n",a,m);	
	}
	return 0;
}