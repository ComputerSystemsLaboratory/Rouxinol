#include<stdio.h>
int n,a,i,x,max,min;
long long s;
int main(void)
{
	
	
	max=-1000000;
	min=1000000;
	s=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a);
		s+=a;
		if(max<a) max=a;
		if(min>a) min=a;
/*		s=s+a;
		if(a==0) printf("AA\n");
		if(s==5019101515) printf("AA\n");*/
	}
	
	printf("%d %d %lld\n",min,max,s);
	
	return 0;
}
