#include<stdio.h>
int main(void)
{
	int x[10000],i,a=0;
	while(1){
		scanf("%d",&x[a]);
		if(x[a]==0)
			break;
		a++;
	}
	for(i=0;i<a;i++)
		printf("Case %d: %d\n",i+1,x[i]);
	return 0;
}