#include<stdio.h>
int main(void)
{
	int x[10000],y[10000],a=0,i;
	while(1){
		scanf("%d %d",&x[a],&y[a]);
		if(x[a]==0&&y[a]==0)
			break;
		if(x[a]>y[a]){
			i=x[a];
			x[a]=y[a];
			y[a]=i;
		}
		a++;
	}
	for(i=0;i<a;i++)
		printf("%d %d\n",x[i],y[i]);
	return 0;
}