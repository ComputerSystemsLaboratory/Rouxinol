#include<stdio.h>
int main(void)
{
	int x,cunt;
	cunt=1;
	scanf("%d",&x);
	while(x != 0){
		printf("Case %d: %d\n",cunt,x);
		scanf("%d",&x);
		cunt++;
	}
	return 0;
}