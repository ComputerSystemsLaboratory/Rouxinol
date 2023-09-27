#include<stdio.h>
int main(void)
{
	int a,b,x,y,i,n;
	while(1){
		x=0; y=0;
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			if(a>b) x=x+a+b;
			else if(a<b) y=y+a+b;
			else{
				x=x+a; y=y+b;
			}
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}