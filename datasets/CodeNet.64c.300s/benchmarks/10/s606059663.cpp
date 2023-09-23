#include<stdio.h>
int main(void)
{
	int a,b,x,y;
	scanf("%d %d",&x,&y);
	while(x!=0 || y!=0){
		if(y>x){
			printf("%d %d\n",x,y);
		}
		else{
			printf("%d %d\n",y,x);
		}
		scanf("%d %d",&x,&y);
	}
	return 0;
}