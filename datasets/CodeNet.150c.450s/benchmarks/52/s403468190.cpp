#include<stdio.h>
int main(void)
{
	int car;
	int a[11];
	int i,s;
	i=0;
	while(scanf("%d",&car)!=EOF){
		if(car!=0){
			a[i]=car;
			i++;
		}
		else {
			i--;
			printf("%d\n",a[i]);
		}
	}
	return 0;
}