#include<stdio.h>
int main(void)
{
	int n,a,b,a2,b2,i;
	while(1){
	scanf("%d",&n);
	if(n==0) break;
	a=0;
	b=0;
	a2=0;
	b2=0;
	for(i=0;i<n;i++){
	scanf("%d %d",&a,&b);
		if(a<b){
			b2+=a+b;
		}
		if(a>b){
			a2+=a+b;
		}
		else if(a==b){
			a2+=a;
			b2+=b;
		}
	}
	printf("%d %d\n",a2,b2);
	}
}