#include<stdio.h>
int main(void)
{
	int x,y;
	
	while(1){
		scanf("%d",&x);
		if(x==0) break;
		y=0;
		x=1000-x;
		while(1){
			if(x<1) break;
			if(x>=500){
				x=x-500; y++;
			}
			else if(x>=100){
				x=x-100; y++;
			}
			else if(x>=50){
				x=x-50; y++;
			}
			else if(x>=10){
				x=x-10; y++;
			}
			else if(x>=5){
				x=x-5; y++;
			}
			else{
				x=x-1; y++;
			}
		}
		printf("%d\n",y);
	}
	return 0;
}