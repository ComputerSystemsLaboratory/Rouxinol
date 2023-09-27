#include<stdio.h>
int main()
{
	int x[10000],i,a;
	i=1;
	a=2;
	while(1){
		scanf("%d",&x[i]);
		a=x[i];
		i++;
		if(a==0){
			i=1;
			break;
		}
	}while(1){
		printf("Case %d: %d\n",i,x[i]);
		i++;
		if(x[i]==0){
			break;
		}
	}
return 0;
}