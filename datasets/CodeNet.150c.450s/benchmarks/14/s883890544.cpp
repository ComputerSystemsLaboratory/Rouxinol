#include<stdio.h>
int main(void)
{
	int a,s,d,f,g,h,i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(i%3==0)
			printf(" %d",i);
		else if(i%10==3)
			printf(" %d",i);
		else{
			d=i;
			while(1){
				if(d<10)
					break;
				d=d/10;
				h=d%10;
				if(h==3){
					printf(" %d",i);
					break;
				}
			}
		}
	}
	printf("\n");
	return 0;
}